// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSocTop.h for the primary calling header

#include "VSocTop___024root.h"
#include "VSocTop__Syms.h"

#include "verilated_dpi.h"

//==========


void VSocTop___024root___ctor_var_reset(VSocTop___024root* vlSelf);

VSocTop___024root::VSocTop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSocTop___024root___ctor_var_reset(this);
}

void VSocTop___024root::__Vconfigure(VSocTop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSocTop___024root::~VSocTop___024root() {
}

void VSocTop___024root___initial__TOP__1(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->read_data_sign_ = 0ULL;
}

void VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__regfile10__DOT__difftest_dut_regs_TOP(QData/*63:0*/ Z0, QData/*63:0*/ ra, QData/*63:0*/ sp, QData/*63:0*/ gp, QData/*63:0*/ tp, QData/*63:0*/ t0, QData/*63:0*/ t1, QData/*63:0*/ t2, QData/*63:0*/ fp, QData/*63:0*/ s1, QData/*63:0*/ a0, QData/*63:0*/ a1, QData/*63:0*/ a2, QData/*63:0*/ a3, QData/*63:0*/ a4, QData/*63:0*/ a5, QData/*63:0*/ a6, QData/*63:0*/ a7, QData/*63:0*/ s2, QData/*63:0*/ s3, QData/*63:0*/ s4, QData/*63:0*/ s5, QData/*63:0*/ s6, QData/*63:0*/ s7, QData/*63:0*/ s8, QData/*63:0*/ s9, QData/*63:0*/ s10, QData/*63:0*/ a11, QData/*63:0*/ t3, QData/*63:0*/ t4, QData/*63:0*/ t5, QData/*63:0*/ t6);
void VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_pc_TOP(QData/*63:0*/ pc_data, QData/*63:0*/ exit_code, CData/*0:0*/ endyn, CData/*0:0*/ exe);
void VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_thepc_TOP(QData/*63:0*/ thepc_data);
extern const VlUnpacked<CData/*1:0*/, 128> VSocTop__ConstPool__TABLE_0bdcfe05_0;
extern const VlUnpacked<CData/*1:0*/, 32> VSocTop__ConstPool__TABLE_287fc343_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSocTop__ConstPool__TABLE_c02984f2_0;
extern const VlUnpacked<CData/*2:0*/, 512> VSocTop__ConstPool__TABLE_344c2b7c_0;

void VSocTop___024root___settle__TOP__2(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__2\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx3;
    CData/*6:0*/ __Vtableidx4;
    CData/*4:0*/ __Vtableidx5;
    SData/*8:0*/ __Vtableidx1;
    // Body
    vlSelf->SocTop__DOT__tim_axi_r_resp = 0U;
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_b_ready = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang = 0ULL;
    } else {
        vlSelf->SocTop__DOT__add_axi_b_ready = (4U 
                                                | (IData)(vlSelf->SocTop__DOT__add_axi_b_ready));
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish)
                ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign)
                    ? (1ULL + (~ (((QData)((IData)(
                                                   vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U])))))
                    : (((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U]))))
                : (((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U]))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish)
                ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign)
                    ? (1ULL + (~ (((QData)((IData)(
                                                   vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))))
                    : (((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U]))))
                : (((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U]))));
    }
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__regfile10__DOT__difftest_dut_regs_TOP(
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [1U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [2U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [3U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [4U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [5U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [6U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [7U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [8U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [9U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x1fU]);
    vlSelf->out_write_ram_ena = (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sigin_inst 
        = ((((0x86U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (0x51U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0xc1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
           | (0x13U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)));
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_pc_TOP(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1, vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code, (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn), vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn);
    vlSelf->SocTop__DOT__tim_axi_r_last = (2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r));
    if ((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))) {
        vlSelf->out_write_ram_addr = vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg;
        vlSelf->out_write_ram_data = vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg;
    } else {
        vlSelf->out_write_ram_addr = 0ULL;
        vlSelf->out_write_ram_data = 0ULL;
    }
    if ((0x86U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
            = ((0x1aU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1
                : ((0x25U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                    ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))
                    : ((0x51U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                        ? ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                          >> 0x20U)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)))
                            : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)))
                        : ((0xc1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1
                            : ((0x85U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1
                                : ((0x43U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                    ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))
                                    : ((0x13U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                        ? ((1U & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                          >> 0x20U)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)))
                                            : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)))
                                        : 0ULL)))))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
            = ((0x1aU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2
                : ((0x25U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                    ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                    : ((0x51U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                        ? ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                          >> 0x20U)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))
                            : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))
                        : ((0xc1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2
                            : ((0x85U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2
                                : ((0x43U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                    ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                    : ((0x13U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                        ? ((1U & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                          >> 0x20U)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))
                                            : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))
                                        : 0ULL)))))));
    }
    vlSelf->SocTop__DOT__add_axi_aw_id = ((IData)(vlSelf->rst)
                                           ? 0U : (
                                                   (0xffU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id) 
                                                      << 8U)));
    vlSelf->SocTop__DOT__tim_axi_b_valid = ((1U != (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m)) 
                                            & (0U != (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m)));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_aw_addr[0U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[1U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[2U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[3U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[4U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[5U] = 0U;
    } else {
        vlSelf->SocTop__DOT__add_axi_aw_addr[4U] = (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr);
        vlSelf->SocTop__DOT__add_axi_aw_addr[5U] = (IData)(
                                                           (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr 
                                                            >> 0x20U));
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_w_data[0U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[1U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[2U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[3U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[4U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[5U] = 0U;
    } else {
        vlSelf->SocTop__DOT__add_axi_w_data[4U] = (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data);
        vlSelf->SocTop__DOT__add_axi_w_data[5U] = (IData)(
                                                          (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data 
                                                           >> 0x20U));
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data 
        = ((IData)(vlSelf->rst) ? 0ULL : ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                            ? ((1U 
                                                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                ? vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data
                                                : ((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                >> 2U)))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                     << 0x20U)
                                                     : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))))
                                            : ((1U 
                                                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                ? ((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                 >> 1U))))
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                  >> 1U))))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                      << 0x10U)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                   >> 1U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                       << 0x20U)
                                                       : 
                                                      ((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                       << 0x30U)))))
                                                : ((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                >> 2U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                 >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                       << 0x38U)
                                                       : 
                                                      ((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                       << 0x30U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                       << 0x28U)
                                                       : 
                                                      ((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                       << 0x20U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                 >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                       << 0x18U)
                                                       : 
                                                      ((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                       << 0x10U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                       << 8U)
                                                       : (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))))))))));
    vlSelf->SocTop__DOT__t_axi_r_valid = ((~ (IData)(vlSelf->rst)) 
                                          & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__t_axi_r_id = 0U;
        vlSelf->SocTop__DOT__add_axi_w_strb = 0U;
    } else {
        vlSelf->SocTop__DOT__t_axi_r_id = ((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                            ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                            : 0U);
        vlSelf->SocTop__DOT__add_axi_w_strb = ((0xffffU 
                                                & vlSelf->SocTop__DOT__add_axi_w_strb) 
                                               | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb) 
                                                  << 0x10U));
    }
    vlSelf->SocTop__DOT__soc_axi_ar_ready = ((0U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                             | (1U 
                                                == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2) 
           - (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                      >> 0x13U))))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2) 
                                         << 0xcU))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask 
        = ((IData)(vlSelf->rst) ? 0U : ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                   ? 0xffU
                                                   : 
                                                  ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                >> 2U)))
                                                     ? 0xf0U
                                                     : 0xfU)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                   ? 
                                                  ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                 >> 1U))))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                  >> 1U))))
                                                      ? 0xcU
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                   >> 1U))))
                                                       ? 0x30U
                                                       : 0xc0U))))
                                                   : 
                                                  ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                >> 2U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                 >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                       ? 0x80U
                                                       : 0x40U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                       ? 0x20U
                                                       : 0x10U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                 >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                       ? 8U
                                                       : 4U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                       ? 2U
                                                       : 1U))))))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res 
        = (((0x3fU >= (0x7fU & ((IData)(0x40U) - (0x3fU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             ? ((- (QData)((IData)((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                  >> 0x3fU)))))) 
                << (0x7fU & ((IData)(0x40U) - (0x3fU 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             : 0ULL) | (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                        >> (0x3fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data 
        = ((0xeU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
            ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit)
                ? (1ULL + (~ (((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U])))))
                : (((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U]))))
            : ((0x1cU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit)
                    ? ((QData)((IData)(((IData)(1U) 
                                        + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U])))) 
                       << 0x20U) : ((QData)((IData)(
                                                    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U])) 
                                    << 0x20U)) : ((0x70U 
                                                   == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 
                                                  ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit)
                                                    ? 
                                                   ((QData)((IData)(
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (~ 
                                                                      vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U])))) 
                                                    << 0x20U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U])) 
                                                    << 0x20U))
                                                   : 
                                                  ((0xe0U 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit)
                                                     ? 
                                                    ((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U] 
                                                      >> 0x1fU)
                                                      ? (QData)((IData)(
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U]))))
                                                      : 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U]))))))
                                                     : 
                                                    ((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U])))
                                                      : (QData)((IData)(
                                                                        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U]))))
                                                    : 0ULL))));
    vlSelf->SocTop__DOT__add_axi_w_last = ((IData)(vlSelf->rst)
                                            ? 0U : 
                                           ((3U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                            | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last) 
                                               << 2U)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
           << (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
           >> (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2 
        = (((0x1fU >= (0x3fU & ((IData)(0x20U) - (0x1fU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             ? ((- (IData)((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                          >> 0x1fU))))) 
                << (0x3fU & ((IData)(0x20U) - (0x1fU 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             : 0U) | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
                      >> (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus 
        = ((((QData)((IData)(((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs)) 
                              << 0x1fU))) << 0x20U) 
            | ((QData)((IData)((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs) 
                                 << 2U) | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))) 
               << 0xbU)) | (QData)((IData)((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie) 
                                             << 7U) 
                                            | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie) 
                                               << 3U)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2 
        = (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
           + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx 
        = ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))
            ? (0xfffU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
            : 0U);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                   + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_aw_qos = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_prot = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_cache = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_burst = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_size = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_len = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_valid = 0U;
        vlSelf->SocTop__DOT__add_axi_w_valid = 0U;
    } else {
        vlSelf->SocTop__DOT__add_axi_aw_qos = ((0xffU 
                                                & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos)) 
                                               | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos) 
                                                  << 8U));
        vlSelf->SocTop__DOT__add_axi_aw_prot = ((0x3fU 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot)) 
                                                | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port) 
                                                   << 6U));
        vlSelf->SocTop__DOT__add_axi_aw_cache = ((0xffU 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache)) 
                                                 | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache) 
                                                    << 8U));
        vlSelf->SocTop__DOT__add_axi_aw_burst = ((0xfU 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst)) 
                                                 | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst) 
                                                    << 4U));
        vlSelf->SocTop__DOT__add_axi_aw_size = ((0x3fU 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size)) 
                                                | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size) 
                                                   << 6U));
        vlSelf->SocTop__DOT__add_axi_aw_len = ((0xffffU 
                                                & vlSelf->SocTop__DOT__add_axi_aw_len) 
                                               | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len) 
                                                  << 0x10U));
        vlSelf->SocTop__DOT__add_axi_aw_valid = ((3U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid)) 
                                                 | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid) 
                                                    << 2U));
        vlSelf->SocTop__DOT__add_axi_w_valid = ((3U 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid) 
                                                   << 2U));
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready 
        = ((((((((0x86U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                 | (0x1aU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
                | (0x25U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
               | (0x51U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
              | (0xc1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
             | (0x85U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0x43U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
           | (0x13U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)));
    vlSelf->SocTop__DOT__rvcpu_we = (1U & ((~ (IData)(vlSelf->rst)) 
                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type)));
    vlSelf->SocTop__DOT__rvcpu_re = (1U & ((~ (IData)(vlSelf->rst)) 
                                           & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type) 
                                              >> 1U)));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc;
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready 
        = (((((0xeU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
              | (0x1cU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
             | (0x38U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0x70U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
           | (0xe0U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)));
    vlSelf->SocTop__DOT__rvcpu_data_addr = ((IData)(vlSelf->rst)
                                             ? 0ULL
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr);
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_thepc_TOP(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o);
    if ((1U & (~ ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))))) {
        vlSelf->SocTop__DOT__i_caceh_resp = ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                                             & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid));
    }
    if (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))) {
        vlSelf->SocTop__DOT__i_cache_addr = (0xfffffffffffffff8ULL 
                                             & vlSelf->SocTop__DOT__rvcpu_inst_addr);
    }
    if ((1U & (~ ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))))) {
        vlSelf->SocTop__DOT__i_cache2__DOT__miss_data 
            = (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid))
                ? vlSelf->SocTop__DOT__arbitrate_i_data
                : 0ULL);
    }
    vlSelf->SocTop__DOT__add_axi_ar_id = ((IData)(vlSelf->rst)
                                           ? 0U : (
                                                   (0xffU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id)) 
                                                   | (((4U 
                                                        == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                        ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_id)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                         ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_id)
                                                         : 0U)) 
                                                      << 8U)));
    if ((1U & (~ ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))))) {
        if (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
             & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid))) {
            if (vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild) {
                if ((vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 3U)))] >= 
                     vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 3U)))])) {
                    vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o = 1U;
                } else if (vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                            >> 3U)))])) {
                        vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o = 0U;
                    }
                }
            } else {
                vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o = 0U;
        }
    }
    if ((1U & (~ ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))))) {
        if (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
             & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid))) {
            if (vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild) {
                if ((vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 3U)))])) {
                    vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t 
                        = (1U & ((~ (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild)) 
                                 | (vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                       >> 3U)))] 
                                    < vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                       >> 3U)))])));
                }
            }
        } else {
            vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t = 0U;
        }
    }
    if ((1U & (~ ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))))) {
        vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok 
            = ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
               & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid));
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_ar_addr[0U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[1U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[2U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[3U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[4U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[5U] = 0U;
    } else {
        vlSelf->SocTop__DOT__add_axi_ar_addr[4U] = (IData)(
                                                           ((4U 
                                                             == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                             ? vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_addr
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                              ? vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_addr
                                                              : 0ULL)));
        vlSelf->SocTop__DOT__add_axi_ar_addr[5U] = (IData)(
                                                           (((4U 
                                                              == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                              ? vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_addr
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                               ? vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_addr
                                                               : 0ULL)) 
                                                            >> 0x20U));
    }
    vlSelf->SocTop__DOT__add_axi_r_ready = ((IData)(vlSelf->rst)
                                             ? 0U : 
                                            ((3U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready)) 
                                             | (((4U 
                                                  == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                 | (5U 
                                                    == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) 
                                                << 2U)));
    if (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))) {
        vlSelf->SocTop__DOT__i_cache_read_ena = 1U;
    } else if (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid))) {
        vlSelf->SocTop__DOT__i_cache_read_ena = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_qos = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_prot = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_cache = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_burst = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_len = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_size = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_valid = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                         >> 2U))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                       >> 2U))));
        vlSelf->SocTop__DOT__add_axi_ar_qos = ((0xffU 
                                                & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos)) 
                                               | (((4U 
                                                    == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                    ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_qos)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                     ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_qos)
                                                     : 0U)) 
                                                  << 8U));
        vlSelf->SocTop__DOT__add_axi_ar_prot = ((0x3fU 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot)) 
                                                | (((4U 
                                                     == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                     ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_prot)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                      ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_prot)
                                                      : 0U)) 
                                                   << 6U));
        vlSelf->SocTop__DOT__add_axi_ar_cache = ((0xffU 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache)) 
                                                 | (((4U 
                                                      == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                      ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_cache)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                       ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_cache)
                                                       : 2U)) 
                                                    << 8U));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal 
            = (IData)((0x1bU == (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                          >> 2U))));
        vlSelf->SocTop__DOT__add_axi_ar_burst = ((0xfU 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst)) 
                                                 | (((4U 
                                                      == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                      ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_burst)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                       ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_burst)
                                                       : 1U)) 
                                                    << 4U));
        vlSelf->SocTop__DOT__add_axi_ar_len = ((0xffffU 
                                                & vlSelf->SocTop__DOT__add_axi_ar_len) 
                                               | (((4U 
                                                    == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                    ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_len)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                     ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_len)
                                                     : 0U)) 
                                                  << 0x10U));
        vlSelf->SocTop__DOT__add_axi_ar_size = ((0x3fU 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size)) 
                                                | (((4U 
                                                     == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                     ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_size)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                      ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_size)
                                                      : 3U)) 
                                                   << 6U));
        vlSelf->SocTop__DOT__add_axi_ar_valid = ((3U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid)) 
                                                 | (((4U 
                                                      == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                      ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                      & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid))) 
                                                    << 2U));
    }
    vlSelf->SocTop__DOT__arbitrate_d_ok = ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                            ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid)
                                            : ((2U 
                                                == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                               & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid) 
           & (~ (IData)((0U != vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena 
        = ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)) 
            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
           & (0ULL != vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((0x19U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                    >> 2U)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type = 
        ((((IData)(vlSelf->rst) ? 0U : (IData)((0x1cU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                    >> 2U))))) 
          << 7U) | ((((IData)(vlSelf->rst) ? 0U : (IData)(
                                                          (0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                               >> 2U))))) 
                     << 6U) | ((((IData)(vlSelf->rst)
                                  ? 0U : (IData)((6U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                      >> 2U))))) 
                                << 5U) | ((((IData)(vlSelf->rst)
                                             ? 0U : (IData)(
                                                            (4U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                 >> 2U))))) 
                                           << 4U) | 
                                          ((((IData)(vlSelf->rst)
                                              ? 0U : (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                  >> 2U))))) 
                                            << 3U) 
                                           | ((((IData)(vlSelf->rst)
                                                 ? 0U
                                                 : (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                >> 2U))))) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : (IData)(
                                                              (3U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : (IData)(
                                                               (8U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                    >> 2U))))))))))));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__t_axi_r_data = 0ULL;
        vlSelf->SocTop__DOT__t_axi_r_resp = 0U;
    } else {
        vlSelf->SocTop__DOT__t_axi_r_data = ((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                              ? vlSelf->read_data_sign_
                                              : 0ULL);
        vlSelf->SocTop__DOT__t_axi_r_resp = (3U & ((IData)(vlSelf->SocTop__DOT__io_axi_r_resp) 
                                                   >> 4U));
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data 
        = (((((0x86U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
              | (0x1aU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
             | (0x25U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0x51U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))
            ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang
            : (((((0xc1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                  | (0x85U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
                 | (0x43U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
                | (0x13U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu
                : 0ULL));
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success 
        = ((((~ (IData)(vlSelf->rst)) & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))) 
            & (1U == ((IData)(vlSelf->rst) ? 0U : (0xfU 
                                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                      >> 8U))))) 
           & (0U == ((IData)(vlSelf->rst) ? 0U : (3U 
                                                  & ((0xfffffffU 
                                                      & ((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp) 
                                                         >> 2U)) 
                                                     | ((IData)(vlSelf->SocTop__DOT__io_axi_b_resp) 
                                                        >> 4U))))));
    vlSelf->SocTop__DOT__rvcpu_data_o = ((1U & ((IData)(vlSelf->rst) 
                                                | (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))))
                                          ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data);
    vlSelf->SocTop__DOT__time_axi6__DOT__wmask = (((QData)((IData)(
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                                                >> 0xfU)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                                                >> 0xeU)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                                                >> 0xdU)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                                                >> 0xcU)))))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                                                >> 0xbU)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                                                >> 0xaU)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                                                >> 9U)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                                                >> 8U)))))))))));
    vlSelf->SocTop__DOT__t_axi_ar_ready = ((~ (IData)(vlSelf->rst)) 
                                           & (IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready));
    vlSelf->SocTop__DOT__rvcpu_wmask = ((1U & ((IData)(vlSelf->rst) 
                                               | (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))))
                                         ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res 
        = (((QData)((IData)((- (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res 
        = (((QData)((IData)((- (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res 
        = (((QData)((IData)((- (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2 
        = (1U & ((((IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    vlSelf->SocTop__DOT__time_axi6__DOT__mode_right 
        = (IData)(((((((0U == (0xff00U & vlSelf->SocTop__DOT__add_axi_aw_len)) 
                       & (0x30U == (0x38U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size)))) 
                      & (4U == (0xcU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst)))) 
                     & (0U == (0xf0U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache)))) 
                    & (0U == (0x38U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot)))) 
                   & (0U == (0xf0U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos)))));
    vlSelf->SocTop__DOT__soc_axi_w_ready = (1U & ((
                                                   ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                                  >> 2U));
    vlSelf->SocTop__DOT__soc_axi_aw_ready = (IData)(
                                                    ((((((((4U 
                                                            == 
                                                            (4U 
                                                             & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))) 
                                                           & (4U 
                                                              == 
                                                              (4U 
                                                               & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)))) 
                                                          & (0U 
                                                             == 
                                                             (0xff0000U 
                                                              & vlSelf->SocTop__DOT__add_axi_aw_len))) 
                                                         & (0xc0U 
                                                            == 
                                                            (0x1c0U 
                                                             & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size)))) 
                                                        & (0x10U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst)))) 
                                                       & (0x200U 
                                                          == 
                                                          (0xf00U 
                                                           & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache)))) 
                                                      & (0U 
                                                         == 
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot)))) 
                                                     & (0U 
                                                        == 
                                                        (0xf00U 
                                                         & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos)))));
    vlSelf->SocTop__DOT__tim_axi_w_ready = (1U & ((
                                                   ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                                  >> 1U));
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) {
        if (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
              == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                  >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok = 1U;
        } else if (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                     == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok = 1U;
        }
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok = 0U;
    }
    vlSelf->SocTop__DOT__d_cache_data_out = ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                              ? (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                                   == 
                                                   (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                    >> 9U)) 
                                                  & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))
                                                  ? vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data
                                                  : 
                                                 (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                                    == 
                                                    (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                     >> 9U)) 
                                                   & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))
                                                   ? vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data
                                                   : 0ULL))
                                              : 0ULL);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_ctrl_req 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                        | (IData)(vlSelf->SocTop__DOT__rvcpu_we)) 
                                       & (~ ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                              ? ((4U 
                                                  == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                                 & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                                      == 
                                                      (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                       >> 9U)) 
                                                     & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                                    | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                                        == 
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 9U)) 
                                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))
                                              : ((4U 
                                                  == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                                 & ((4U 
                                                     == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                                    & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                                         == 
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 9U)) 
                                                        & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                                       | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                                           == 
                                                           (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                            >> 9U)) 
                                                          & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)))))))));
    vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand 
        = (((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
              & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                 >> 2U)) & (0U == (0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                            >> 0x10U)))) 
            & (3U == (7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                            >> 6U)))) & (1U == (3U 
                                                & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                                   >> 4U))));
    vlSelf->SocTop__DOT__tim_axi_ar_ready = (((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                              >> 1U) 
                                             & (IData)(
                                                       ((((((0U 
                                                             == 
                                                             (0xff00U 
                                                              & vlSelf->SocTop__DOT__add_axi_ar_len)) 
                                                            & (0x30U 
                                                               == 
                                                               (0x38U 
                                                                & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size)))) 
                                                           & (4U 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst)))) 
                                                          & (0U 
                                                             == 
                                                             (0xf0U 
                                                              & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache)))) 
                                                         & (0U 
                                                            == 
                                                            (0x38U 
                                                             & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot)))) 
                                                        & (0U 
                                                           == 
                                                           (0xf0U 
                                                            & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))))));
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_o = 1U;
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_o = 0U;
    }
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_o = 1U;
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_o = 0U;
    }
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((1U & (~ (vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
                      [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                         >> 3U)))] 
                      & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 3U)))]))))) {
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                              >> 3U)))]))) {
                vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_t = 1U;
            }
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_t = 0U;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)))) {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp = 1U;
                }
            } else {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp = 1U;
            }
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))])) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp = 1U;
            } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 3U)))] 
                        < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 3U)))])) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp = 0U;
        }
    }
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((1U & (~ (vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
                      [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                         >> 3U)))] 
                      & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 3U)))]))))) {
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                              >> 3U)))]))) {
                vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_t = 1U;
            }
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_t = 0U;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)))) {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp = 1U;
                }
            } else {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp = 1U;
            }
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))])) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp = 1U;
            } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 3U)))] 
                        < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 3U)))])) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp = 0U;
        }
    }
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data 
                = vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data;
        } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                       >> 3U)))] & 
                    (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data 
                = vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data;
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data = 0ULL;
    }
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data 
            = ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                   >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                             >> 3U)))] 
                                                >= 
                                                vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                             >> 3U)))]))
                ? vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data
                : ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                       >> 3U)))] & 
                    (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))]))
                    ? vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data
                    : 0ULL));
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data = 0ULL;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
            if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)))) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1 = 1U;
            }
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))])) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1 = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1 = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
            if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)))) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1 = 1U;
            }
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))])) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1 = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1 = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)))) {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2 = 1U;
                }
            }
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))])) {
                if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))])) {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2 = 1U;
                }
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2 = 0U;
        }
    }
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr 
            = (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__rvcpu_data_addr);
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr = 0ULL;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)))) {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2 = 1U;
                }
            }
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))])) {
                if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))])) {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2 = 1U;
                }
            }
        }
    }
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr 
            = (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__rvcpu_data_addr);
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr = 0ULL;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
            if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)))) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1 = 0xffU;
            }
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))])) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1 = 0xffU;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1 = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
            if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)))) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1 = 0xffU;
            }
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))])) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1 = 0xffU;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1 = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)))) {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2 = 0xffU;
                }
            }
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))])) {
                if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))])) {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2 = 0xffU;
                }
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2 = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)))) {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2 = 0xffU;
                }
            }
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))])) {
                if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))])) {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2 = 0xffU;
                }
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2 = 0U;
        }
    }
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr 
                = (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__rvcpu_data_addr);
        } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                       >> 3U)))] & 
                    (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr 
                = (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__rvcpu_data_addr);
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr = 0ULL;
    }
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr 
            = ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                   >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                             >> 3U)))] 
                                                >= 
                                                vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                             >> 3U)))]))
                ? (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__rvcpu_data_addr)
                : ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                       >> 3U)))] & 
                    (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))]))
                    ? (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__rvcpu_data_addr)
                    : 0ULL));
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr = 0ULL;
    }
    if ((1U & (~ ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok 
            = ((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
               & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)));
    }
    if ((1U & (~ ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok 
            = ((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
               & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)));
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)))) {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok = 1U;
                }
            } else {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok = 1U;
            }
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))])) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok = 1U;
            } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 3U)))] 
                        < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 3U)))])) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)))) {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok = 1U;
                }
            } else {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok = 1U;
            }
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))] >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                    >> 3U)))])) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok = 1U;
            } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 3U)))] 
                        < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 3U)))])) {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok = 0U;
        }
    }
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type = 2U;
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type = 0U;
    }
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type = 8U;
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type = 0U;
    }
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type = 1U;
        } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                       >> 3U)))] & 
                    (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type = 1U;
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type = 0U;
    }
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type 
            = ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                   >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                             >> 3U)))] 
                                                >= 
                                                vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                             >> 3U)))]))
                ? 4U : ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 3U)))] 
                         & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                            [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                               >> 3U)))] 
                            < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                            [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                               >> 3U)))]))
                         ? 4U : 0U));
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type = 0U;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req 
        = (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish)) 
            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready)) 
           | ((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign)) 
              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready)));
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = 0ULL;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                      | (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                          | (4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                              | (8U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                    if ((0x10U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = 0xbULL;
                    }
                }
            }
        }
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = 0ULL;
    }
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = 0x8000000000000007ULL;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena) 
           & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena)));
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 0U;
        if (((0x40U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 1U;
        } else if (((0x80U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en 
                = (0ULL != vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1);
        } else if (((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (8U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en 
                = (0ULL != vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1);
        } else if ((0x10U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
            if ((0x20U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 0U;
            }
        }
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 0U;
    }
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 0U;
    }
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 0U;
        if (((0x40U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en 
                = (0U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr));
        } else if (((0x80U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 1U;
        } else if (((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (8U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 1U;
        } else if ((0x10U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
            if ((0x20U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 0U;
            }
        }
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 0U;
    }
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 0U;
    }
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena = 0U;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                      | (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                          | (4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                              | (8U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                    if ((0x10U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena 
                            = (0x20U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode));
                    }
                }
            }
        }
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena = 0U;
    }
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena = 0U;
    }
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 0U;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                      | (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                          | (4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                              | (8U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                    if ((0x10U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 1U;
                    } else if ((0x20U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 0U;
                    }
                }
            }
        }
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 0U;
    }
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 0U;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type) 
           & (- (IData)((1U & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal) 
           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x42007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x3000U == (0x2007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x6000U == (0x2007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x42007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x2007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x4000U == (0x2007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x7000U == (0x2007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000U == (0x2007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai 
        = (1U & (IData)(((0x10U == (0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2002000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2001000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2003000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2 = (IData)(
                                                            (0U 
                                                             != 
                                                             (0x4dU 
                                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                    & (0U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
           & (1U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                     >> 0x14U)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x3000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success 
        = ((((1U == (IData)(vlSelf->SocTop__DOT__t_axi_r_id)) 
             & (IData)(vlSelf->SocTop__DOT__t_axi_r_valid)) 
            & (IData)(vlSelf->SocTop__DOT__t_axi_r_valid)) 
           & (0U == (IData)(vlSelf->SocTop__DOT__t_axi_r_resp)));
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success 
        = ((((0U == (IData)(vlSelf->SocTop__DOT__t_axi_r_id)) 
             & (IData)(vlSelf->SocTop__DOT__t_axi_r_valid)) 
            & (IData)(vlSelf->SocTop__DOT__t_axi_r_valid)) 
           & (0U == (IData)(vlSelf->SocTop__DOT__t_axi_r_resp)));
    vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
        = ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
            ? vlSelf->SocTop__DOT__rvcpu_data_o : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                                    ? vlSelf->SocTop__DOT__arbitrate_d_data
                                                    : 
                                                   ((0x10U 
                                                     == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                                     ? vlSelf->SocTop__DOT__arbitrate_d_data
                                                     : 0ULL)));
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand 
        = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid) 
           & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready));
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand 
        = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid) 
           & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready));
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
        if (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
              == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                  >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1 
                = vlSelf->SocTop__DOT__rvcpu_wmask;
        } else if ((1U & (~ ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                              == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                  >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1 = 0U;
        }
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1 = 0U;
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
        if ((1U & (~ ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                       == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                           >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2 
                = (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                     == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))
                    ? (IData)(vlSelf->SocTop__DOT__rvcpu_wmask)
                    : 0U);
        }
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2 = 0U;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch 
        = (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type) 
                  >> 2U) & ((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                             ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                != vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)
                             : ((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                 ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                    == vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)
                                 : ((0x10U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                     ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                        >= vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)
                                     : ((0x20U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                         ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                            < vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)
                                         : ((4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                             ? (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2))
                                             : ((8U 
                                                 == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                                                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2)))))))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res 
        = ((IData)(vlSelf->rst) ? 0ULL : ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? ((0x40U 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((0x20U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data)))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        << 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm)
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((0x20U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2)))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        ^ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                        : 
                                                       (4ULL 
                                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        << 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                        : 
                                                       (4ULL 
                                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : (QData)((IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                                           < vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        ^ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2))
                                                        : (QData)((IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                                           < vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res
                                                        : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2
                                                        : 0ULL)))))))));
    vlSelf->SocTop__DOT__tim_axi_aw_ready = ((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                               & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                              >> 1U) 
                                             & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right));
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand 
        = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid) 
           & ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready)));
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand 
        = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid) 
           & ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready)));
    __Vtableidx2 = ((0xffffffc0U & (((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                     << 6U) & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                               << 4U))) 
                    | ((0x20U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                 << 3U)) | ((0x10U 
                                             & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                                << 2U)) 
                                            | ((0xfffffff8U 
                                                & (((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->SocTop__DOT__soc_axi_w_ready) 
                                                      << 3U))) 
                                               | ((0xfffffffcU 
                                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                                      & ((IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready) 
                                                         << 2U))) 
                                                  | (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))))));
    vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt 
        = VSocTop__ConstPool__TABLE_0bdcfe05_0[__Vtableidx2];
    vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand 
        = (((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
            >> 1U) & (IData)(vlSelf->SocTop__DOT__tim_axi_w_ready));
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte 
        = (0xffU & ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                   >> 2U))) ? ((1U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__d_cache_data_out 
                                                               >> 0x38U))
                                                    : (IData)(
                                                              (vlSelf->SocTop__DOT__d_cache_data_out 
                                                               >> 0x30U)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__d_cache_data_out 
                                                               >> 0x28U))
                                                    : (IData)(
                                                              (vlSelf->SocTop__DOT__d_cache_data_out 
                                                               >> 0x20U))))
                     : ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__d_cache_data_out 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (vlSelf->SocTop__DOT__d_cache_data_out 
                                                               >> 0x10U)))
                         : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                             ? (IData)((vlSelf->SocTop__DOT__d_cache_data_out 
                                        >> 8U)) : (IData)(vlSelf->SocTop__DOT__d_cache_data_out)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte 
        = (0xffffU & ((0U == (3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                            >> 1U))))
                       ? (IData)(vlSelf->SocTop__DOT__d_cache_data_out)
                       : ((1U == (3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                >> 1U))))
                           ? (IData)((vlSelf->SocTop__DOT__d_cache_data_out 
                                      >> 0x10U)) : 
                          ((2U == (3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 1U))))
                            ? (IData)((vlSelf->SocTop__DOT__d_cache_data_out 
                                       >> 0x20U)) : (IData)(
                                                            (vlSelf->SocTop__DOT__d_cache_data_out 
                                                             >> 0x30U))))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word 
        = ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                          >> 2U))) ? (IData)((vlSelf->SocTop__DOT__d_cache_data_out 
                                              >> 0x20U))
            : (IData)(vlSelf->SocTop__DOT__d_cache_data_out));
    vlSelf->read_ena_sign_ = vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand;
    vlSelf->out_addr_outp = ((IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand)
                              ? (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))
                              : 0ULL);
    __Vtableidx3 = ((0xfffffff0U & (((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                     << 2U) & ((2U 
                                                == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                               << 4U))) 
                    | ((8U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                              << 1U)) | (((IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand) 
                                          << 2U) | (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
    vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt 
        = VSocTop__ConstPool__TABLE_287fc343_0[__Vtableidx3];
    vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand 
        = (((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
            >> 1U) & (IData)(vlSelf->SocTop__DOT__tim_axi_ar_ready));
    if ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1 
            = vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1;
        vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2 
            = vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2;
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1 
            = ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
               & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1));
        vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2 
            = ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
               & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2));
    }
    vlSelf->SocTop__DOT__d_cache_out_addr = ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                              ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr
                                              : ((0x10U 
                                                  == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                                  ? vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                                   ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                                    ? vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr
                                                    : 0ULL))));
    if ((0x20U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt = 1U;
    } else if ((0x10U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt 
            = ((8U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                ? 1U : ((4U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                         ? 1U : ((2U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                  ? 1U : ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                           ? 1U : ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok)
                                                    ? 2U
                                                    : 0x10U)))));
    } else if ((8U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
        if ((4U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt = 1U;
        } else if ((2U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt = 1U;
        } else if ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt = 1U;
        } else if (vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok) {
            vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt = 0x10U;
        }
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt 
            = ((4U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                ? ((2U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                    ? 1U : ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                             ? 1U : ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                      ? 1U : 4U))) : 
               ((2U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                 ? ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                     ? 1U : (((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok) 
                              & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                   == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                       >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                 | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                     == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))
                              ? 4U : (((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok) 
                                       & (((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 3U)))] 
                                            & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                            >> 3U)))] 
                                               >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                            >> 3U)))])) 
                                           & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)) 
                                          | ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                           >> 3U)))] 
                                              & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                              >> 3U)))])) 
                                             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))))
                                       ? 8U : ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok)
                                                ? 0x10U
                                                : 2U))))
                 : ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                     ? (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                         & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))
                         ? 2U : 1U) : 1U)));
    }
    if ((0x20U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt = 1U;
    } else if ((0x10U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt 
            = ((8U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                ? 1U : ((4U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                         ? 1U : ((2U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                  ? 1U : ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                           ? 1U : ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok)
                                                    ? 2U
                                                    : 0x10U)))));
    } else if ((8U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) {
        if ((4U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt = 1U;
        } else if ((2U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt = 1U;
        } else if ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt = 1U;
        } else if (vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok) {
            vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt = 0x10U;
        }
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt 
            = ((4U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                ? ((2U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                    ? 1U : ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                             ? 1U : ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok)
                                      ? 1U : 4U))) : 
               ((2U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                 ? ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                     ? 1U : (((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__read_ok) 
                              & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                   == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                       >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                 | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                     == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))
                              ? 4U : (((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__read_ok) 
                                       & (((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 3U)))] 
                                            & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                            >> 3U)))] 
                                               >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                            >> 3U)))])) 
                                           & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)) 
                                          | ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                           >> 3U)))] 
                                              & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                              >> 3U)))])) 
                                             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))))
                                       ? 8U : ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__read_ok)
                                                ? 0x10U
                                                : 2U))))
                 : ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                     ? (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                         & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))
                         ? 2U : 1U) : 1U)));
    }
    vlSelf->SocTop__DOT__d_cache_out_type = ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                              ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type)
                                              : ((0x10U 
                                                  == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                                  ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type)
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                                   ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type)
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                                    ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type)
                                                    : 0U))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause 
        = ((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus 
        = ((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
        = (((((((((- (QData)((IData)(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))))) 
                  & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle) 
                 | ((- (QData)((IData)(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
                    & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus)) 
                | ((- (QData)((IData)(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))))) 
                   & (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                      << 2U))) | ((- (QData)((IData)(
                                                     (((0x341U 
                                                        == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))))) 
                                  & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc)) 
              | ((- (QData)((IData)(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
                 & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause)) 
             | ((- (QData)((IData)(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
                & ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                   << 7U))) | ((- (QData)((IData)((
                                                   (0x344U 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
                               & (QData)((IData)(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                  << 7U))))) 
           | ((- (QData)((IData)(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
              & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena 
        = ((0U != (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                            >> 7U))) & ((((IData)((0U 
                                                   != 
                                                   (0xfaU 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type)))) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui)) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc)) 
                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xdfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((((((IData)(
                                                                      ((0x80U 
                                                                        == 
                                                                        (0x80U 
                                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                       & (0U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                                              & (0x18U 
                                                                 == 
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                  >> 0x19U))) 
                                                             | (1U 
                                                                & (IData)(
                                                                          ((4U 
                                                                            == 
                                                                            (4U 
                                                                             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                           & (0x7000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                            | (1U 
                                                               & (IData)(
                                                                         ((0x10U 
                                                                           == 
                                                                           (0x10U 
                                                                            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                          & (0x7000U 
                                                                             == 
                                                                             (0x7000U 
                                                                              & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub)) 
                                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl)) 
                                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or)) 
                                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw)))) 
              << 5U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xf7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((1U 
                                                            & (((IData)(
                                                                        ((0x80U 
                                                                          == 
                                                                          (0x80U 
                                                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                         & (0x7000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                                                | (IData)(
                                                                          ((4U 
                                                                            == 
                                                                            (4U 
                                                                             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                           & (0x5000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst))))) 
                                                               | (IData)(
                                                                         ((0x10U 
                                                                           == 
                                                                           (0x10U 
                                                                            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                          & (0x4000U 
                                                                             == 
                                                                             (0x7000U 
                                                                              & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add)) 
                                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu)) 
                                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui)) 
                                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw)) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu)))) 
              << 3U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xefU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((((((((IData)(
                                                                        ((0x80U 
                                                                          == 
                                                                          (0x80U 
                                                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                         & (0U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                                                & (0U 
                                                                   == 
                                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                    >> 0x14U))) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                             & (0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                            & (0x6000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub)) 
                                                            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor)) 
                                                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra)) 
                                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw)) 
                                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw)) 
                                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw)) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw)))) 
              << 4U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2)
            ? (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                        >> 0x14U)) : 0U);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfbU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((1U 
                                                              & (((IData)(
                                                                          ((0x80U 
                                                                            == 
                                                                            (0x80U 
                                                                             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                           & (0x6000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                                                  | (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                             & (0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst))))) 
                                                                 | (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                            & (0x3000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add)) 
                                                            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt)) 
                                                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and)) 
                                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)) 
                                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw)) 
                                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw)) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))) 
              << 2U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfdU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                             & (0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                            & (0x2000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai)) 
                                                            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu)) 
                                                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or)) 
                                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal)) 
                                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw)) 
                                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw)) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))) 
              << 1U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
            ? 0xbU : (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                               >> 0xfU)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0x7fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs) 
                                                            | (1U 
                                                               & (IData)(
                                                                         ((0x10U 
                                                                           == 
                                                                           (0x10U 
                                                                            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                          & (0x5000U 
                                                                             == 
                                                                             (0x40007000U 
                                                                              & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll)) 
                                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl)) 
                                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui)) 
                                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc)) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu)))) 
              << 7U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xbfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                            & (0x1000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll)) 
                                                            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor)) 
                                                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and)) 
                                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal)) 
                                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw)) 
                                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw)) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw)))) 
              << 6U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfeU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | ((IData)(vlSelf->rst) ? 0U : (1U & (((
                                                   (((((((((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                             & (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                            & (0U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai)) 
                                                            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt)) 
                                                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra)) 
                                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc)) 
                                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw)) 
                                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw)) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw)) 
                                                 | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1 = 
        (1U & (((IData)((0U != (0x7fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type)))) 
                | (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))) 
               | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)));
    if ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1 
            = vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1;
        vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2 
            = vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2;
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1 
            = ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1)
                : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                    ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1)
                    : 0U));
        vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2 
            = ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2)
                : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                    ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2)
                    : 0U));
    }
    vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand 
        = (((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
            >> 1U) & (IData)(vlSelf->SocTop__DOT__tim_axi_aw_ready));
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data = 
        ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
          ? ((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
              ? ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                  ? ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                      ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                          ? 0ULL : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word)))
                      : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                          ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte))
                          : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte))))
                  : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                      ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                          ? vlSelf->SocTop__DOT__d_cache_data_out
                          : (((QData)((IData)((- (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word 
                                                          >> 0x1fU))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word))))
                      : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                          ? (((- (QData)((IData)((1U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte) 
                                                     >> 0xfU))))) 
                              << 0x10U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte)))
                          : (((- (QData)((IData)((1U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte) 
                                                     >> 7U))))) 
                              << 8U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte))))))
              : 0ULL) : vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data);
    vlSelf->SocTop__DOT__tim_axi_r_data = ((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                            ? ((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                                 & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                                & (0x2004000ULL 
                                                   == 
                                                   (((QData)((IData)(
                                                                     vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                                ? vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l
                                                : (
                                                   (((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                                     & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                                    & (0x200bff8ULL 
                                                       == 
                                                       (((QData)((IData)(
                                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                                    ? vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h
                                                    : 0ULL))
                                            : 0ULL);
    __Vtableidx5 = ((0xfffffff0U & (((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                     << 4U) & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                               << 3U))) 
                    | ((8U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                              << 2U)) | (((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand) 
                                          << 2U) | (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))));
    vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt 
        = VSocTop__ConstPool__TABLE_287fc343_0[__Vtableidx5];
    vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand 
        = ((0U == (IData)(vlSelf->SocTop__DOT__d_cache_out_type)) 
           & (IData)(vlSelf->SocTop__DOT__i_cache_read_ena));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus) 
            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)) 
           | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
              | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch) 
            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena)) 
           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data 
        = ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))
            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2
            : ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type) 
                 >> 7U) & (7U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res));
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data = 0ULL;
        if (((0x40U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1;
        } else if (((0x80U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                = (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                   | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1);
        } else if (((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (8U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                = (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                   & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1));
        } else if ((0x10U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc;
        }
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data = 0ULL;
    }
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1)
            ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1)
            : 0U);
    vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_l_nxt 
        = (((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
              & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
             & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
            & (0x2004000ULL == (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))
            ? (vlSelf->SocTop__DOT__time_axi6__DOT__wmask 
               & (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__add_axi_w_data[2U]))))
            : (1ULL + vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l));
    vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h_nxt 
        = (((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
              & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
             & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
            & (0x200bff8ULL == (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))
            ? (vlSelf->SocTop__DOT__time_axi6__DOT__wmask 
               & (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__add_axi_w_data[2U]))))
            : vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h);
    __Vtableidx4 = ((0xffffffc0U & (((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                     << 6U) & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                               << 5U))) 
                    | ((0x20U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                 << 4U)) | ((0x10U 
                                             & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                                << 3U)) 
                                            | (((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand) 
                                                << 3U) 
                                               | (((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m))))));
    vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt 
        = VSocTop__ConstPool__TABLE_c02984f2_0[__Vtableidx4];
    __Vtableidx1 = (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand) 
                     << 8U) | ((((~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                 & ((1U == (IData)(vlSelf->SocTop__DOT__d_cache_out_type)) 
                                    | (4U == (IData)(vlSelf->SocTop__DOT__d_cache_out_type)))) 
                                << 7U) | ((((~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                            & ((2U 
                                                == (IData)(vlSelf->SocTop__DOT__d_cache_out_type)) 
                                               | (8U 
                                                  == (IData)(vlSelf->SocTop__DOT__d_cache_out_type)))) 
                                           << 6U) | 
                                          (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_ok) 
                                            << 5U) 
                                           | (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) 
                                               << 4U) 
                                              | (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ok) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)))))));
    vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state_nxt 
        = VSocTop__ConstPool__TABLE_344c2b7c_0[__Vtableidx1];
    if (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt = 3U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt 
            = (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                ? 0U : (3U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                               ? (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                          >> 0xbU))
                               : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause);
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt 
            = (1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                     | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                    >> 7U)) : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie))));
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mie_nxt 
        = (1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                     ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                     : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                    >> 3U)) : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
            == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
            == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req 
            = (1U & (((IData)(vlSelf->rst) ? 0U : (1U 
                                                   & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                       & (2U 
                                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                      & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                         == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr))))) 
                     | ((IData)(vlSelf->rst) ? 0U : 
                        (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                & (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                               & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                  == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1)
                ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)
                    ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data
                    : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1)
                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data
                        : (((~ (IData)(vlSelf->rst)) 
                            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                            ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                 == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                               [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                            : 0ULL))) : (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc
                                          : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi)
                                              ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1))
                                              : 0ULL)));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena 
            = (1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr) 
                     & (~ (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                            & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                           & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                  == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
    }
    vlSelf->SocTop__DOT__core_stall_l = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_ctrl_req) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req)) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush = 
        ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
    if ((4U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))) {
        if (vlSelf->SocTop__DOT__core_stall_l) {
            vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok = 0U;
        } else if (((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data 
                     == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild))) {
            if ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                               >> 2U)))) {
                vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok = 1U;
            } else if ((1U & (~ (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                         >> 2U))))) {
                vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok = 1U;
            }
        } else if (((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data 
                     == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild))) {
            if ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                               >> 2U)))) {
                vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok = 1U;
            } else if ((1U & (~ (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                         >> 2U))))) {
                vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok = 0U;
        }
    } else {
        vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok = 0U;
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))) {
        if (vlSelf->SocTop__DOT__core_stall_l) {
            vlSelf->SocTop__DOT__i_cache_inst_valid = 0U;
        } else if (((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data 
                     == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild))) {
            if ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                               >> 2U)))) {
                vlSelf->SocTop__DOT__i_cache_inst_valid = 1U;
            } else if ((1U & (~ (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                         >> 2U))))) {
                vlSelf->SocTop__DOT__i_cache_inst_valid = 1U;
            }
        } else if (((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data 
                     == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild))) {
            if ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                               >> 2U)))) {
                vlSelf->SocTop__DOT__i_cache_inst_valid = 1U;
            } else if ((1U & (~ (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                         >> 2U))))) {
                vlSelf->SocTop__DOT__i_cache_inst_valid = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__i_cache_inst_valid = 0U;
        }
    } else {
        vlSelf->SocTop__DOT__i_cache_inst_valid = 0U;
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))) {
        if (vlSelf->SocTop__DOT__core_stall_l) {
            vlSelf->SocTop__DOT__i_cache_inst_data = 0U;
        } else if (((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data 
                     == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild))) {
            if ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                               >> 2U)))) {
                vlSelf->SocTop__DOT__i_cache_inst_data 
                    = (IData)((vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data 
                               >> 0x20U));
            } else if ((1U & (~ (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                         >> 2U))))) {
                vlSelf->SocTop__DOT__i_cache_inst_data 
                    = (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data);
            }
        } else if (((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data 
                     == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild))) {
            if ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                               >> 2U)))) {
                vlSelf->SocTop__DOT__i_cache_inst_data 
                    = (IData)((vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data 
                               >> 0x20U));
            } else if ((1U & (~ (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                         >> 2U))))) {
                vlSelf->SocTop__DOT__i_cache_inst_data 
                    = (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data);
            }
        } else {
            vlSelf->SocTop__DOT__i_cache_inst_data = 0U;
        }
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl = 
        ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_ctrl_req)
                                       ? 0x1fU : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req)
                                                   ? 0xfU
                                                   : 
                                                  ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req)
                                                    ? 7U
                                                    : 
                                                   (((~ (IData)(vlSelf->rst)) 
                                                     & (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))
                                                     ? 0U
                                                     : 3U)))));
    vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand 
        = (1U & ((~ (IData)(vlSelf->rst)) & (~ (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
        = ((0x80000U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->SocTop__DOT__i_cache_inst_data 
                                            >> 0x15U)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm 
        = ((0x800U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                      >> 0x14U)) | ((0x400U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 8U)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr 
        = (IData)((0x67U == (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)));
    vlSelf->SocTop__DOT__i_cache2__DOT__state_inst_nxt 
        = ((0x20U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
            ? ((0x10U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                ? 1U : ((8U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                         ? 1U : ((4U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                                  ? 1U : ((2U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                                           ? 1U : (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelf->SocTop__DOT__i_cache2__DOT__read_ok) 
                                                     & (((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data 
                                                          == 
                                                          (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                           >> 9U)) 
                                                         & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild)) 
                                                        | ((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data 
                                                            == 
                                                            (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                             >> 9U)) 
                                                           & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild))))
                                                     ? 4U
                                                     : 
                                                    ((IData)(vlSelf->SocTop__DOT__i_cache2__DOT__read_ok)
                                                      ? 2U
                                                      : 0x20U)))))))
            : ((0x10U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                ? 1U : ((8U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                         ? 1U : ((4U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                                  ? ((2U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                                      ? 1U : ((1U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                                               ? 1U
                                               : ((IData)(vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok)
                                                   ? 1U
                                                   : 4U)))
                                  : ((2U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                                      ? ((1U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                                          ? 1U : ((IData)(vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok)
                                                   ? 0x20U
                                                   : 2U))
                                      : ((1U & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))
                                          ? ((IData)(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand)
                                              ? 0x20U
                                              : 1U)
                                          : 1U))))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
             ? ((1U & ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr))))
                 ? ((((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                >> 0xfU)) == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr)) 
                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                     ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                     : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                    [(0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                               >> 0xfU))]) : 0ULL) : vlSelf->SocTop__DOT__rvcpu_inst_addr) 
           + ((IData)((0x6fU == (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))
               ? (((- (QData)((IData)((1U & (vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                             >> 0x13U))))) 
                   << 0x14U) | (QData)((IData)((0xfffffU 
                                                & (vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                                   << 1U)))))
               : ((IData)((0x63U == (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))
                   ? (((- (QData)((IData)((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                 >> 0xbU))))) 
                       << 0xcU) | (QData)((IData)((0xfffU 
                                                   & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                      << 1U)))))
                   : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                       ? (((- (QData)((IData)((vlSelf->SocTop__DOT__i_cache_inst_data 
                                               >> 0x1fU)))) 
                           << 0xcU) | (QData)((IData)(
                                                      (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                       >> 0x14U))))
                       : ((IData)(vlSelf->rst) ? 0ULL
                           : 4ULL)))));
}

void VSocTop___024root___eval_initial(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___eval_initial\n"); );
    // Body
    VSocTop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void VSocTop___024root___eval_settle(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___eval_settle\n"); );
    // Body
    VSocTop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VSocTop___024root___final(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___final\n"); );
}

void VSocTop___024root___ctor_var_reset(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->read_ena_sign_ = VL_RAND_RESET_I(1);
    vlSelf->out_addr_outp = VL_RAND_RESET_Q(64);
    vlSelf->read_data_sign_ = VL_RAND_RESET_Q(64);
    vlSelf->out_write_ram_ena = VL_RAND_RESET_I(1);
    vlSelf->out_write_ram_data = VL_RAND_RESET_Q(64);
    vlSelf->out_write_ram_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu_inst_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu_data_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu_wmask = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu_data_o = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu_we = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu_re = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__core_stall_l = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache_inst_data = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__i_cache_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache_read_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__i_caceh_resp = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache_data_out = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache_out_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache_out_type = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__arbitrate_d_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__arbitrate_d_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitrate_i_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__t_axi_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__t_axi_r_id = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__t_axi_r_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__t_axi_r_resp = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__t_axi_r_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__add_axi_aw_id = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(192, vlSelf->SocTop__DOT__add_axi_aw_addr);
    vlSelf->SocTop__DOT__add_axi_aw_len = VL_RAND_RESET_I(24);
    vlSelf->SocTop__DOT__add_axi_aw_size = VL_RAND_RESET_I(9);
    vlSelf->SocTop__DOT__add_axi_aw_burst = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__add_axi_aw_cache = VL_RAND_RESET_I(12);
    vlSelf->SocTop__DOT__add_axi_aw_prot = VL_RAND_RESET_I(9);
    vlSelf->SocTop__DOT__add_axi_aw_qos = VL_RAND_RESET_I(12);
    vlSelf->SocTop__DOT__add_axi_aw_valid = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(192, vlSelf->SocTop__DOT__add_axi_w_data);
    vlSelf->SocTop__DOT__add_axi_w_strb = VL_RAND_RESET_I(24);
    vlSelf->SocTop__DOT__add_axi_w_last = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__add_axi_w_valid = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__add_axi_b_ready = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__add_axi_ar_id = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(192, vlSelf->SocTop__DOT__add_axi_ar_addr);
    vlSelf->SocTop__DOT__add_axi_ar_len = VL_RAND_RESET_I(24);
    vlSelf->SocTop__DOT__add_axi_ar_size = VL_RAND_RESET_I(9);
    vlSelf->SocTop__DOT__add_axi_ar_burst = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__add_axi_ar_cache = VL_RAND_RESET_I(12);
    vlSelf->SocTop__DOT__add_axi_ar_prot = VL_RAND_RESET_I(9);
    vlSelf->SocTop__DOT__add_axi_ar_qos = VL_RAND_RESET_I(12);
    vlSelf->SocTop__DOT__add_axi_ar_valid = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__add_axi_r_ready = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__soc_axi_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__soc_axi_w_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__soc_axi_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__tim_axi_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__tim_axi_w_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__tim_axi_b_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__tim_axi_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__tim_axi_r_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__tim_axi_r_resp = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__tim_axi_r_last = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__io_axi_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__io_axi_w_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__io_axi_b_id = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__io_axi_b_resp = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__io_axi_b_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__io_axi_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__io_axi_r_id = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__io_axi_r_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__io_axi_r_resp = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__io_axi_r_last = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__io_axi_r_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1 = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2 = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_ctrl_req = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset = VL_RAND_RESET_I(12);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm = VL_RAND_RESET_I(20);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm = VL_RAND_RESET_I(12);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__ex_pc_change = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__id_pc_change = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_ex = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_id = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2 = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2 = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2 = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx = VL_RAND_RESET_I(12);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter = VL_RAND_RESET_I(7);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__dividend_t = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__divider_t = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(129, vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a);
    VL_RAND_RESET_W(65, vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sigin_inst = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mie_nxt = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base = VL_RAND_RESET_Q(62);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte = VL_RAND_RESET_I(16);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache2__DOT__state_inst = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__i_cache2__DOT__state_inst_nxt = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__i_cache2__DOT__read_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache2__DOT__miss_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->SocTop__DOT__i_cache2__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data = VL_RAND_RESET_Q(55);
    vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data = VL_RAND_RESET_Q(55);
    vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache3__DOT__state_dread = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__d_cache3__DOT__read_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_o = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_t = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1 = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2 = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1 = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2 = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_o = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_t = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1 = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2 = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->SocTop__DOT__d_cache3__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->SocTop__DOT__d_cache3__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1 = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data = VL_RAND_RESET_Q(55);
    vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data = VL_RAND_RESET_Q(55);
    vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state_nxt = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_id = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_len = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_size = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_burst = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_cache = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_prot = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_qos = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_id = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_len = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_size = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_burst = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_cache = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_prot = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_qos = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_l_nxt = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h_nxt = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__time_axi6__DOT__wmask = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__time_axi6__DOT__mode_right = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id = VL_RAND_RESET_I(4);
    vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__SocTop__DOT__rvcpu_inst_addr = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__if_id_inst = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__if_id_pc = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_addr = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__wb_regfile_data = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_addr = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32 = 0;
    vlSelf->__Vdlyvval__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter1__v64 = 0;
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v64 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter1__v65 = 0;
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v65 = 0;
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v66 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v66 = 0;
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v67 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v68 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v69 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v70 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v71 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v72 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v73 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v74 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v75 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v76 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v77 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v78 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v79 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v80 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v81 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v82 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v83 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v84 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v85 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v86 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v87 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v88 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v89 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v90 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v91 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v92 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v93 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v94 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v95 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v96 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v97 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v98 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v99 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v100 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v101 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v102 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v103 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v104 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v105 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v106 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v107 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v108 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v109 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v110 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v111 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v112 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v113 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v114 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v115 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v116 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v117 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v118 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v119 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v120 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v121 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v122 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v123 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v124 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v125 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v126 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v127 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v128 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v129 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v1 = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
