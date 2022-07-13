// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSocTop.h for the primary calling header

#include "VSocTop___024root.h"
#include "VSocTop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void difftest_dut_csrs(long long mcycle_val, long long mstatus_val, long long mtvec_val, long long mepc_val, long long mcause_val, long long mie_val, long long mip_val, long long mscratch_val);

VL_INLINE_OPT void VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__difftest_dut_csrs_TOP(QData/*63:0*/ mcycle_val, QData/*63:0*/ mstatus_val, QData/*63:0*/ mtvec_val, QData/*63:0*/ mepc_val, QData/*63:0*/ mcause_val, QData/*63:0*/ mie_val, QData/*63:0*/ mip_val, QData/*63:0*/ mscratch_val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__difftest_dut_csrs_TOP\n"); );
    // Body
    long long mcycle_val__Vcvt;
    for (size_t mcycle_val__Vidx = 0; mcycle_val__Vidx < 1; ++mcycle_val__Vidx) mcycle_val__Vcvt = mcycle_val;
    long long mstatus_val__Vcvt;
    for (size_t mstatus_val__Vidx = 0; mstatus_val__Vidx < 1; ++mstatus_val__Vidx) mstatus_val__Vcvt = mstatus_val;
    long long mtvec_val__Vcvt;
    for (size_t mtvec_val__Vidx = 0; mtvec_val__Vidx < 1; ++mtvec_val__Vidx) mtvec_val__Vcvt = mtvec_val;
    long long mepc_val__Vcvt;
    for (size_t mepc_val__Vidx = 0; mepc_val__Vidx < 1; ++mepc_val__Vidx) mepc_val__Vcvt = mepc_val;
    long long mcause_val__Vcvt;
    for (size_t mcause_val__Vidx = 0; mcause_val__Vidx < 1; ++mcause_val__Vidx) mcause_val__Vcvt = mcause_val;
    long long mie_val__Vcvt;
    for (size_t mie_val__Vidx = 0; mie_val__Vidx < 1; ++mie_val__Vidx) mie_val__Vcvt = mie_val;
    long long mip_val__Vcvt;
    for (size_t mip_val__Vidx = 0; mip_val__Vidx < 1; ++mip_val__Vidx) mip_val__Vcvt = mip_val;
    long long mscratch_val__Vcvt;
    for (size_t mscratch_val__Vidx = 0; mscratch_val__Vidx < 1; ++mscratch_val__Vidx) mscratch_val__Vcvt = mscratch_val;
    difftest_dut_csrs(mcycle_val__Vcvt, mstatus_val__Vcvt, mtvec_val__Vcvt, mepc_val__Vcvt, mcause_val__Vcvt, mie_val__Vcvt, mip_val__Vcvt, mscratch_val__Vcvt);
}

extern "C" void difftest_dut_pc(long long pc_data, long long exit_code, svBit endyn, svBit exe);

VL_INLINE_OPT void VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_pc_TOP(QData/*63:0*/ pc_data, QData/*63:0*/ exit_code, CData/*0:0*/ endyn, CData/*0:0*/ exe) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_pc_TOP\n"); );
    // Body
    long long pc_data__Vcvt;
    for (size_t pc_data__Vidx = 0; pc_data__Vidx < 1; ++pc_data__Vidx) pc_data__Vcvt = pc_data;
    long long exit_code__Vcvt;
    for (size_t exit_code__Vidx = 0; exit_code__Vidx < 1; ++exit_code__Vidx) exit_code__Vcvt = exit_code;
    svBit endyn__Vcvt;
    for (size_t endyn__Vidx = 0; endyn__Vidx < 1; ++endyn__Vidx) endyn__Vcvt = endyn;
    svBit exe__Vcvt;
    for (size_t exe__Vidx = 0; exe__Vidx < 1; ++exe__Vidx) exe__Vcvt = exe;
    difftest_dut_pc(pc_data__Vcvt, exit_code__Vcvt, endyn__Vcvt, exe__Vcvt);
}

extern "C" void difftest_dut_thepc(long long thepc_data);

VL_INLINE_OPT void VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_thepc_TOP(QData/*63:0*/ thepc_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_thepc_TOP\n"); );
    // Body
    long long thepc_data__Vcvt;
    for (size_t thepc_data__Vidx = 0; thepc_data__Vidx < 1; ++thepc_data__Vidx) thepc_data__Vcvt = thepc_data;
    difftest_dut_thepc(thepc_data__Vcvt);
}

extern "C" void difftest_dut_regs(long long Z0, long long ra, long long sp, long long gp, long long tp, long long t0, long long t1, long long t2, long long fp, long long s1, long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long a7, long long s2, long long s3, long long s4, long long s5, long long s6, long long s7, long long s8, long long s9, long long s10, long long a11, long long t3, long long t4, long long t5, long long t6);

VL_INLINE_OPT void VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__regfile10__DOT__difftest_dut_regs_TOP(QData/*63:0*/ Z0, QData/*63:0*/ ra, QData/*63:0*/ sp, QData/*63:0*/ gp, QData/*63:0*/ tp, QData/*63:0*/ t0, QData/*63:0*/ t1, QData/*63:0*/ t2, QData/*63:0*/ fp, QData/*63:0*/ s1, QData/*63:0*/ a0, QData/*63:0*/ a1, QData/*63:0*/ a2, QData/*63:0*/ a3, QData/*63:0*/ a4, QData/*63:0*/ a5, QData/*63:0*/ a6, QData/*63:0*/ a7, QData/*63:0*/ s2, QData/*63:0*/ s3, QData/*63:0*/ s4, QData/*63:0*/ s5, QData/*63:0*/ s6, QData/*63:0*/ s7, QData/*63:0*/ s8, QData/*63:0*/ s9, QData/*63:0*/ s10, QData/*63:0*/ a11, QData/*63:0*/ t3, QData/*63:0*/ t4, QData/*63:0*/ t5, QData/*63:0*/ t6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__regfile10__DOT__difftest_dut_regs_TOP\n"); );
    // Body
    long long Z0__Vcvt;
    for (size_t Z0__Vidx = 0; Z0__Vidx < 1; ++Z0__Vidx) Z0__Vcvt = Z0;
    long long ra__Vcvt;
    for (size_t ra__Vidx = 0; ra__Vidx < 1; ++ra__Vidx) ra__Vcvt = ra;
    long long sp__Vcvt;
    for (size_t sp__Vidx = 0; sp__Vidx < 1; ++sp__Vidx) sp__Vcvt = sp;
    long long gp__Vcvt;
    for (size_t gp__Vidx = 0; gp__Vidx < 1; ++gp__Vidx) gp__Vcvt = gp;
    long long tp__Vcvt;
    for (size_t tp__Vidx = 0; tp__Vidx < 1; ++tp__Vidx) tp__Vcvt = tp;
    long long t0__Vcvt;
    for (size_t t0__Vidx = 0; t0__Vidx < 1; ++t0__Vidx) t0__Vcvt = t0;
    long long t1__Vcvt;
    for (size_t t1__Vidx = 0; t1__Vidx < 1; ++t1__Vidx) t1__Vcvt = t1;
    long long t2__Vcvt;
    for (size_t t2__Vidx = 0; t2__Vidx < 1; ++t2__Vidx) t2__Vcvt = t2;
    long long fp__Vcvt;
    for (size_t fp__Vidx = 0; fp__Vidx < 1; ++fp__Vidx) fp__Vcvt = fp;
    long long s1__Vcvt;
    for (size_t s1__Vidx = 0; s1__Vidx < 1; ++s1__Vidx) s1__Vcvt = s1;
    long long a0__Vcvt;
    for (size_t a0__Vidx = 0; a0__Vidx < 1; ++a0__Vidx) a0__Vcvt = a0;
    long long a1__Vcvt;
    for (size_t a1__Vidx = 0; a1__Vidx < 1; ++a1__Vidx) a1__Vcvt = a1;
    long long a2__Vcvt;
    for (size_t a2__Vidx = 0; a2__Vidx < 1; ++a2__Vidx) a2__Vcvt = a2;
    long long a3__Vcvt;
    for (size_t a3__Vidx = 0; a3__Vidx < 1; ++a3__Vidx) a3__Vcvt = a3;
    long long a4__Vcvt;
    for (size_t a4__Vidx = 0; a4__Vidx < 1; ++a4__Vidx) a4__Vcvt = a4;
    long long a5__Vcvt;
    for (size_t a5__Vidx = 0; a5__Vidx < 1; ++a5__Vidx) a5__Vcvt = a5;
    long long a6__Vcvt;
    for (size_t a6__Vidx = 0; a6__Vidx < 1; ++a6__Vidx) a6__Vcvt = a6;
    long long a7__Vcvt;
    for (size_t a7__Vidx = 0; a7__Vidx < 1; ++a7__Vidx) a7__Vcvt = a7;
    long long s2__Vcvt;
    for (size_t s2__Vidx = 0; s2__Vidx < 1; ++s2__Vidx) s2__Vcvt = s2;
    long long s3__Vcvt;
    for (size_t s3__Vidx = 0; s3__Vidx < 1; ++s3__Vidx) s3__Vcvt = s3;
    long long s4__Vcvt;
    for (size_t s4__Vidx = 0; s4__Vidx < 1; ++s4__Vidx) s4__Vcvt = s4;
    long long s5__Vcvt;
    for (size_t s5__Vidx = 0; s5__Vidx < 1; ++s5__Vidx) s5__Vcvt = s5;
    long long s6__Vcvt;
    for (size_t s6__Vidx = 0; s6__Vidx < 1; ++s6__Vidx) s6__Vcvt = s6;
    long long s7__Vcvt;
    for (size_t s7__Vidx = 0; s7__Vidx < 1; ++s7__Vidx) s7__Vcvt = s7;
    long long s8__Vcvt;
    for (size_t s8__Vidx = 0; s8__Vidx < 1; ++s8__Vidx) s8__Vcvt = s8;
    long long s9__Vcvt;
    for (size_t s9__Vidx = 0; s9__Vidx < 1; ++s9__Vidx) s9__Vcvt = s9;
    long long s10__Vcvt;
    for (size_t s10__Vidx = 0; s10__Vidx < 1; ++s10__Vidx) s10__Vcvt = s10;
    long long a11__Vcvt;
    for (size_t a11__Vidx = 0; a11__Vidx < 1; ++a11__Vidx) a11__Vcvt = a11;
    long long t3__Vcvt;
    for (size_t t3__Vidx = 0; t3__Vidx < 1; ++t3__Vidx) t3__Vcvt = t3;
    long long t4__Vcvt;
    for (size_t t4__Vidx = 0; t4__Vidx < 1; ++t4__Vidx) t4__Vcvt = t4;
    long long t5__Vcvt;
    for (size_t t5__Vidx = 0; t5__Vidx < 1; ++t5__Vidx) t5__Vcvt = t5;
    long long t6__Vcvt;
    for (size_t t6__Vidx = 0; t6__Vidx < 1; ++t6__Vidx) t6__Vcvt = t6;
    difftest_dut_regs(Z0__Vcvt, ra__Vcvt, sp__Vcvt, gp__Vcvt, tp__Vcvt, t0__Vcvt, t1__Vcvt, t2__Vcvt, fp__Vcvt, s1__Vcvt, a0__Vcvt, a1__Vcvt, a2__Vcvt, a3__Vcvt, a4__Vcvt, a5__Vcvt, a6__Vcvt, a7__Vcvt, s2__Vcvt, s3__Vcvt, s4__Vcvt, s5__Vcvt, s6__Vcvt, s7__Vcvt, s8__Vcvt, s9__Vcvt, s10__Vcvt, a11__Vcvt, t3__Vcvt, t4__Vcvt, t5__Vcvt, t6__Vcvt);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__3__PROF__divider__l103(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__3__PROF__divider__l103\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish)
                                           ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign)
                                               ? (1ULL 
                                                  + 
                                                  (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U])))))
                                               : (((QData)((IData)(
                                                                   vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U]))))
                                           : (((QData)((IData)(
                                                               vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U])))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__4__PROF__divider__l103(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__4__PROF__divider__l103\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish)
                                           ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign)
                                               ? (1ULL 
                                                  + 
                                                  (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))))
                                               : (((QData)((IData)(
                                                                   vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U]))))
                                           : (((QData)((IData)(
                                                               vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__5__PROF__regfile__l67(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__5__PROF__regfile__l67\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__6__PROF__SocTop__l542(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__6__PROF__SocTop__l542\n"); );
    // Body
    vlSelf->out_write_ram_ena = (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__7__PROF__divider__l34(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__7__PROF__divider__l34\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sigin_inst 
        = ((((0x86U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (0x51U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0xc1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
           | (0x13U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__8__PROF__mem_wb__l34(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__8__PROF__mem_wb__l34\n"); );
    // Body
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_pc_TOP(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1, vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code, (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn), vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__9__PROF__io_slave_axi__l165(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__9__PROF__io_slave_axi__l165\n"); );
    // Body
    vlSelf->out_serial_write_ = (2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__10__PROF__SocTop__l543(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__10__PROF__SocTop__l543\n"); );
    // Body
    vlSelf->out_write_ram_addr = ((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                   ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                   : 0ULL);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__11__PROF__SocTop__l544(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__11__PROF__SocTop__l544\n"); );
    // Body
    vlSelf->out_write_ram_data = ((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                   ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                   : 0ULL);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__12__PROF__ex__l167(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__12__PROF__ex__l167\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
        = ((0x86U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1
            : ((0x1aU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
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
                                        : 0ULL))))))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__13__PROF__ex__l177(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__13__PROF__ex__l177\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
        = ((0x86U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2
            : ((0x1aU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
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
                                        : 0ULL))))))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__14__PROF__io_slave_axi__l167(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__14__PROF__io_slave_axi__l167\n"); );
    // Body
    vlSelf->out_serial_data_ = ((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state))
                                 ? vlSelf->SocTop__DOT__io_slave_axi9__DOT__write_data_reg
                                 : 0ULL);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__15__PROF__clint__l192(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__15__PROF__clint__l192\n"); );
    // Body
    vlSelf->SocTop__DOT__tim_axi_b_valid = ((1U != (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_m)) 
                                            & (0U != (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_m)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__16__PROF__mem__l197(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__16__PROF__mem__l197\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__17__PROF__SocTop__l373(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__17__PROF__SocTop__l373\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_r_valid = (((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                             << 2U) 
                                            | (((2U 
                                                 == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r)) 
                                                << 1U) 
                                               | (2U 
                                                  == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__18__PROF__axi_mnq__l171(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__18__PROF__axi_mnq__l171\n"); );
    // Body
    vlSelf->SocTop__DOT__soc_axi_ar_ready = ((0U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                             | (1U 
                                                == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__19__PROF__io_slave_axi__l226(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__19__PROF__io_slave_axi__l226\n"); );
    // Body
    vlSelf->SocTop__DOT__io_axi_ar_ready = ((0U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state)) 
                                            | (1U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__20__PROF__ex__l95(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__20__PROF__ex__l95\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                      >> 0x13U))))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2) 
                                         << 0xcU))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__21__PROF__ex__l67(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__21__PROF__ex__l67\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res 
        = (((0x3fU >= (0x7fU & ((IData)(0x40U) - (0x3fU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             ? ((- (QData)((IData)((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                  >> 0x3fU)))))) 
                << (0x7fU & ((IData)(0x40U) - (0x3fU 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             : 0ULL) | (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                        >> (0x3fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__22__PROF__ex__l82(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__22__PROF__ex__l82\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
           - (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__23__PROF__multiplier__l72(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__23__PROF__multiplier__l72\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__24__PROF__clint__l240(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__24__PROF__clint__l240\n"); );
    // Body
    vlSelf->SocTop__DOT__tim_axi_r_last = (2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__25__PROF__mem__l197(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__25__PROF__mem__l197\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__26__PROF__ex__l70(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__26__PROF__ex__l70\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
           << (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__27__PROF__ex__l74(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__27__PROF__ex__l74\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
           >> (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__28__PROF__ex__l78(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__28__PROF__ex__l78\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2 
        = (((0x1fU >= (0x3fU & ((IData)(0x20U) - (0x1fU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             ? ((- (IData)((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                          >> 0x1fU))))) 
                << (0x3fU & ((IData)(0x20U) - (0x1fU 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             : 0U) | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
                      >> (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__29__PROF__csr__l119(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__29__PROF__csr__l119\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus 
        = ((((QData)((IData)(((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs)) 
                              << 0x1fU))) << 0x20U) 
            | ((QData)((IData)((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs) 
                                 << 2U) | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))) 
               << 0xbU)) | (QData)((IData)((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie) 
                                             << 7U) 
                                            | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie) 
                                               << 3U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__30__PROF__ex__l60(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__30__PROF__ex__l60\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2 
        = (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
           + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__31__PROF__ex__l228(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__31__PROF__ex__l228\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx 
        = ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))
            ? (0xfffU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
            : 0U);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__32__PROF__ex__l57(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__32__PROF__ex__l57\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                   + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__33__PROF__ex__l156(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__33__PROF__ex__l156\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready 
        = ((((((((0x86U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                 | (0x1aU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
                | (0x25U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
               | (0x51U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
              | (0xc1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
             | (0x85U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0x43U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
           | (0x13U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__34__PROF__mem__l47(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__34__PROF__mem__l47\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu_data_addr = ((IData)(vlSelf->rst)
                                             ? 0ULL
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__35__PROF__mem__l45(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__35__PROF__mem__l45\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu_we = (1U & ((~ (IData)(vlSelf->rst)) 
                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__36__PROF__mem__l46(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__36__PROF__mem__l46\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu_re = (1U & ((~ (IData)(vlSelf->rst)) 
                                           & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type) 
                                              >> 1U)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__37__PROF__mem__l36(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__37__PROF__mem__l36\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc 
        = ((IData)(vlSelf->rst) ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__38__PROF__mem__l37(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__38__PROF__mem__l37\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__39__PROF__ex__l136(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__39__PROF__ex__l136\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready 
        = (((((0xeU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
              | (0x1cU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
             | (0x38U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0x70U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
           | (0xe0U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__40__PROF__mem_wb__l26(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__40__PROF__mem_wb__l26\n"); );
    // Body
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_thepc_TOP(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__41__PROF__i_cache__l152(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__41__PROF__i_cache__l152\n"); );
    // Body
    if (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))) {
        vlSelf->SocTop__DOT__i_cache_addr = (0xfffffffffffffff8ULL 
                                             & vlSelf->SocTop__DOT__rvcpu_inst_addr);
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__42__PROF__i_cache__l152(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__42__PROF__i_cache__l152\n"); );
    // Body
    if ((1U & (~ ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))))) {
        vlSelf->SocTop__DOT__i_cache2__DOT__miss_data 
            = (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid))
                ? vlSelf->SocTop__DOT__arbitrate_i_data
                : 0ULL);
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__43__PROF__d_cache__l209(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__43__PROF__d_cache__l209\n"); );
    // Body
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__write_regr = 1U;
    } else if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) 
                & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regr_))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__write_regr = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__44__PROF__d_cache__l410(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__44__PROF__d_cache__l410\n"); );
    // Body
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__write_regw = 1U;
    } else if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) 
                & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regw_))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__write_regw = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__45__PROF__i_cache__l152(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__45__PROF__i_cache__l152\n"); );
    // Body
    if ((1U & (~ ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))))) {
        if (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
             & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid))) {
            if (vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                            >> 3U)))])) {
                        vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o = 1U;
                    } else if ((vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__46__PROF__i_cache__l152(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__46__PROF__i_cache__l152\n"); );
    // Body
    if ((1U & (~ ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))))) {
        if (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
             & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid))) {
            if (vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                            >> 3U)))] 
                         < vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                            >> 3U)))])) {
                        vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t 
                            = (vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                               [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                  >> 3U)))] 
                               < vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                               [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                  >> 3U)))]);
                    }
                } else {
                    vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t = 1U;
                }
            }
        } else {
            vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__47__PROF__i_cache__l152(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__47__PROF__i_cache__l152\n"); );
    // Body
    if ((1U & (~ ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))))) {
        vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok 
            = ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
               & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid));
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__48__PROF__d_cache__l357(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__48__PROF__d_cache__l357\n"); );
    // Body
    if ((1U & (~ ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok 
            = ((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
               & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)));
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__49__PROF__d_cache__l155(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__49__PROF__d_cache__l155\n"); );
    // Body
    if ((1U & (~ ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok 
            = ((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
               & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)));
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__50__PROF__id__l97(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__50__PROF__id__l97\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((0xdU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                    >> 2U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__51__PROF__arbitratem__l469(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__51__PROF__arbitratem__l469\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_r_ready = ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                          | (5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__52__PROF__id__l98(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__52__PROF__id__l98\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((5U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                    >> 2U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__53__PROF__id__l99(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__53__PROF__id__l99\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((0x1bU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                    >> 2U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__54__PROF__arbitratem__l445(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__54__PROF__arbitratem__l445\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_ar_addr = ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                           ? vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_addr
                                           : ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                               ? vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_addr
                                               : 0ULL));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__55__PROF__arbitratem__l442(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__55__PROF__arbitratem__l442\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_ar_id = ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                         ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_id)
                                         : ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                             ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_id)
                                             : 0U));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__56__PROF__arbitratem__l457(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__56__PROF__arbitratem__l457\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_ar_cache = ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                            ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_cache)
                                            : ((5U 
                                                == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_cache)
                                                : 2U));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__57__PROF__arbitratem__l460(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__57__PROF__arbitratem__l460\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_ar_prot = ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                           ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_prot)
                                           : ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                               ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_prot)
                                               : 0U));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__58__PROF__arbitratem__l463(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__58__PROF__arbitratem__l463\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_ar_qos = ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                          ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_qos)
                                          : ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                              ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_qos)
                                              : 0U));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__59__PROF__arbitratem__l448(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__59__PROF__arbitratem__l448\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_ar_len = ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                          ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_len)
                                          : ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                              ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_len)
                                              : 0U));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__60__PROF__arbitratem__l451(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__60__PROF__arbitratem__l451\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_ar_size = ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                           ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_size)
                                           : ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                               ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_size)
                                               : 3U));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__61__PROF__arbitratem__l454(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__61__PROF__arbitratem__l454\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_ar_burst = ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                            ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_burst)
                                            : ((5U 
                                                == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_burst)
                                                : 1U));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__62__PROF__arbitratem__l466(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__62__PROF__arbitratem__l466\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_ar_valid = ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                            ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid)
                                            : ((5U 
                                                == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                               & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__63__PROF__multiplier__l19(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__63__PROF__multiplier__l19\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid) 
           & (~ (IData)((0U != vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__64__PROF__csr__l216(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__64__PROF__csr__l216\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena 
        = ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)) 
            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
           & (0ULL != vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__65__PROF__id__l100(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__65__PROF__id__l100\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((0x19U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                    >> 2U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__66__PROF__i_cache__l152(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__66__PROF__i_cache__l152\n"); );
    // Body
    if (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))) {
        vlSelf->SocTop__DOT__i_cache_read_ena = 1U;
    } else if (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid))) {
        vlSelf->SocTop__DOT__i_cache_read_ena = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__67__PROF__d_cache__l209(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__67__PROF__d_cache__l209\n"); );
    // Body
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type = 2U;
    } else if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) 
                & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regr_))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__68__PROF__d_cache__l410(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__68__PROF__d_cache__l410\n"); );
    // Body
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type = 8U;
    } else if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) 
                & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regw_))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__69__PROF__id__l88(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__69__PROF__id__l88\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__70__PROF__divider__l125(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__70__PROF__divider__l125\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__71__PROF__SocTop__l355(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__71__PROF__SocTop__l355\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_b_valid = (((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                             << 2U) 
                                            | (((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                                << 1U) 
                                               | (2U 
                                                  == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__72__PROF__mem__l228(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__72__PROF__mem__l228\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu_data_o = ((1U & ((IData)(vlSelf->rst) 
                                                | (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))))
                                          ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__73__PROF__SocTop__l372(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__73__PROF__SocTop__l372\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_r_last = (((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                            << 2U) 
                                           | (((IData)(vlSelf->SocTop__DOT__tim_axi_r_last) 
                                               << 1U) 
                                              | (2U 
                                                 == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__74__PROF__mem__l229(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__74__PROF__mem__l229\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu_wmask = ((1U & ((IData)(vlSelf->rst) 
                                               | (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))))
                                         ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__75__PROF__ex__l71(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__75__PROF__ex__l71\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res 
        = (((QData)((IData)((- (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__76__PROF__ex__l75(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__76__PROF__ex__l75\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res 
        = (((QData)((IData)((- (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__77__PROF__ex__l79(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__77__PROF__ex__l79\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res 
        = (((QData)((IData)((- (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__78__PROF__csr__l41(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__78__PROF__csr__l41\n"); );
    // Body
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__difftest_dut_csrs_TOP(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle, vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus, 
                                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                                                                << 2U), vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc, vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause, 
                                                                                ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                                                                << 7U), (QData)((IData)(
                                                                                ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                                                << 7U))), vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__79__PROF__ex__l61(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__79__PROF__ex__l61\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__80__PROF__ex__l64(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__80__PROF__ex__l64\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__81__PROF__uncache_mmio__l36(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__81__PROF__uncache_mmio__l36\n"); );
    // Body
    vlSelf->SocTop__DOT__uncache_mmio7__DOT__start_sign 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu_we) | (IData)(vlSelf->SocTop__DOT__rvcpu_re));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__82__PROF__ex__l198(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__82__PROF__ex__l198\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req 
        = (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish)) 
            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready)) 
           | ((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign)) 
              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__83__PROF__ex__l264(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__83__PROF__ex__l264\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__84__PROF__ex__l89(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__84__PROF__ex__l89\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena) 
           & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__85__PROF__ex__l264(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__85__PROF__ex__l264\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__86__PROF__ex__l264(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__86__PROF__ex__l264\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__87__PROF__ex__l264(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__87__PROF__ex__l264\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__88__PROF__ex__l264(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__88__PROF__ex__l264\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__89__PROF__ex__l88(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__89__PROF__ex__l88\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type) 
           & (- (IData)((1U & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__90__PROF__id__l101(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__90__PROF__id__l101\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal) 
           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__91__PROF__id__l160(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__91__PROF__id__l160\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrci 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x7000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__92__PROF__id__l158(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__92__PROF__id__l158\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__93__PROF__id__l159(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__93__PROF__id__l159\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrsi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x6000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__94__PROF__id__l124(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__94__PROF__id__l124\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__95__PROF__id__l119(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__95__PROF__id__l119\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__96__PROF__id__l113(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__96__PROF__id__l113\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__97__PROF__id__l115(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__97__PROF__id__l115\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__98__PROF__id__l126(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__98__PROF__id__l126\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x6000U == (0x2007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__99__PROF__id__l137(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__99__PROF__id__l137\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x42007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__100__PROF__id__l118(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__100__PROF__id__l118\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x42007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__101__PROF__id__l120(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__101__PROF__id__l120\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x2007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__102__PROF__id__l122(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__102__PROF__id__l122\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x3000U == (0x2007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__103__PROF__id__l138(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__103__PROF__id__l138\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__104__PROF__id__l140(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__104__PROF__id__l140\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__105__PROF__id__l141(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__105__PROF__id__l141\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__106__PROF__id__l114(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__106__PROF__id__l114\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__107__PROF__id__l123(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__107__PROF__id__l123\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x4000U == (0x2007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__108__PROF__id__l139(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__108__PROF__id__l139\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__109__PROF__id__l116(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__109__PROF__id__l116\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__110__PROF__id__l125(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__110__PROF__id__l125\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__111__PROF__id__l127(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__111__PROF__id__l127\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x7000U == (0x2007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__112__PROF__id__l111(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__112__PROF__id__l111\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai 
        = (1U & (IData)(((0x10U == (0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__113__PROF__id__l121(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__113__PROF__id__l121\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000U == (0x2007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__114__PROF__id__l132(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__114__PROF__id__l132\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2002000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__115__PROF__id__l144(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__115__PROF__id__l144\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__116__PROF__id__l133(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__116__PROF__id__l133\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2003000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__117__PROF__id__l131(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__117__PROF__id__l131\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2001000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__118__PROF__id__l128(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__118__PROF__id__l128\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__119__PROF__id__l130(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__119__PROF__id__l130\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__120__PROF__id__l142(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__120__PROF__id__l142\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__121__PROF__id__l134(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__121__PROF__id__l134\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__122__PROF__id__l135(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__122__PROF__id__l135\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__123__PROF__id__l143(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__123__PROF__id__l143\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__124__PROF__id__l146(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__124__PROF__id__l146\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__125__PROF__id__l145(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__125__PROF__id__l145\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__126__PROF__id__l129(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__126__PROF__id__l129\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__127__PROF__id__l195(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__127__PROF__id__l195\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2 = (IData)(
                                                            (0U 
                                                             != 
                                                             (0x4dU 
                                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__128__PROF__id__l167(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__128__PROF__id__l167\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                    & (0U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
           & (1U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                     >> 0x14U)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__129__PROF__id__l156(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__129__PROF__id__l156\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__130__PROF__id__l155(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__130__PROF__id__l155\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__131__PROF__id__l157(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__131__PROF__id__l157\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x3000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__132__PROF__ex__l203(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__132__PROF__ex__l203\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__133__PROF__ex__l97(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__133__PROF__ex__l97\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__134__PROF__uncache_mmio__l37(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__134__PROF__uncache_mmio__l37\n"); );
    // Body
    vlSelf->SocTop__DOT__mmio_thing = (((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__start_sign) 
                                        & ((0xa00003f8ULL 
                                            <= vlSelf->SocTop__DOT__rvcpu_data_addr) 
                                           & (0xa00003ffULL 
                                              >= vlSelf->SocTop__DOT__rvcpu_data_addr)))
                                        ? 1U : (((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__start_sign) 
                                                 & ((0xa0000048ULL 
                                                     <= vlSelf->SocTop__DOT__rvcpu_data_addr) 
                                                    & (0xa000004fULL 
                                                       >= vlSelf->SocTop__DOT__rvcpu_data_addr)))
                                                 ? 1U
                                                 : 4U));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__135__PROF__uncache_mmio__l42(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__135__PROF__uncache_mmio__l42\n"); );
    // Body
    vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache 
        = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__start_sign) 
           & (((0xa00003f8ULL <= vlSelf->SocTop__DOT__rvcpu_data_addr) 
               & (0xa00003ffULL >= vlSelf->SocTop__DOT__rvcpu_data_addr)) 
              | ((0xa0000048ULL <= vlSelf->SocTop__DOT__rvcpu_data_addr) 
                 & (0xa000004fULL >= vlSelf->SocTop__DOT__rvcpu_data_addr))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__136__PROF__csr__l171(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__136__PROF__csr__l171\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause 
        = ((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__137__PROF__csr__l66(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__137__PROF__csr__l66\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus 
        = ((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__138__PROF__ex__l230(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__138__PROF__ex__l230\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__139__PROF__csr__l238(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__139__PROF__csr__l238\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__140__PROF__id__l198(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__140__PROF__id__l198\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena 
        = ((0U != (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                            >> 7U))) & ((((IData)((0U 
                                                   != 
                                                   (0xfaU 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type)))) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui)) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc)) 
                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__141__PROF__id__l176(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__141__PROF__id__l176\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__142__PROF__id__l174(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__142__PROF__id__l174\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xf7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrci) 
                                                             | (1U 
                                                                & (IData)(
                                                                          ((4U 
                                                                            == 
                                                                            (4U 
                                                                             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                           & (0x5000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                            | (1U 
                                                               & (IData)(
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__143__PROF__id__l175(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__143__PROF__id__l175\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__144__PROF__id__l196(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__144__PROF__id__l196\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2)
            ? (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                        >> 0x14U)) : 0U);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__145__PROF__id__l172(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__145__PROF__id__l172\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__146__PROF__id__l173(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__146__PROF__id__l173\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfbU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrsi) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                             & (0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                              | (1U 
                                                                 & (IData)(
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__147__PROF__id__l69(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__147__PROF__id__l69\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
            ? 0xbU : (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                               >> 0xfU)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__148__PROF__id__l178(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__148__PROF__id__l178\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__149__PROF__id__l177(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__149__PROF__id__l177\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__150__PROF__id__l171(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__150__PROF__id__l171\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__151__PROF__id__l192(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__151__PROF__id__l192\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1 = 
        (1U & (((IData)((0U != (0x7fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type)))) 
                | (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))) 
               | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__152__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__152__PROF__soc_axi4__l105\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_aw_addr[0U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[1U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[2U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[3U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[4U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[5U] = 0U;
    } else if ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))) {
        vlSelf->SocTop__DOT__add_axi_aw_addr[0U] = (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr);
        vlSelf->SocTop__DOT__add_axi_aw_addr[1U] = (IData)(
                                                           (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr 
                                                            >> 0x20U));
    } else if ((2U & (IData)(vlSelf->SocTop__DOT__mmio_thing))) {
        vlSelf->SocTop__DOT__add_axi_aw_addr[2U] = (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr);
        vlSelf->SocTop__DOT__add_axi_aw_addr[3U] = (IData)(
                                                           (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr 
                                                            >> 0x20U));
    } else if ((4U & (IData)(vlSelf->SocTop__DOT__mmio_thing))) {
        vlSelf->SocTop__DOT__add_axi_aw_addr[4U] = (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr);
        vlSelf->SocTop__DOT__add_axi_aw_addr[5U] = (IData)(
                                                           (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr 
                                                            >> 0x20U));
    } else {
        vlSelf->SocTop__DOT__add_axi_aw_addr[0U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[1U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[2U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[3U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[4U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[5U] = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__153__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__153__PROF__soc_axi4__l105\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_w_data[0U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[1U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[2U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[3U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[4U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[5U] = 0U;
    } else if ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))) {
        vlSelf->SocTop__DOT__add_axi_w_data[0U] = (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data);
        vlSelf->SocTop__DOT__add_axi_w_data[1U] = (IData)(
                                                          (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data 
                                                           >> 0x20U));
    } else if ((2U & (IData)(vlSelf->SocTop__DOT__mmio_thing))) {
        vlSelf->SocTop__DOT__add_axi_w_data[2U] = (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data);
        vlSelf->SocTop__DOT__add_axi_w_data[3U] = (IData)(
                                                          (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data 
                                                           >> 0x20U));
    } else if ((4U & (IData)(vlSelf->SocTop__DOT__mmio_thing))) {
        vlSelf->SocTop__DOT__add_axi_w_data[4U] = (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data);
        vlSelf->SocTop__DOT__add_axi_w_data[5U] = (IData)(
                                                          (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data 
                                                           >> 0x20U));
    } else {
        vlSelf->SocTop__DOT__add_axi_w_data[0U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[1U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[2U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[3U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[4U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[5U] = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__154__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__154__PROF__soc_axi4__l105\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_aw_id = ((IData)(vlSelf->rst)
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? 
                                                   ((0xff0U 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                                    | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                     ? 
                                                    ((0xf0fU 
                                                      & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                                     | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id) 
                                                        << 4U))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                      ? 
                                                     ((0xffU 
                                                       & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                                      | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id) 
                                                         << 8U))
                                                      : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__155__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__155__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_r_ready = ((IData)(vlSelf->rst)
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                              ? ((6U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready)) 
                                                 | (IData)(vlSelf->SocTop__DOT__t_axi_r_ready))
                                              : ((2U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 ((5U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__t_axi_r_ready) 
                                                     << 1U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((3U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_r_ready) 
                                                      << 2U))
                                                   : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__156__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__156__PROF__soc_axi4__l105\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_b_ready = ((IData)(vlSelf->rst)
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                              ? (1U 
                                                 | (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))
                                              : ((2U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 (2U 
                                                  | (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  (4U 
                                                   | (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))
                                                   : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__157__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__157__PROF__soc_axi4__l105\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_w_strb = ((IData)(vlSelf->rst)
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                             ? ((0xffff00U 
                                                 & vlSelf->SocTop__DOT__add_axi_w_strb) 
                                                | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb))
                                             : ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                 ? 
                                                ((0xff00ffU 
                                                  & vlSelf->SocTop__DOT__add_axi_w_strb) 
                                                 | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb) 
                                                    << 8U))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 ((0xffffU 
                                                   & vlSelf->SocTop__DOT__add_axi_w_strb) 
                                                  | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb) 
                                                     << 0x10U))
                                                  : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__159__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__159__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_r_last = (1U & ((~ (IData)(vlSelf->rst)) 
                                               & ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? (IData)(vlSelf->SocTop__DOT__add_axi_r_last)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? 
                                                   ((IData)(vlSelf->SocTop__DOT__add_axi_r_last) 
                                                    >> 1U)
                                                    : 
                                                   (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_r_last)) 
                                                    >> 2U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__160__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__160__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_r_valid = (1U & ((~ (IData)(vlSelf->rst)) 
                                                & ((1U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? (IData)(vlSelf->SocTop__DOT__add_axi_r_valid)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                     ? 
                                                    ((IData)(vlSelf->SocTop__DOT__add_axi_r_valid) 
                                                     >> 1U)
                                                     : 
                                                    (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                      & (IData)(vlSelf->SocTop__DOT__add_axi_r_valid)) 
                                                     >> 2U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__161__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__161__PROF__soc_axi4__l218\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_ar_addr[0U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[1U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[2U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[3U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[4U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[5U] = 0U;
    } else if ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))) {
        vlSelf->SocTop__DOT__add_axi_ar_addr[0U] = (IData)(vlSelf->SocTop__DOT__t_axi_ar_addr);
        vlSelf->SocTop__DOT__add_axi_ar_addr[1U] = (IData)(
                                                           (vlSelf->SocTop__DOT__t_axi_ar_addr 
                                                            >> 0x20U));
    } else if ((2U & (IData)(vlSelf->SocTop__DOT__mmio_thing))) {
        vlSelf->SocTop__DOT__add_axi_ar_addr[2U] = (IData)(vlSelf->SocTop__DOT__t_axi_ar_addr);
        vlSelf->SocTop__DOT__add_axi_ar_addr[3U] = (IData)(
                                                           (vlSelf->SocTop__DOT__t_axi_ar_addr 
                                                            >> 0x20U));
    } else if ((4U & (IData)(vlSelf->SocTop__DOT__mmio_thing))) {
        vlSelf->SocTop__DOT__add_axi_ar_addr[4U] = (IData)(vlSelf->SocTop__DOT__t_axi_ar_addr);
        vlSelf->SocTop__DOT__add_axi_ar_addr[5U] = (IData)(
                                                           (vlSelf->SocTop__DOT__t_axi_ar_addr 
                                                            >> 0x20U));
    } else {
        vlSelf->SocTop__DOT__add_axi_ar_addr[0U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[1U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[2U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[3U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[4U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[5U] = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__162__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__162__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_ar_id = ((IData)(vlSelf->rst)
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? 
                                                   ((0xff0U 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id)) 
                                                    | (IData)(vlSelf->SocTop__DOT__t_axi_ar_id))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                     ? 
                                                    ((0xf0fU 
                                                      & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id)) 
                                                     | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_id) 
                                                        << 4U))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                      ? 
                                                     ((0xffU 
                                                       & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id)) 
                                                      | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_id) 
                                                         << 8U))
                                                      : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__163__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__163__PROF__soc_axi4__l105\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_w_last = ((IData)(vlSelf->rst)
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                             ? ((6U 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                                | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last))
                                             : ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                 ? 
                                                ((5U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                                 | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last) 
                                                    << 1U))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 ((3U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last) 
                                                     << 2U))
                                                  : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__164__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__164__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_ar_qos = ((IData)(vlSelf->rst)
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                             ? ((0xff0U 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos)) 
                                                | (IData)(vlSelf->SocTop__DOT__t_axi_ar_qos))
                                             : ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                 ? 
                                                ((0xf0fU 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos)) 
                                                 | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_qos) 
                                                    << 4U))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 ((0xffU 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_qos) 
                                                     << 8U))
                                                  : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__165__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__165__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_ar_prot = ((IData)(vlSelf->rst)
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                              ? ((0x1f8U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot)) 
                                                 | (IData)(vlSelf->SocTop__DOT__t_axi_ar_prot))
                                              : ((2U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 ((0x1c7U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_prot) 
                                                     << 3U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((0x3fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_prot) 
                                                      << 6U))
                                                   : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__166__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__166__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_ar_cache = ((IData)(vlSelf->rst)
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                               ? ((0xff0U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache)) 
                                                  | (IData)(vlSelf->SocTop__DOT__t_axi_ar_cache))
                                               : ((2U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((0xf0fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_cache) 
                                                      << 4U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? 
                                                   ((0xffU 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_cache) 
                                                       << 8U))
                                                    : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__167__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__167__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_ar_burst = ((IData)(vlSelf->rst)
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                               ? ((0x3cU 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst)) 
                                                  | (IData)(vlSelf->SocTop__DOT__t_axi_ar_burst))
                                               : ((2U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((0x33U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_burst) 
                                                      << 2U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_burst) 
                                                       << 4U))
                                                    : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__168__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__168__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_ar_len = ((IData)(vlSelf->rst)
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                             ? ((0xffff00U 
                                                 & vlSelf->SocTop__DOT__add_axi_ar_len) 
                                                | (IData)(vlSelf->SocTop__DOT__t_axi_ar_len))
                                             : ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                 ? 
                                                ((0xff00ffU 
                                                  & vlSelf->SocTop__DOT__add_axi_ar_len) 
                                                 | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_len) 
                                                    << 8U))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 ((0xffffU 
                                                   & vlSelf->SocTop__DOT__add_axi_ar_len) 
                                                  | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_len) 
                                                     << 0x10U))
                                                  : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__169__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__169__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_ar_size = ((IData)(vlSelf->rst)
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                              ? ((0x1f8U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size)) 
                                                 | (IData)(vlSelf->SocTop__DOT__t_axi_ar_size))
                                              : ((2U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 ((0x1c7U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_size) 
                                                     << 3U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((0x3fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_size) 
                                                      << 6U))
                                                   : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__170__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__170__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_ar_valid = ((IData)(vlSelf->rst)
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                               ? ((6U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid)) 
                                                  | (IData)(vlSelf->SocTop__DOT__t_axi_ar_valid))
                                               : ((2U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((5U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_valid) 
                                                      << 1U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_valid) 
                                                       << 2U))
                                                    : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__171__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__171__PROF__soc_axi4__l105\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_aw_qos = ((IData)(vlSelf->rst)
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                             ? ((0xff0U 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos)) 
                                                | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos))
                                             : ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                 ? 
                                                ((0xf0fU 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos)) 
                                                 | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos) 
                                                    << 4U))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 ((0xffU 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos) 
                                                     << 8U))
                                                  : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__172__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__172__PROF__soc_axi4__l105\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_aw_prot = ((IData)(vlSelf->rst)
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                              ? ((0x1f8U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot)) 
                                                 | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port))
                                              : ((2U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 ((0x1c7U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port) 
                                                     << 3U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((0x3fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port) 
                                                      << 6U))
                                                   : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__173__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__173__PROF__soc_axi4__l105\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_aw_cache = ((IData)(vlSelf->rst)
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                               ? ((0xff0U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache)) 
                                                  | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache))
                                               : ((2U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((0xf0fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache) 
                                                      << 4U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? 
                                                   ((0xffU 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache) 
                                                       << 8U))
                                                    : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__174__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__174__PROF__soc_axi4__l105\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_aw_burst = ((IData)(vlSelf->rst)
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                               ? ((0x3cU 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst)) 
                                                  | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst))
                                               : ((2U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((0x33U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst) 
                                                      << 2U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst) 
                                                       << 4U))
                                                    : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__175__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__175__PROF__soc_axi4__l105\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_aw_size = ((IData)(vlSelf->rst)
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                              ? ((0x1f8U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size)) 
                                                 | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size))
                                              : ((2U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 ((0x1c7U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size) 
                                                     << 3U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((0x3fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size) 
                                                      << 6U))
                                                   : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__176__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__176__PROF__soc_axi4__l105\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_aw_len = ((IData)(vlSelf->rst)
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                             ? ((0xffff00U 
                                                 & vlSelf->SocTop__DOT__add_axi_aw_len) 
                                                | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len))
                                             : ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                 ? 
                                                ((0xff00ffU 
                                                  & vlSelf->SocTop__DOT__add_axi_aw_len) 
                                                 | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len) 
                                                    << 8U))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 ((0xffffU 
                                                   & vlSelf->SocTop__DOT__add_axi_aw_len) 
                                                  | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len) 
                                                     << 0x10U))
                                                  : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__177__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__177__PROF__soc_axi4__l105\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_w_valid = ((IData)(vlSelf->rst)
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                              ? ((6U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                 | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid))
                                              : ((2U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? 
                                                 ((5U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid) 
                                                     << 1U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((3U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid) 
                                                      << 2U))
                                                   : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__178__PROF__soc_axi4__l105(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__178__PROF__soc_axi4__l105\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_aw_valid = ((IData)(vlSelf->rst)
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                               ? ((6U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid)) 
                                                  | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid))
                                               : ((2U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((5U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid) 
                                                      << 1U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid) 
                                                       << 2U))
                                                    : 0U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__179__PROF__uncache_mmio__l44(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__179__PROF__uncache_mmio__l44\n"); );
    // Body
    vlSelf->SocTop__DOT__uncache_arb_addr = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                              ? vlSelf->SocTop__DOT__rvcpu_data_addr
                                              : 0ULL);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__180__PROF__uncache_mmio__l56(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__180__PROF__uncache_mmio__l56\n"); );
    // Body
    vlSelf->SocTop__DOT__uncache_dc_data = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                             ? 0ULL
                                             : vlSelf->SocTop__DOT__rvcpu_data_o);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__181__PROF__uncache_mmio__l58(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__181__PROF__uncache_mmio__l58\n"); );
    // Body
    vlSelf->SocTop__DOT__uncache_dc_we = ((~ (IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu_we));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__182__PROF__uncache_mmio__l59(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__182__PROF__uncache_mmio__l59\n"); );
    // Body
    vlSelf->SocTop__DOT__uncache_dc_re = ((~ (IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu_re));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__183__PROF__uncache_mmio__l57(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__183__PROF__uncache_mmio__l57\n"); );
    // Body
    vlSelf->SocTop__DOT__uncache_dc_mask = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                             ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu_wmask));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__184__PROF__uncache_mmio__l47(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__184__PROF__uncache_mmio__l47\n"); );
    // Body
    vlSelf->SocTop__DOT__uncache_arb_we = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache) 
                                           & (IData)(vlSelf->SocTop__DOT__rvcpu_we));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__185__PROF__uncache_mmio__l48(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__185__PROF__uncache_mmio__l48\n"); );
    // Body
    vlSelf->SocTop__DOT__uncache_arb_re = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache) 
                                           & (IData)(vlSelf->SocTop__DOT__rvcpu_re));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__186__PROF__uncache_mmio__l55(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__186__PROF__uncache_mmio__l55\n"); );
    // Body
    vlSelf->SocTop__DOT__uncache_dc_addr = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                             ? 0ULL
                                             : vlSelf->SocTop__DOT__rvcpu_data_addr);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__187__PROF__csr__l68(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__187__PROF__csr__l68\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus) 
            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)) 
           | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
              | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__188__PROF__ex__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__188__PROF__ex__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch) 
            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena)) 
           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__189__PROF__ex__l86(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__189__PROF__ex__l86\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data 
        = ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))
            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2
            : ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type) 
                 >> 7U) & (7U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__190__PROF__ex__l264(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__190__PROF__ex__l264\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__191__PROF__id__l193(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__191__PROF__id__l193\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1)
            ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1)
            : 0U);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__192__PROF__SocTop__l353(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__192__PROF__SocTop__l353\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_b_id = ((0xf00U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                         | ((((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_m))
                                               ? (IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_id)
                                               : 0U) 
                                             << 4U) 
                                            | (0xfU 
                                               & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__193__PROF__clint__l111(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__193__PROF__clint__l111\n"); );
    // Body
    vlSelf->SocTop__DOT__clint6__DOT__wmask = (((QData)((IData)(
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__194__PROF__SocTop__l369(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__194__PROF__SocTop__l369\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_r_id = ((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                            ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                            : 0U) << 8U) 
                                         | ((((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r))
                                               ? (0xfU 
                                                  & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                     >> 4U))
                                               : 0U) 
                                             << 4U) 
                                            | ((2U 
                                                == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))
                                                ? (0xfU 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))
                                                : 0U)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__195__PROF__axi_mnq__l119(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__195__PROF__axi_mnq__l119\n"); );
    // Body
    vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand 
        = (((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
              & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                 >> 2U)) & (0U == (0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                            >> 0x10U)))) 
            & (3U == (7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                            >> 6U)))) & (1U == (3U 
                                                & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                                   >> 4U))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__196__PROF__io_slave_axi__l169(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__196__PROF__io_slave_axi__l169\n"); );
    // Body
    vlSelf->SocTop__DOT__io_slave_axi9__DOT__ar_shankhand 
        = (((((IData)(vlSelf->SocTop__DOT__io_axi_ar_ready) 
              & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid)) 
             & (0U == (0xffU & vlSelf->SocTop__DOT__add_axi_ar_len))) 
            & (3U == (7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size)))) 
           & (1U == (3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__197__PROF__clint__l205(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__197__PROF__clint__l205\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__198__PROF__clint__l135(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__198__PROF__clint__l135\n"); );
    // Body
    vlSelf->SocTop__DOT__clint6__DOT__mode_right = (IData)(
                                                           ((((((0U 
                                                                 == 
                                                                 (0xff00U 
                                                                  & vlSelf->SocTop__DOT__add_axi_aw_len)) 
                                                                & (0x30U 
                                                                   == 
                                                                   (0x38U 
                                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size)))) 
                                                               & (4U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst)))) 
                                                              & (0U 
                                                                 == 
                                                                 (0xf0U 
                                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache)))) 
                                                             & (0U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot)))) 
                                                            & (0U 
                                                               == 
                                                               (0xf0U 
                                                                & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__199__PROF__axi_mnq__l109(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__199__PROF__axi_mnq__l109\n"); );
    // Body
    vlSelf->SocTop__DOT__soc_axi_w_ready = (1U & ((
                                                   ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                                  >> 2U));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__200__PROF__io_slave_axi__l159(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__200__PROF__io_slave_axi__l159\n"); );
    // Body
    vlSelf->SocTop__DOT__io_axi_w_ready = (1U & (((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__201__PROF__axi_mnq__l108(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__201__PROF__axi_mnq__l108\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__202__PROF__io_slave_axi__l158(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__202__PROF__io_slave_axi__l158\n"); );
    // Body
    vlSelf->SocTop__DOT__io_axi_aw_ready = ((((((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                 & (0U 
                                                    == 
                                                    (0xffU 
                                                     & vlSelf->SocTop__DOT__add_axi_aw_len))) 
                                                & (3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size)))) 
                                               & (1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst)))) 
                                              & (2U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache)))) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot)))) 
                                            & (0U == 
                                               (0xfU 
                                                & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__203__PROF__clint__l141(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__203__PROF__clint__l141\n"); );
    // Body
    vlSelf->SocTop__DOT__tim_axi_w_ready = (1U & ((
                                                   ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                                  >> 1U));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__204__PROF__d_cache__l557(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__204__PROF__d_cache__l557\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
        = ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
            ? vlSelf->SocTop__DOT__uncache_dc_data : 
           ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
             ? vlSelf->SocTop__DOT__arbitrate_d_data
             : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                 ? vlSelf->SocTop__DOT__arbitrate_d_data
                 : 0ULL)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__205__PROF__d_cache__l578(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__205__PROF__d_cache__l578\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
        = ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
            ? vlSelf->SocTop__DOT__uncache_dc_data : 
           ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
             ? vlSelf->SocTop__DOT__arbitrate_d_data
             : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                 ? vlSelf->SocTop__DOT__arbitrate_d_data
                 : 0ULL)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__206__PROF__d_cache__l155(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__206__PROF__d_cache__l155\n"); );
    // Body
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_o = 1U;
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_o = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__207__PROF__d_cache__l357(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__207__PROF__d_cache__l357\n"); );
    // Body
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_o = 1U;
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_o = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__208__PROF__d_cache__l155(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__208__PROF__d_cache__l155\n"); );
    // Body
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((1U & (~ (vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
                      [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                         >> 3U)))] 
                      & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))]))))) {
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                    >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                              >> 3U)))]))) {
                vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_t = 1U;
            }
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_t = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__209__PROF__d_cache__l357(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__209__PROF__d_cache__l357\n"); );
    // Body
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((1U & (~ (vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
                      [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                         >> 3U)))] 
                      & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))]))))) {
            if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                 [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                    >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                              >> 3U)))]))) {
                vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_t = 1U;
            }
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_t = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__210__PROF__d_cache__l209(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__210__PROF__d_cache__l209\n"); );
    // Body
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regr_))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp = 1U;
                    } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                   >> 3U)))] 
                                < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                   >> 3U)))])) {
                        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp = 1U;
                    }
                } else {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp = 1U;
                }
            } else {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__211__PROF__d_cache__l410(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__211__PROF__d_cache__l410\n"); );
    // Body
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regw_))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp = 1U;
                    } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                   >> 3U)))] 
                                < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                   >> 3U)))])) {
                        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp = 1U;
                    }
                } else {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp = 1U;
                }
            } else {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__212__PROF__d_cache__l155(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__212__PROF__d_cache__l155\n"); );
    // Body
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data 
                = vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data;
        } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data 
                = vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data;
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data = 0ULL;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__213__PROF__d_cache__l357(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__213__PROF__d_cache__l357\n"); );
    // Body
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data 
                = vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data;
        } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data 
                = vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data;
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data = 0ULL;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__214__PROF__d_cache__l209(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__214__PROF__d_cache__l209\n"); );
    // Body
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regr_))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1 = 1U;
                    }
                }
            } else {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1 = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1 = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__215__PROF__d_cache__l209(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__215__PROF__d_cache__l209\n"); );
    // Body
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr 
            = (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__uncache_dc_addr);
    } else if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) 
                & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regr_))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr = 0ULL;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__216__PROF__d_cache__l209(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__216__PROF__d_cache__l209\n"); );
    // Body
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regr_))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                >> 3U)))] 
                             < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                >> 3U)))])) {
                            vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2 = 1U;
                        }
                    }
                } else {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2 = 1U;
                }
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2 = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__217__PROF__d_cache__l410(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__217__PROF__d_cache__l410\n"); );
    // Body
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regw_))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1 = 1U;
                    }
                }
            } else {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1 = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1 = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__218__PROF__d_cache__l410(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__218__PROF__d_cache__l410\n"); );
    // Body
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr 
            = (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__uncache_dc_addr);
    } else if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) 
                & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regw_))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr = 0ULL;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__219__PROF__d_cache__l410(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__219__PROF__d_cache__l410\n"); );
    // Body
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regw_))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                >> 3U)))] 
                             < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                >> 3U)))])) {
                            vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2 = 1U;
                        }
                    }
                } else {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2 = 1U;
                }
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2 = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__220__PROF__d_cache__l324(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__220__PROF__d_cache__l324\n"); );
    // Body
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
        if (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
              == (vlSelf->SocTop__DOT__uncache_dc_addr 
                  >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1 
                = vlSelf->SocTop__DOT__uncache_dc_mask;
        } else if ((1U & (~ ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                              == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                  >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1 = 0U;
        }
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1 = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__221__PROF__d_cache__l324(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__221__PROF__d_cache__l324\n"); );
    // Body
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
        if ((1U & (~ ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                       == (vlSelf->SocTop__DOT__uncache_dc_addr 
                           >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2 
                = (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                     == (vlSelf->SocTop__DOT__uncache_dc_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))
                    ? (IData)(vlSelf->SocTop__DOT__uncache_dc_mask)
                    : 0U);
        }
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2 = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__222__PROF__d_cache__l209(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__222__PROF__d_cache__l209\n"); );
    // Body
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regr_))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1 = 0xffU;
                    }
                }
            } else {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1 = 0xffU;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1 = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__223__PROF__d_cache__l209(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__223__PROF__d_cache__l209\n"); );
    // Body
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regr_))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                >> 3U)))] 
                             < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                >> 3U)))])) {
                            vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2 = 0xffU;
                        }
                    }
                } else {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2 = 0xffU;
                }
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2 = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__224__PROF__d_cache__l410(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__224__PROF__d_cache__l410\n"); );
    // Body
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regw_))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1 = 0xffU;
                    }
                }
            } else {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1 = 0xffU;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1 = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__225__PROF__d_cache__l410(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__225__PROF__d_cache__l410\n"); );
    // Body
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regw_))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                >> 3U)))] 
                             < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                >> 3U)))])) {
                            vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2 = 0xffU;
                        }
                    }
                } else {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2 = 0xffU;
                }
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2 = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__226__PROF__d_cache__l155(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__226__PROF__d_cache__l155\n"); );
    // Body
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr 
                = ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                    << 9U) | (QData)((IData)((0x1f8U 
                                              & ((IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)) 
                                                 << 3U)))));
        } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr 
                = ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                    << 9U) | (QData)((IData)((0x1f8U 
                                              & ((IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)) 
                                                 << 3U)))));
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr = 0ULL;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__227__PROF__d_cache__l357(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__227__PROF__d_cache__l357\n"); );
    // Body
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr 
                = ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                    << 9U) | (QData)((IData)((0x1f8U 
                                              & ((IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)) 
                                                 << 3U)))));
        } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr 
                = ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                    << 9U) | (QData)((IData)((0x1f8U 
                                              & ((IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)) 
                                                 << 3U)))));
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr = 0ULL;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__228__PROF__d_cache__l125(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__228__PROF__d_cache__l125\n"); );
    // Body
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) {
        if (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
              == (vlSelf->SocTop__DOT__uncache_dc_addr 
                  >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok = 1U;
        } else if (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                     == (vlSelf->SocTop__DOT__uncache_dc_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok = 1U;
        }
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__229__PROF__d_cache__l410(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__229__PROF__d_cache__l410\n"); );
    // Body
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regw_))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok = 1U;
                    } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                   >> 3U)))] 
                                < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                   >> 3U)))])) {
                        vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok = 1U;
                    }
                } else {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok = 1U;
                }
            } else {
                vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__230__PROF__d_cache__l209(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__230__PROF__d_cache__l209\n"); );
    // Body
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regr_))) {
            if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild) {
                if (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild) {
                    if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok = 1U;
                    } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                   >> 3U)))] 
                                < vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                   >> 3U)))])) {
                        vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok = 1U;
                    }
                } else {
                    vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok = 1U;
                }
            } else {
                vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok = 1U;
            }
        } else {
            vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__231__PROF__uncache_mmio__l61(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__231__PROF__uncache_mmio__l61\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache_data_out = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                              ? vlSelf->SocTop__DOT__uncache_arb_data_o
                                              : ((4U 
                                                  == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                                  ? 
                                                 (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                                    == 
                                                    (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                     >> 9U)) 
                                                   & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))
                                                   ? vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data
                                                   : 
                                                  (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                                     == 
                                                     (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                      >> 9U)) 
                                                    & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))
                                                    ? vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data
                                                    : 0ULL))
                                                  : 0ULL));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__232__PROF__d_cache__l606(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__232__PROF__d_cache__l606\n"); );
    // Body
    vlSelf->SocTop__DOT__uncache_dc_finish = ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                               ? ((4U 
                                                   == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                                  & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                                       == 
                                                       (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                        >> 9U)) 
                                                      & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                                     | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                                         == 
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 9U)) 
                                                        & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))
                                               : ((4U 
                                                   == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                                  & ((4U 
                                                      == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                                     & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                                          == 
                                                          (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                           >> 9U)) 
                                                         & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                                        | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                                            == 
                                                            (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                             >> 9U)) 
                                                           & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__233__PROF__d_cache__l155(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__233__PROF__d_cache__l155\n"); );
    // Body
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type = 1U;
        } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type = 1U;
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__234__PROF__d_cache__l357(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__234__PROF__d_cache__l357\n"); );
    // Body
    if (((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type = 4U;
        } else if ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)))] < 
                     vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type = 4U;
        }
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__235__PROF__csr__l95(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__235__PROF__csr__l95\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
            ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                     ? 0U : (3U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                    ? (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                               >> 0xbU))
                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__236__PROF__csr__l173(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__236__PROF__csr__l173\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
            ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
            : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__237__PROF__csr__l70(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__237__PROF__csr__l70\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt 
        = (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                  ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                  : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                     | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                    >> 7U)) : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__238__PROF__csr__l83(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__238__PROF__csr__l83\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mie_nxt 
        = (1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                     ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                     : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                    >> 3U)) : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__239__PROF__id__l211(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__239__PROF__id__l211\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
            == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__240__PROF__id__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__240__PROF__id__l212\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
            == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__241__PROF__id__l187(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__241__PROF__id__l187\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req = 
        ((IData)(vlSelf->rst) ? 0U : (1U & (((IData)(vlSelf->rst)
                                              ? 0U : 
                                             (1U & 
                                              (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                & (2U 
                                                   == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                               & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                  == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr))))) 
                                            | ((IData)(vlSelf->rst)
                                                ? 0U
                                                : (1U 
                                                   & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                       & (2U 
                                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                      & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                         == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr))))))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__242__PROF__arbitratem__l354(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__242__PROF__arbitratem__l354\n"); );
    // Body
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success 
        = ((((~ (IData)(vlSelf->rst)) & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                          ? (IData)(vlSelf->SocTop__DOT__add_axi_b_valid)
                                          : ((2U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                              ? ((IData)(vlSelf->SocTop__DOT__add_axi_b_valid) 
                                                 >> 1U)
                                              : (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_b_valid)) 
                                                 >> 2U)))) 
            & (1U == ((IData)(vlSelf->rst) ? 0U : (0xfU 
                                                   & ((1U 
                                                       & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                       ? (IData)(vlSelf->SocTop__DOT__add_axi_b_id)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                        ? 
                                                       ((IData)(vlSelf->SocTop__DOT__add_axi_b_id) 
                                                        >> 4U)
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                         ? 
                                                        ((IData)(vlSelf->SocTop__DOT__add_axi_b_id) 
                                                         >> 8U)
                                                         : 0U))))))) 
           & (0U == ((IData)(vlSelf->rst) ? 0U : (3U 
                                                  & ((1U 
                                                      & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                      ? 
                                                     ((IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp) 
                                                      << 2U)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                       ? 
                                                      (0x3fffffffU 
                                                       & (IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp) 
                                                           >> 2U))
                                                        : 0U)))))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__243__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__243__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_r_id = ((IData)(vlSelf->rst)
                                        ? 0U : (0xfU 
                                                & ((1U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? (IData)(vlSelf->SocTop__DOT__add_axi_r_id)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                     ? 
                                                    ((IData)(vlSelf->SocTop__DOT__add_axi_r_id) 
                                                     >> 4U)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                      ? 
                                                     ((IData)(vlSelf->SocTop__DOT__add_axi_r_id) 
                                                      >> 8U)
                                                      : 0U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__244__PROF__SocTop__l539(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__244__PROF__SocTop__l539\n"); );
    // Body
    vlSelf->read_ena_sign_ = vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand;
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__245__PROF__SocTop__l540(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__245__PROF__SocTop__l540\n"); );
    // Body
    vlSelf->out_addr_outp = ((IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand)
                              ? (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))
                              : 0ULL);
}

extern const VlUnpacked<CData/*1:0*/, 32> VSocTop__ConstPool__TABLE_287fc343_0;

VL_INLINE_OPT void VSocTop___024root___settle__TOP__246__PROF__axi_mnq__l130(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__246__PROF__axi_mnq__l130\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx3;
    // Body
    __Vtableidx3 = ((0xfffffff0U & (((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                     << 2U) & ((2U 
                                                == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                               << 4U))) 
                    | ((8U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                              << 1U)) | (((IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand) 
                                          << 2U) | (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
    vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt 
        = VSocTop__ConstPool__TABLE_287fc343_0[__Vtableidx3];
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__247__PROF__io_slave_axi__l233(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__247__PROF__io_slave_axi__l233\n"); );
    // Body
    vlSelf->out_rtc_read_ = vlSelf->SocTop__DOT__io_slave_axi9__DOT__ar_shankhand;
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__248__PROF__io_slave_axi__l166(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__248__PROF__io_slave_axi__l166\n"); );
    // Body
    vlSelf->out_slave_addr_ = ((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state))
                                ? vlSelf->SocTop__DOT__io_slave_axi9__DOT__write_addr_reg
                                : ((IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__ar_shankhand)
                                    ? (((QData)((IData)(
                                                        vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))
                                    : 0ULL));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__249__PROF__io_slave_axi__l180(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__249__PROF__io_slave_axi__l180\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx7;
    // Body
    __Vtableidx7 = ((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                      & (2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))) 
                     << 4U) | ((8U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                      << 3U)) | (((IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__ar_shankhand) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))));
    vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state_nxt 
        = VSocTop__ConstPool__TABLE_287fc343_0[__Vtableidx7];
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__250__PROF__SocTop__l367(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__250__PROF__SocTop__l367\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_ar_ready = (((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
                                              << 2U) 
                                             | (((IData)(vlSelf->SocTop__DOT__tim_axi_ar_ready) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_ar_ready)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__251__PROF__clint__l200(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__251__PROF__clint__l200\n"); );
    // Body
    vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand 
        = (((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
            >> 1U) & (IData)(vlSelf->SocTop__DOT__tim_axi_ar_ready));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__252__PROF__clint__l140(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__252__PROF__clint__l140\n"); );
    // Body
    vlSelf->SocTop__DOT__tim_axi_aw_ready = ((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                               & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                              >> 1U) 
                                             & (IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right));
}

extern const VlUnpacked<CData/*1:0*/, 128> VSocTop__ConstPool__TABLE_0bdcfe05_0;

VL_INLINE_OPT void VSocTop___024root___settle__TOP__253__PROF__axi_mnq__l82(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__253__PROF__axi_mnq__l82\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx2;
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__254__PROF__io_slave_axi__l119(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__254__PROF__io_slave_axi__l119\n"); );
    // Body
    vlSelf->SocTop__DOT__io_slave_axi9__DOT__aw_shankhand 
        = ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
           & (IData)(vlSelf->SocTop__DOT__io_axi_aw_ready));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__255__PROF__SocTop__l351(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__255__PROF__SocTop__l351\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_w_ready = (((IData)(vlSelf->SocTop__DOT__soc_axi_w_ready) 
                                             << 2U) 
                                            | (((IData)(vlSelf->SocTop__DOT__tim_axi_w_ready) 
                                                << 1U) 
                                               | (IData)(vlSelf->SocTop__DOT__io_axi_w_ready)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__256__PROF__clint__l131(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__256__PROF__clint__l131\n"); );
    // Body
    vlSelf->SocTop__DOT__clint6__DOT__w_shakehand = 
        (((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
          >> 1U) & (IData)(vlSelf->SocTop__DOT__tim_axi_w_ready));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__257__PROF__d_cache__l524(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__257__PROF__d_cache__l524\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1 = 
        ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
          ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1)
          : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__258__PROF__d_cache__l539(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__258__PROF__d_cache__l539\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2 = 
        ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
          ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2)
          : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__259__PROF__d_cache__l553(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__259__PROF__d_cache__l553\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1 = 
        ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
          ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1)
          : ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
              ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1)
              : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                  ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1)
                  : 0U)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__260__PROF__d_cache__l574(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__260__PROF__d_cache__l574\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2 = 
        ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
          ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2)
          : ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
              ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2)
              : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                  ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2)
                  : 0U)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__261__PROF__d_cache__l592(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__261__PROF__d_cache__l592\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__262__PROF__d_cache__l266(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__262__PROF__d_cache__l266\n"); );
    // Body
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
                                   == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                       >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                 | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                     == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))
                              ? 4U : (((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok) 
                                       & (((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                         >> 3U)))] 
                                            & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                            >> 3U)))] 
                                               >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                            >> 3U)))])) 
                                           & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)) 
                                          | ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                           >> 3U)))] 
                                              & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                              >> 3U)))])) 
                                             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))))
                                       ? 8U : ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok)
                                                ? 0x10U
                                                : 2U))))
                 : ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                     ? (((IData)(vlSelf->SocTop__DOT__uncache_dc_we) 
                         & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))
                         ? 2U : 1U) : 1U)));
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__263__PROF__d_cache__l69(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__263__PROF__d_cache__l69\n"); );
    // Body
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
                                   == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                       >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                 | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                     == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))
                              ? 4U : (((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__read_ok) 
                                       & (((vlSelf->SocTop__DOT__d_cache3__DOT__dirty1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                         >> 3U)))] 
                                            & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                            >> 3U)))] 
                                               >= vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                            >> 3U)))])) 
                                           & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)) 
                                          | ((vlSelf->SocTop__DOT__d_cache3__DOT__dirty2
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                           >> 3U)))] 
                                              & (vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                              >> 3U)))])) 
                                             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))))
                                       ? 8U : ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__read_ok)
                                                ? 0x10U
                                                : 2U))))
                 : ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                     ? (((IData)(vlSelf->SocTop__DOT__uncache_dc_re) 
                         & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))
                         ? 2U : 1U) : 1U)));
    }
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__264__PROF__mem__l59(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__264__PROF__mem__l59\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__265__PROF__mem__l72(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__265__PROF__mem__l72\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__266__PROF__mem__l81(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__266__PROF__mem__l81\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word 
        = ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                          >> 2U))) ? (IData)((vlSelf->SocTop__DOT__d_cache_data_out 
                                              >> 0x20U))
            : (IData)(vlSelf->SocTop__DOT__d_cache_data_out));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__267__PROF__d_cache__l586(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__267__PROF__d_cache__l586\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__268__PROF__id__l253(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__268__PROF__id__l253\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena 
        = ((IData)(vlSelf->rst) ? 0U : (1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr) 
                                              & (~ 
                                                 (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                                   & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))))))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__271__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__271__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_ar_ready = (1U & ((~ (IData)(vlSelf->rst)) 
                                                 & ((1U 
                                                     & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                     ? (IData)(vlSelf->SocTop__DOT__add_axi_ar_ready)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                      ? 
                                                     ((IData)(vlSelf->SocTop__DOT__add_axi_ar_ready) 
                                                      >> 1U)
                                                      : 
                                                     (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                       & (IData)(vlSelf->SocTop__DOT__add_axi_ar_ready)) 
                                                      >> 2U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__272__PROF__clint__l221(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__272__PROF__clint__l221\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx5;
    // Body
    __Vtableidx5 = ((0xfffffff0U & (((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r)) 
                                     << 4U) & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                               << 3U))) 
                    | ((8U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                              << 2U)) | (((IData)(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand) 
                                          << 2U) | (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r))));
    vlSelf->SocTop__DOT__clint6__DOT__state_time_r_nxt 
        = VSocTop__ConstPool__TABLE_287fc343_0[__Vtableidx5];
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__273__PROF__clint__l240(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__273__PROF__clint__l240\n"); );
    // Body
    vlSelf->SocTop__DOT__tim_axi_r_data = ((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r))
                                            ? ((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                                 & (IData)(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand)) 
                                                & (0x2004000ULL 
                                                   == 
                                                   (((QData)((IData)(
                                                                     vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                                ? vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l
                                                : (
                                                   (((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                                     & (IData)(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand)) 
                                                    & (0x200bff8ULL 
                                                       == 
                                                       (((QData)((IData)(
                                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                                    ? vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h
                                                    : 0ULL))
                                            : 0ULL);
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__274__PROF__SocTop__l344(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__274__PROF__SocTop__l344\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_aw_ready = (((IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready) 
                                              << 2U) 
                                             | (((IData)(vlSelf->SocTop__DOT__tim_axi_aw_ready) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_aw_ready)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__275__PROF__clint__l130(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__275__PROF__clint__l130\n"); );
    // Body
    vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand 
        = (((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
            >> 1U) & (IData)(vlSelf->SocTop__DOT__tim_axi_aw_ready));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__276__PROF__io_slave_axi__l132(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__276__PROF__io_slave_axi__l132\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx6;
    // Body
    __Vtableidx6 = ((((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state)) 
                      & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready)) 
                     << 6U) | ((0x20U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                         << 5U)) | 
                               ((0x10U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                          << 4U)) | 
                                ((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__io_axi_w_ready)) 
                                  << 3U) | (((IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__aw_shankhand) 
                                             << 2U) 
                                            | (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state))))));
    vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state_nxt 
        = VSocTop__ConstPool__TABLE_0bdcfe05_0[__Vtableidx6];
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__277__PROF__arbitratem__l353(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__277__PROF__arbitratem__l353\n"); );
    // Body
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand 
        = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid) 
           & ((~ (IData)(vlSelf->rst)) & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                           ? (IData)(vlSelf->SocTop__DOT__add_axi_w_ready)
                                           : ((2U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                               ? ((IData)(vlSelf->SocTop__DOT__add_axi_w_ready) 
                                                  >> 1U)
                                               : (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_w_ready)) 
                                                  >> 2U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__278__PROF__mem__l42(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__278__PROF__mem__l42\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__279__PROF__arbitratem__l145(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__279__PROF__arbitratem__l145\n"); );
    // Body
    vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand 
        = ((((0U == (IData)(vlSelf->SocTop__DOT__d_cache_out_type)) 
             | (~ (IData)(vlSelf->SocTop__DOT__uncache_arb_re))) 
            | (~ (IData)(vlSelf->SocTop__DOT__uncache_arb_we))) 
           & (IData)(vlSelf->SocTop__DOT__i_cache_read_ena));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__280__PROF__id__l256(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__280__PROF__id__l256\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush = 
        ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__281__PROF__arbitratem__l209(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__281__PROF__arbitratem__l209\n"); );
    // Body
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand 
        = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid) 
           & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__282__PROF__arbitratem__l293(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__282__PROF__arbitratem__l293\n"); );
    // Body
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand 
        = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid) 
           & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__283__PROF__SocTop__l370(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__283__PROF__SocTop__l370\n"); );
    // Body
    vlSelf->SocTop__DOT__add_axi_r_data[0U] = (IData)(
                                                      ((2U 
                                                        == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))
                                                        ? vlSelf->in_rtc_data_
                                                        : 0ULL));
    vlSelf->SocTop__DOT__add_axi_r_data[1U] = (IData)(
                                                      (((2U 
                                                         == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))
                                                         ? vlSelf->in_rtc_data_
                                                         : 0ULL) 
                                                       >> 0x20U));
    vlSelf->SocTop__DOT__add_axi_r_data[2U] = (IData)(vlSelf->SocTop__DOT__tim_axi_r_data);
    vlSelf->SocTop__DOT__add_axi_r_data[3U] = (IData)(
                                                      (vlSelf->SocTop__DOT__tim_axi_r_data 
                                                       >> 0x20U));
    vlSelf->SocTop__DOT__add_axi_r_data[4U] = (IData)(
                                                      ((2U 
                                                        == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                                        ? vlSelf->read_data_sign_
                                                        : 0ULL));
    vlSelf->SocTop__DOT__add_axi_r_data[5U] = (IData)(
                                                      (((2U 
                                                         == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                                         ? vlSelf->read_data_sign_
                                                         : 0ULL) 
                                                       >> 0x20U));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__284__PROF__arbitratem__l352(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__284__PROF__arbitratem__l352\n"); );
    // Body
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand 
        = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid) 
           & ((~ (IData)(vlSelf->rst)) & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                           ? (IData)(vlSelf->SocTop__DOT__add_axi_aw_ready)
                                           : ((2U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                               ? ((IData)(vlSelf->SocTop__DOT__add_axi_aw_ready) 
                                                  >> 1U)
                                               : (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_ready)) 
                                                  >> 2U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__285__PROF__clint__l138(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__285__PROF__clint__l138\n"); );
    // Body
    vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_l_nxt 
        = (((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
              & (IData)(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand)) 
             & (IData)(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand)) 
            & (0x2004000ULL == (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))
            ? (vlSelf->SocTop__DOT__clint6__DOT__wmask 
               & (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__add_axi_w_data[2U]))))
            : (1ULL + vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__286__PROF__clint__l139(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__286__PROF__clint__l139\n"); );
    // Body
    vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h_nxt 
        = (((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
              & (IData)(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand)) 
             & (IData)(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand)) 
            & (0x200bff8ULL == (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))
            ? (vlSelf->SocTop__DOT__clint6__DOT__wmask 
               & (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__add_axi_w_data[2U]))))
            : vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h);
}

extern const VlUnpacked<CData/*1:0*/, 128> VSocTop__ConstPool__TABLE_c02984f2_0;

VL_INLINE_OPT void VSocTop___024root___settle__TOP__287__PROF__clint__l158(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__287__PROF__clint__l158\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx4;
    // Body
    __Vtableidx4 = ((0xffffffc0U & (((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                     << 6U) & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                               << 5U))) 
                    | ((0x20U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                 << 4U)) | ((0x10U 
                                             & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                                << 3U)) 
                                            | (((IData)(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand) 
                                                << 3U) 
                                               | (((IData)(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_m))))));
    vlSelf->SocTop__DOT__clint6__DOT__state_time_m_nxt 
        = VSocTop__ConstPool__TABLE_c02984f2_0[__Vtableidx4];
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__288__PROF__id__l214(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__288__PROF__id__l214\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op = ((IData)(vlSelf->rst)
                                                   ? 0ULL
                                                   : 
                                                  ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1)
                                                    ? 
                                                   ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)
                                                     ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data
                                                     : 
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1)
                                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data
                                                      : 
                                                     (((~ (IData)(vlSelf->rst)) 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                                       ? 
                                                      ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                         == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                                        : 
                                                       vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                       [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                                       : 0ULL)))
                                                    : 
                                                   (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal))
                                                     ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc
                                                     : 
                                                    ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrsi)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrci))
                                                      ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1))
                                                      : 0ULL))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__289__PROF__arbitratem__l143(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__289__PROF__arbitratem__l143\n"); );
    // Body
    vlSelf->SocTop__DOT__arbitratem4__DOT__read_dcache_shankhand 
        = ((~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & ((2U == (IData)(vlSelf->SocTop__DOT__d_cache_out_type)) 
              | (8U == (IData)(vlSelf->SocTop__DOT__d_cache_out_type))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__290__PROF__arbitratem__l144(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__290__PROF__arbitratem__l144\n"); );
    // Body
    vlSelf->SocTop__DOT__arbitratem4__DOT__write_dcache_shankhand 
        = ((~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & ((1U == (IData)(vlSelf->SocTop__DOT__d_cache_out_type)) 
              | (4U == (IData)(vlSelf->SocTop__DOT__d_cache_out_type))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__291__PROF__arbitratem__l141(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__291__PROF__arbitratem__l141\n"); );
    // Body
    vlSelf->SocTop__DOT__arbitratem4__DOT__read_uncahce_shankhand 
        = ((~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & (IData)(vlSelf->SocTop__DOT__uncache_arb_re));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__292__PROF__arbitratem__l142(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__292__PROF__arbitratem__l142\n"); );
    // Body
    vlSelf->SocTop__DOT__arbitratem4__DOT__write_uncahce_shankhand 
        = ((~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & (IData)(vlSelf->SocTop__DOT__uncache_arb_we));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__293__PROF__soc_axi4__l218(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__293__PROF__soc_axi4__l218\n"); );
    // Body
    vlSelf->SocTop__DOT__t_axi_r_data = ((IData)(vlSelf->rst)
                                          ? 0ULL : 
                                         ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                           ? (((QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_r_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->SocTop__DOT__add_axi_r_data[0U])))
                                           : ((2U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                               ? (((QData)((IData)(
                                                                   vlSelf->SocTop__DOT__add_axi_r_data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_r_data[2U])))
                                               : ((4U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_r_data[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SocTop__DOT__add_axi_r_data[4U])))
                                                   : 0ULL))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__294__PROF__arbitratem__l416(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__294__PROF__arbitratem__l416\n"); );
    // Body
    vlSelf->SocTop__DOT__arbitrate_d_ok = (((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                            & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_uncahce_shankhand)))
                                            ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid)
                                            : (((2U 
                                                 == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_uncahce_shankhand))) 
                                               & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid)));
}

extern const VlUnpacked<CData/*2:0*/, 2048> VSocTop__ConstPool__TABLE_60a1e09e_0;

VL_INLINE_OPT void VSocTop___024root___settle__TOP__295__PROF__arbitratem__l160(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__295__PROF__arbitratem__l160\n"); );
    // Variables
    SData/*10:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand) 
                     << 0xaU) | (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_uncahce_shankhand) 
                                  << 9U) | (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_dcache_shankhand) 
                                             << 8U) 
                                            | (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_uncahce_shankhand) 
                                                << 7U) 
                                               | (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_dcache_shankhand) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_ok) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ok) 
                                                            << 3U) 
                                                           | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)))))))));
    vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state_nxt 
        = VSocTop__ConstPool__TABLE_60a1e09e_0[__Vtableidx1];
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__296__PROF__mem__l39(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__296__PROF__mem__l39\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_ctrl_req 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                        | (IData)(vlSelf->SocTop__DOT__rvcpu_we)) 
                                       & (~ ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                              ? (((5U 
                                                   == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                  & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_uncahce_shankhand))
                                                  ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid)
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                   & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_uncahce_shankhand)) 
                                                  & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid)))
                                              : (IData)(vlSelf->SocTop__DOT__uncache_dc_finish)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__297__PROF__if_id__l68(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__297__PROF__if_id__l68\n"); );
    // Body
    vlSelf->SocTop__DOT__core_stall_l = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_ctrl_req) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req)) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__298__PROF__i_cache__l104(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__298__PROF__i_cache__l104\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__299__PROF__i_cache__l104(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__299__PROF__i_cache__l104\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__300__PROF__i_cache__l104(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__300__PROF__i_cache__l104\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__301__PROF__ctrl__l17(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__301__PROF__ctrl__l17\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__302__PROF__i_cache__l37(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__302__PROF__i_cache__l37\n"); );
    // Body
    vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand 
        = (1U & ((~ (IData)(vlSelf->rst)) & (~ (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__303__PROF__pip_fore__l20(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__303__PROF__pip_fore__l20\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
        = ((0x80000U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->SocTop__DOT__i_cache_inst_data 
                                            >> 0x15U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__304__PROF__pip_fore__l24(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__304__PROF__pip_fore__l24\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm 
        = ((0x800U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                      >> 0x14U)) | ((0x400U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 8U)))));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__305__PROF__pip_fore__l33(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__305__PROF__pip_fore__l33\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr 
        = (IData)((0x67U == (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)));
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__306__PROF__i_cache__l54(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__306__PROF__i_cache__l54\n"); );
    // Body
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
}

VL_INLINE_OPT void VSocTop___024root___settle__TOP__307__PROF__pip_fore__l48(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__307__PROF__pip_fore__l48\n"); );
    // Body
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

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__464__PROF__mem_wb__l42(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__464__PROF__mem_wb__l42\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__wb_regfile_data 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__466__PROF__mem_wb__l40(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__466__PROF__mem_wb__l40\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_ena 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__467__PROF__mem_wb__l41(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__467__PROF__mem_wb__l41\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_addr 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__468__PROF__i_cache_data_ram__l15(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__468__PROF__i_cache_data_ram__l15\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__469__PROF__i_cache_data_ram__l15(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__469__PROF__i_cache_data_ram__l15\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__470__PROF__i_cache_tag_ram__l17(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__470__PROF__i_cache_tag_ram__l17\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__471__PROF__i_cache_tag_ram__l17(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__471__PROF__i_cache_tag_ram__l17\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__472__PROF__ex_mem__l37(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__472__PROF__ex_mem__l37\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_ena 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__473__PROF__if_id__l35(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__473__PROF__if_id__l35\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__if_id_pc 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__475__PROF__regfile__l111(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__475__PROF__regfile__l111\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__476__PROF__regfile__l116(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__476__PROF__regfile__l116\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__485__PROF__ex_mem__l39(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__485__PROF__ex_mem__l39\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_addr 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__495__PROF__id_ex__l46(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__495__PROF__id_ex__l46\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__497__PROF__multiplier__l40(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__497__PROF__multiplier__l40\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U];
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U];
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U] 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U];
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U] 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U];
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__502__PROF__id_ex__l42(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__502__PROF__id_ex__l42\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_pc 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__530__PROF__i_cache__l239(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__530__PROF__i_cache__l239\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter2__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__531__PROF__i_cache__l243(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__531__PROF__i_cache__l243\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter2__v1 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__532__PROF__i_cache__l237(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__532__PROF__i_cache__l237\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter1__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__533__PROF__i_cache__l242(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__533__PROF__i_cache__l242\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter1__v1 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__536__PROF__d_cache_tag_ram__l25(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__536__PROF__d_cache_tag_ram__l25\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__537__PROF__d_cache_tag_ram__l25(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__537__PROF__d_cache_tag_ram__l25\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__540__PROF__divider__l36(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__540__PROF__divider__l36\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<5>/*159:0*/ __Vtemp9;
    VlWide<5>/*159:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp15;
    VlWide<5>/*159:0*/ __Vtemp16;
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<5>/*159:0*/ __Vtemp21;
    VlWide<5>/*159:0*/ __Vtemp22;
    // Body
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__dividend_t = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__divider_t = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U] = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U] = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U] = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U] = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[4U] = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b[0U] = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b[1U] = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b[2U] = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign = 0U;
    } else if ((0U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter))) {
        if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter)));
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish = 0U;
            if ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sigin_inst) 
                  & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
                             >> 0x3fU))) & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
                                                    >> 0x3fU)))) {
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__dividend_t 
                    = (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata));
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__divider_t 
                    = (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata));
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign = 0U;
            } else if (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sigin_inst) 
                        & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
                                   >> 0x3fU)))) {
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__dividend_t 
                    = (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata));
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign = 1U;
            } else if (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sigin_inst) 
                        & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
                                   >> 0x3fU)))) {
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__divider_t 
                    = (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata));
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign = 1U;
            } else {
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__divider_t 
                    = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata;
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__dividend_t 
                    = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata;
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign = 0U;
            }
        }
    } else if ((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter)));
        VL_EXTEND_WQ(129,64, __Vtemp5, vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__dividend_t);
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U] 
            = __Vtemp5[0U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U] 
            = __Vtemp5[1U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U] 
            = __Vtemp5[2U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U] 
            = __Vtemp5[3U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[4U] 
            = __Vtemp5[4U];
        VL_EXTEND_WQ(65,64, __Vtemp6, vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__divider_t);
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b[0U] 
            = __Vtemp6[0U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b[1U] 
            = __Vtemp6[1U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b[2U] 
            = __Vtemp6[2U];
    } else if ((0x42U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter)));
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish = 1U;
    } else if ((0x43U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter)));
        __Vtemp9[1U] = ((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U] 
                         >> 0x1fU) | (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U] 
                                      << 1U));
        __Vtemp9[2U] = ((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U] 
                         >> 0x1fU) | (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U] 
                                      << 1U));
        __Vtemp9[3U] = ((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U] 
                         >> 0x1fU) | (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U] 
                                      << 1U));
        __Vtemp9[4U] = (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U] 
                        >> 0x1fU);
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U] 
            = (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U] 
               << 1U);
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U] 
            = __Vtemp9[1U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U] 
            = __Vtemp9[2U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U] 
            = __Vtemp9[3U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[4U] 
            = __Vtemp9[4U];
        __Vtemp15[0U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U];
        __Vtemp15[1U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U];
        __Vtemp15[2U] = (1U & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[4U]);
        __Vtemp16[0U] = 1U;
        __Vtemp16[1U] = 0U;
        __Vtemp16[2U] = 0U;
        __Vtemp16[3U] = 0U;
        __Vtemp16[4U] = 0U;
        __Vtemp18[0U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U];
        __Vtemp18[1U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U];
        __Vtemp18[2U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[4U];
        VL_SUB_W(3, __Vtemp19, __Vtemp18, vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b);
        __Vtemp21[0U] = (IData)((((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U]))));
        __Vtemp21[1U] = (IData)(((((QData)((IData)(
                                                   vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U]))) 
                                 >> 0x20U));
        __Vtemp21[2U] = __Vtemp19[0U];
        __Vtemp21[3U] = __Vtemp19[1U];
        __Vtemp21[4U] = (1U & __Vtemp19[2U]);
        VL_ADD_W(5, __Vtemp22, __Vtemp16, __Vtemp21);
        if (VL_GTE_W(3, __Vtemp15, vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b)) {
            __Vtemp11[1U] = __Vtemp22[1U];
            __Vtemp11[2U] = __Vtemp22[2U];
            __Vtemp11[3U] = __Vtemp22[3U];
            __Vtemp11[4U] = (1U & __Vtemp22[4U]);
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U] 
                = __Vtemp22[0U];
        } else {
            __Vtemp11[1U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U];
            __Vtemp11[2U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U];
            __Vtemp11[3U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U];
            __Vtemp11[4U] = (1U & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[4U]);
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U] 
                = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U];
        }
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U] 
            = __Vtemp11[1U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U] 
            = __Vtemp11[2U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U] 
            = __Vtemp11[3U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[4U] 
            = __Vtemp11[4U];
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__541__PROF__id_ex__l44(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__541__PROF__id_ex__l44\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_type 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__546__PROF__id_ex__l49(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__546__PROF__id_ex__l49\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__547__PROF__pc__l28(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__547__PROF__pc__l28\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu_inst_addr = vlSelf->SocTop__DOT__rvcpu_inst_addr;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__550__PROF__id_ex__l50(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__550__PROF__id_ex__l50\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_offset 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__552__PROF__if_id__l36(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__552__PROF__if_id__l36\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__if_id_inst 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__553__PROF__arbitratem__l361(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__553__PROF__arbitratem__l361\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__arbitratem4__DOT__dwrite_ok 
        = vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_ok;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__568__PROF__d_cache_data_ram__l23(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__568__PROF__d_cache_data_ram__l23\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__569__PROF__d_cache_data_ram__l25(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__569__PROF__d_cache_data_ram__l25\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__570__PROF__d_cache_data_ram__l27(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__570__PROF__d_cache_data_ram__l27\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__571__PROF__d_cache_data_ram__l29(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__571__PROF__d_cache_data_ram__l29\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__572__PROF__d_cache_data_ram__l31(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__572__PROF__d_cache_data_ram__l31\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__573__PROF__d_cache_data_ram__l33(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__573__PROF__d_cache_data_ram__l33\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__574__PROF__d_cache_data_ram__l35(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__574__PROF__d_cache_data_ram__l35\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__575__PROF__d_cache_data_ram__l37(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__575__PROF__d_cache_data_ram__l37\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__576__PROF__d_cache_data_ram__l23(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__576__PROF__d_cache_data_ram__l23\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__577__PROF__d_cache_data_ram__l25(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__577__PROF__d_cache_data_ram__l25\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__578__PROF__d_cache_data_ram__l27(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__578__PROF__d_cache_data_ram__l27\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__579__PROF__d_cache_data_ram__l29(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__579__PROF__d_cache_data_ram__l29\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__580__PROF__d_cache_data_ram__l31(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__580__PROF__d_cache_data_ram__l31\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__581__PROF__d_cache_data_ram__l33(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__581__PROF__d_cache_data_ram__l33\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__582__PROF__d_cache_data_ram__l35(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__582__PROF__d_cache_data_ram__l35\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__583__PROF__d_cache_data_ram__l37(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__583__PROF__d_cache_data_ram__l37\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__584__PROF__d_cache__l495(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__584__PROF__d_cache__l495\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__585__PROF__d_cache__l502(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__585__PROF__d_cache__l502\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v64 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__586__PROF__d_cache__l508(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__586__PROF__d_cache__l508\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v65 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__587__PROF__d_cache__l494(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__587__PROF__d_cache__l494\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__588__PROF__d_cache__l499(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__588__PROF__d_cache__l499\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v64 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__589__PROF__d_cache__l505(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__589__PROF__d_cache__l505\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v65 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__592__PROF__d_cache__l464(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__592__PROF__d_cache__l464\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__593__PROF__d_cache__l471(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__593__PROF__d_cache__l471\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v64 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__594__PROF__d_cache__l475(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__594__PROF__d_cache__l475\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v65 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__595__PROF__d_cache__l479(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__595__PROF__d_cache__l479\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v66 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__596__PROF__d_cache__l463(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__596__PROF__d_cache__l463\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v0 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__597__PROF__d_cache__l469(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__597__PROF__d_cache__l469\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v64 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__598__PROF__d_cache__l473(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__598__PROF__d_cache__l473\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v65 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__599__PROF__d_cache__l478(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__599__PROF__d_cache__l478\n"); );
    // Body
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v66 = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__600__PROF__clint__l181(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__600__PROF__clint__l181\n"); );
    // Body
    vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp = 0U;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__601__PROF__axi_mnq__l158(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__601__PROF__axi_mnq__l158\n"); );
    // Body
    vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg 
        = ((IData)(vlSelf->rst) ? 0ULL : (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[4U]))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__602__PROF__axi_mnq__l158(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__602__PROF__axi_mnq__l158\n"); );
    // Body
    vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg 
        = ((IData)(vlSelf->rst) ? 0ULL : (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_w_data[4U]))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__603__PROF__ex_mem__l34(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__603__PROF__ex_mem__l34\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst 
        = ((IData)(vlSelf->rst) ? 0U : ((0xfU == (0xfU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst
                                         : ((IData)(vlSelf->rst)
                                             ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__604__PROF__mem_wb__l86(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__604__PROF__mem_wb__l86\n"); );
    // Body
    if ((0U != vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn = 1U;
    } else if ((0U == vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__605__PROF__mem_wb__l86(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__605__PROF__mem_wb__l86\n"); );
    // Body
    if ((0U != vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn 
            = (0x100073U == vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o);
    } else if ((0U == vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__606__PROF__io_slave_axi__l208(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__606__PROF__io_slave_axi__l208\n"); );
    // Body
    vlSelf->SocTop__DOT__io_slave_axi9__DOT__write_data_reg 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__aw_shankhand)
                                           ? (((QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->SocTop__DOT__add_axi_w_data[0U])))
                                           : 0ULL));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__607__PROF__io_slave_axi__l208(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__607__PROF__io_slave_axi__l208\n"); );
    // Body
    vlSelf->SocTop__DOT__io_slave_axi9__DOT__write_addr_reg 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__aw_shankhand)
                                           ? (((QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))
                                           : 0ULL));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__608__PROF__mem_wb__l86(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__608__PROF__mem_wb__l86\n"); );
    // Body
    if ((0U != vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code 
            = ((0x100073U == vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                : 0ULL);
    } else if ((0U == vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code = 0ULL;
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__609__PROF__clint__l181(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__609__PROF__clint__l181\n"); );
    // Body
    vlSelf->SocTop__DOT__clint6__DOT__time_reg_id = 
        ((IData)(vlSelf->rst) ? 0U : (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                              >> 4U)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__610__PROF__mem_wb__l77(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__610__PROF__mem_wb__l77\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1 
        = ((IData)(vlSelf->rst) ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o);
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__611__PROF__axi_mnq__l75(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__611__PROF__axi_mnq__l75\n"); );
    // Body
    vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__612__PROF__io_slave_axi__l125(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__612__PROF__io_slave_axi__l125\n"); );
    // Body
    vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state_nxt));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__613__PROF__mem_wb__l38(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__613__PROF__mem_wb__l38\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__wb_regfile_data 
        = ((IData)(vlSelf->rst) ? 0ULL : ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                                           ? ((IData)(
                                                      (0x1fU 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                               ? 0ULL
                                               : vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data)
                                           : vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__614__PROF__clint__l149(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__614__PROF__clint__l149\n"); );
    // Body
    vlSelf->SocTop__DOT__clint6__DOT__state_time_m 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_m_nxt));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__615__PROF__mem_wb__l38(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__615__PROF__mem_wb__l38\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_ena 
        = ((~ (IData)(vlSelf->rst)) & ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                                        ? ((~ (IData)(
                                                      (0x1fU 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))) 
                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                        : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__616__PROF__mem_wb__l38(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__616__PROF__mem_wb__l38\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_addr 
        = ((IData)(vlSelf->rst) ? 0U : ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                                         ? ((IData)(
                                                    (0x1fU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                             ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr))
                                         : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__617__PROF__i_cache_data_ram__l13(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__617__PROF__i_cache_data_ram__l13\n"); );
    // Body
    if (vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t) {
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0 
            = vlSelf->SocTop__DOT__i_cache2__DOT__miss_data;
        vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                >> 3U)));
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__618__PROF__i_cache_data_ram__l13(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__618__PROF__i_cache_data_ram__l13\n"); );
    // Body
    if (vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o) {
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0 
            = vlSelf->SocTop__DOT__i_cache2__DOT__miss_data;
        vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                >> 3U)));
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__619__PROF__i_cache_tag_ram__l15(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__619__PROF__i_cache_tag_ram__l15\n"); );
    // Body
    if (vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t) {
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0 
            = (vlSelf->SocTop__DOT__rvcpu_inst_addr 
               >> 9U);
        vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0 = 0U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                >> 3U)));
        vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v1 = 0x37U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                >> 3U)));
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__620__PROF__i_cache_tag_ram__l15(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__620__PROF__i_cache_tag_ram__l15\n"); );
    // Body
    if (vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o) {
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0 
            = (vlSelf->SocTop__DOT__rvcpu_inst_addr 
               >> 9U);
        vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0 = 0U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                >> 3U)));
        vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v1 = 0x37U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                >> 3U)));
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__621__PROF__ex_mem__l34(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__621__PROF__ex_mem__l34\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_ena 
        = ((~ (IData)(vlSelf->rst)) & ((0xfU == (0xfU 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                        ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena)
                                        : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__622__PROF__if_id__l33(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__622__PROF__if_id__l33\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__if_id_pc 
        = ((IData)(vlSelf->rst) ? 0ULL : ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush)) 
                                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp))
                                           ? 0ULL : 
                                          ((IData)(
                                                   (2U 
                                                    == 
                                                    (0x1eU 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                            ? 0ULL : 
                                           ((IData)(
                                                    (7U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                             ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc
                                             : vlSelf->SocTop__DOT__rvcpu_inst_addr))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__623__PROF__id_ex__l40(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__623__PROF__id_ex__l40\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)) 
                                       & ((7U == (7U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                           ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena)
                                           : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__624__PROF__regfile__l108(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__624__PROF__regfile__l108\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v0 = 1U;
    } else if (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena) 
                & (0U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr)))) {
        vlSelf->__Vdlyvval__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data;
        vlSelf->__Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32 = 1U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr;
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__625__PROF__ex_mem__l34(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__625__PROF__ex_mem__l34\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data 
        = ((IData)(vlSelf->rst) ? 0ULL : ((0xfU == 
                                           (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                           ? vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data
                                           : vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__626__PROF__i_cache_data_ram__l13(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__626__PROF__i_cache_data_ram__l13\n"); );
    // Body
    vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data 
        = vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram
        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                           >> 3U)))];
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__627__PROF__i_cache_data_ram__l13(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__627__PROF__i_cache_data_ram__l13\n"); );
    // Body
    vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data 
        = vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram
        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                           >> 3U)))];
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__628__PROF__axi_mnq__l158(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__628__PROF__axi_mnq__l158\n"); );
    // Body
    vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id 
        = ((IData)(vlSelf->rst) ? 0U : (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                >> 8U)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__629__PROF__csr__l224(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__629__PROF__csr__l224\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch 
        = ((IData)(vlSelf->rst) ? 0ULL : (((0x340U 
                                            == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))
                                           ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                           : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__630__PROF__csr__l145(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__630__PROF__csr__l145\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
        = ((IData)(vlSelf->rst) ? 0ULL : (0x3fffffffffffffffULL 
                                          & (((0x305U 
                                               == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))
                                              ? (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                 >> 2U)
                                              : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__631__PROF__csr__l58(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__631__PROF__csr__l58\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle 
        = ((IData)(vlSelf->rst) ? 0ULL : (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                           & (0xb00U 
                                              == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))
                                           ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                           : (1ULL 
                                              + vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__632__PROF__csr__l100(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__632__PROF__csr__l100\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena)
                                         ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt)
                                         : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__633__PROF__ex_mem__l34(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__633__PROF__ex_mem__l34\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_addr 
        = ((IData)(vlSelf->rst) ? 0U : ((0xfU == (0xfU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                         ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr)
                                         : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__634__PROF__csr__l76(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__634__PROF__csr__l76\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena) 
                                        & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                              >> 3U)))
                                        ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt)
                                        : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__635__PROF__csr__l110(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__635__PROF__csr__l110\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs 
        = ((IData)(vlSelf->rst) ? 0U : (3U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                               ? (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                          >> 0xdU))
                                               : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__636__PROF__axi_mnq__l123(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__636__PROF__axi_mnq__l123\n"); );
    // Body
    vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__637__PROF__io_slave_axi__l173(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__637__PROF__io_slave_axi__l173\n"); );
    // Body
    vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state_nxt));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__638__PROF__clint__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__638__PROF__clint__l212\n"); );
    // Body
    vlSelf->SocTop__DOT__clint6__DOT__state_time_r 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r_nxt));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__639__PROF__ex_mem__l34(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__639__PROF__ex_mem__l34\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel 
        = ((IData)(vlSelf->rst) ? 0U : ((0xfU == (0xfU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                         ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel)
                                         : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__640__PROF__ex_mem__l34(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__640__PROF__ex_mem__l34\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc 
        = ((IData)(vlSelf->rst) ? 0ULL : ((0xfU == 
                                           (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                           ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc
                                           : ((IData)(vlSelf->rst)
                                               ? 0ULL
                                               : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__641__PROF__csr__l178(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__641__PROF__csr__l178\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause 
        = ((IData)(vlSelf->rst) ? 0ULL : ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                           ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt
                                           : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__642__PROF__csr__l162(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__642__PROF__csr__l162\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc 
        = ((IData)(vlSelf->rst) ? 0ULL : (((((0x341U 
                                              == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                           ? (0xfffffffffffffffcULL 
                                              & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data)
                                           : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__643__PROF__id_ex__l40(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__643__PROF__id_ex__l40\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                           ? 0ULL : 
                                          ((7U == (7U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1
                                            : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__644__PROF__multiplier__l57(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__644__PROF__multiplier__l57\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp38;
    VlWide<4>/*127:0*/ __Vtemp41;
    // Body
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid) {
        if ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))) {
            __Vtemp41[0U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U];
            __Vtemp41[1U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U];
            __Vtemp41[2U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U];
            __Vtemp41[3U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U];
        } else {
            __Vtemp41[0U] = 0U;
            __Vtemp41[1U] = 0U;
            __Vtemp41[2U] = 0U;
            __Vtemp41[3U] = 0U;
        }
        VL_ADD_W(4, __Vtemp38, vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp, __Vtemp41);
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U] 
            = __Vtemp38[0U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U] 
            = __Vtemp38[1U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[2U] 
            = __Vtemp38[2U];
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[3U] 
            = __Vtemp38[3U];
    } else if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U] = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U] = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[2U] = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[3U] = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__645__PROF__multiplier__l38(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__645__PROF__multiplier__l38\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp46;
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] = 0U;
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] = 0U;
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U] = 0U;
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U] = 0U;
    } else if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid) {
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] 
            = (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] 
               << 1U);
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] 
            = ((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] 
                >> 0x1fU) | (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] 
                             << 1U));
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U] 
            = ((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] 
                >> 0x1fU) | (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U] 
                             << 1U));
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U] 
            = ((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U] 
                >> 0x1fU) | (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U] 
                             << 1U));
    } else if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready) {
        VL_EXTEND_WQ(128,64, __Vtemp46, ((1U & (IData)(
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        >> 0x3fU)))
                                          ? (1ULL + 
                                             (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1));
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] 
            = __Vtemp46[0U];
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] 
            = __Vtemp46[1U];
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U] 
            = __Vtemp46[2U];
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U] 
            = __Vtemp46[3U];
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__646__PROF__multiplier__l65(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__646__PROF__multiplier__l65\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit 
        = (1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid)
                  ? ((IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                              >> 0x3fU)) ^ (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                    >> 0x3fU)))
                  : ((IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                              >> 0x3fU)) ^ (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                    >> 0x3fU)))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__647__PROF__multiplier__l47(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__647__PROF__multiplier__l47\n"); );
    // Body
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler 
            = (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler 
               >> 1U);
    } else if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler 
            = ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                              >> 0x3fU))) ? (1ULL + 
                                             (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2);
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__648__PROF__id_ex__l40(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__648__PROF__id_ex__l40\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                         ? 0U : ((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                                  ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)
                                                  : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__649__PROF__csr__l206(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__649__PROF__csr__l206\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip 
        = ((~ (IData)(vlSelf->rst)) & (vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l 
                                       > vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__650__PROF__id_ex__l40(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__650__PROF__id_ex__l40\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_pc 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                           ? 0ULL : 
                                          ((7U == (7U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc
                                            : ((IData)(vlSelf->rst)
                                                ? 0ULL
                                                : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__651__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__651__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ok = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ok = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__652__PROF__arbitratem__l296(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__652__PROF__arbitratem__l296\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitrate_i_data = vlSelf->SocTop__DOT__t_axi_r_data;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitrate_i_data = 0ULL;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__653__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__653__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        if (vlSelf->SocTop__DOT__arbitratem4__DOT__read_dcache_shankhand) {
            vlSelf->SocTop__DOT__arbitrate_d_data = vlSelf->SocTop__DOT__t_axi_r_data;
        }
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitrate_d_data = 0ULL;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__654__PROF__csr__l190(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__654__PROF__csr__l190\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie 
        = (1U & ((~ (IData)(vlSelf->rst)) & (((0x304U 
                                               == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))
                                              ? (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                         >> 7U))
                                              : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__655__PROF__csr__l88(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__655__PROF__csr__l88\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena) 
                                        & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                              >> 3U)))
                                        ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mie_nxt)
                                        : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__656__PROF__arbitratem__l296(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__656__PROF__arbitratem__l296\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_addr = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_addr 
                = vlSelf->SocTop__DOT__i_cache_addr;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__657__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__657__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_addr = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_addr 
                = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_dcache_shankhand)
                    ? vlSelf->SocTop__DOT__d_cache_out_addr
                    : (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__uncache_arb_addr));
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__658__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__658__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_dcache_shankhand)))) {
            vlSelf->SocTop__DOT__uncache_arb_data_o 
                = vlSelf->SocTop__DOT__t_axi_r_data;
        }
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__uncache_arb_data_o = 0ULL;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__659__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__659__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_id = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_id = 1U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__660__PROF__arbitratem__l296(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__660__PROF__arbitratem__l296\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_id = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_id = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__661__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__661__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__662__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__662__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_prot = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_prot = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__663__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__663__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_cache = 2U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_cache = 2U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__664__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__664__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_qos = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_qos = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__665__PROF__arbitratem__l296(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__665__PROF__arbitratem__l296\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_cache = 2U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_cache = 2U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__666__PROF__arbitratem__l296(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__666__PROF__arbitratem__l296\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_prot = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_prot = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__667__PROF__arbitratem__l296(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__667__PROF__arbitratem__l296\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_qos = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_qos = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__668__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__668__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_len = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_len = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__669__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__669__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_size = 3U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_size = 3U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__670__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__670__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_burst = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_burst = 1U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__671__PROF__arbitratem__l296(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__671__PROF__arbitratem__l296\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_size = 3U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_size = 3U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__672__PROF__arbitratem__l296(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__672__PROF__arbitratem__l296\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_len = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_len = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__673__PROF__arbitratem__l296(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__673__PROF__arbitratem__l296\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_burst = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_burst = 1U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__674__PROF__arbitratem__l212(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__674__PROF__arbitratem__l212\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid = 0U;
    } else if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid = 0U;
    } else if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid = 1U;
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__675__PROF__arbitratem__l296(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__675__PROF__arbitratem__l296\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid = 0U;
    } else if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid = 0U;
    } else if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid = 1U;
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__676__PROF__i_cache__l99(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__676__PROF__i_cache__l99\n"); );
    // Body
    vlSelf->SocTop__DOT__i_cache2__DOT__read_ok = (0x20U 
                                                   == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__677__PROF__arbitratem__l296(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__677__PROF__arbitratem__l296\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid = 0U;
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__678__PROF__i_cache__l235(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__678__PROF__i_cache__l235\n"); );
    // Body
    if ((((4U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
          & ((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data 
              == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                  >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild))) 
         | (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t))) {
        vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter2__v0 = 1U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__i_counter2__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                >> 3U)));
    }
    if (((IData)(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand) 
         & (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))) {
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v1 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [0U])));
        vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter2__v1 = 1U;
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v2 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [1U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [1U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v3 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [2U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [2U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v4 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [3U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [3U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v5 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [4U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [4U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v6 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [5U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [5U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v7 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [6U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [6U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v8 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [7U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [7U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v9 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [8U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [8U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v10 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [9U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [9U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v11 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0xaU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                      [0xaU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v12 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0xbU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                      [0xbU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v13 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0xcU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                      [0xcU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v14 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0xdU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                      [0xdU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v15 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0xeU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                      [0xeU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v16 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0xfU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                      [0xfU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v17 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x10U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v18 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x11U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v19 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x12U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v20 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x13U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v21 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x14U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v22 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x15U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v23 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x16U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v24 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x17U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v25 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x18U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v26 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x19U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v27 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x1aU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v28 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x1bU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v29 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x1cU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v30 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x1dU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v31 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x1eU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v32 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x1fU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v33 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x20U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v34 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x21U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v35 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x22U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v36 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x23U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v37 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x24U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v38 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x25U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v39 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x26U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v40 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x27U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v41 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x28U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v42 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x29U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v43 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x2aU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v44 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x2bU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v45 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x2cU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v46 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x2dU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v47 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x2eU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v48 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x2fU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v49 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x30U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v50 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x31U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v51 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x32U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v52 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x33U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v53 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x34U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v54 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x35U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v55 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x36U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v56 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x37U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v57 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x38U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v58 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x39U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v59 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x3aU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v60 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x3bU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v61 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x3cU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v62 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x3dU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v63 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x3eU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v64 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x3fU])));
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__679__PROF__i_cache__l235(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__679__PROF__i_cache__l235\n"); );
    // Body
    if ((((4U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
          & ((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data 
              == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                  >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild))) 
         | (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o))) {
        vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter1__v0 = 1U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__i_counter1__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                >> 3U)));
    }
    if (((IData)(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand) 
         & (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))) {
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v1 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [0U])));
        vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter1__v1 = 1U;
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v2 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [1U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [1U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v3 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [2U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [2U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v4 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [3U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [3U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v5 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [4U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [4U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v6 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [5U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [5U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v7 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [6U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [6U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v8 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [7U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [7U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v9 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [8U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [8U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v10 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [9U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [9U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v11 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0xaU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                      [0xaU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v12 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0xbU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                      [0xbU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v13 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0xcU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                      [0xcU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v14 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0xdU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                      [0xdU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v15 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0xeU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                      [0xeU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v16 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0xfU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                      [0xfU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v17 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x10U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v18 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x11U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v19 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x12U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v20 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x13U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v21 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x14U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v22 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x15U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v23 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x16U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v24 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x17U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v25 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x18U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v26 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x19U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v27 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x1aU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v28 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x1bU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v29 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x1cU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v30 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x1dU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v31 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x1eU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v32 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x1fU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v33 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x20U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v34 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x21U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v35 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x22U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v36 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x23U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v37 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x24U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v38 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x25U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v39 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x26U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v40 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x27U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v41 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x28U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v42 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x29U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v43 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x2aU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v44 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x2bU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v45 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x2cU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v46 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x2dU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v47 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x2eU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v48 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x2fU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v49 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x30U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v50 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x31U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v51 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x32U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v52 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x33U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v53 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x34U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v54 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x35U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v55 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x36U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v56 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x37U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v57 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x38U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v58 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x39U])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v59 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x3aU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v60 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x3bU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v61 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x3cU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v62 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x3dU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v63 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x3eU])));
        vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v64 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x3fU])));
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__680__PROF__d_cache__l401(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__680__PROF__d_cache__l401\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache3__DOT__write_regw_ 
        = ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regw) 
           | ((~ ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regw_) 
                  & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) 
              & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regw_)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__681__PROF__d_cache__l200(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__681__PROF__d_cache__l200\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache3__DOT__write_regr_ 
        = ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regr) 
           | ((~ ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regr_) 
                  & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) 
              & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__write_regr_)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__682__PROF__d_cache_tag_ram__l23(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__682__PROF__d_cache_tag_ram__l23\n"); );
    // Body
    if (vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0 
            = (vlSelf->SocTop__DOT__uncache_dc_addr 
               >> 9U);
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0 = 0U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v1 = 0x37U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__683__PROF__d_cache_tag_ram__l23(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__683__PROF__d_cache_tag_ram__l23\n"); );
    // Body
    if (vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0 
            = (vlSelf->SocTop__DOT__uncache_dc_addr 
               >> 9U);
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0 = 0U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v1 = 0x37U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__684__PROF__d_cache_data_ram__l21(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__684__PROF__d_cache_data_ram__l21\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data 
        = vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram
        [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                           >> 3U)))];
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__685__PROF__d_cache_data_ram__l21(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__685__PROF__d_cache_data_ram__l21\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data 
        = vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram
        [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                           >> 3U)))];
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__686__PROF__id_ex__l40(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__686__PROF__id_ex__l40\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_type 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                         ? 0U : ((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                                  ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type)
                                                  : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__687__PROF__id_ex__l40(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__687__PROF__id_ex__l40\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                         ? 0U : ((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                                  ? vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst
                                                  : 
                                                 ((IData)(vlSelf->rst)
                                                   ? 0U
                                                   : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__688__PROF__id_ex__l40(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__688__PROF__id_ex__l40\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel = 
        ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                       ? 0U : (7U & 
                                               ((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                                 ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel)
                                                 : 
                                                ((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : 
                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                  >> 0xcU))))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__689__PROF__id_ex__l40(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__689__PROF__id_ex__l40\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                         ? 0U : (0x1fU 
                                                 & ((7U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                                     ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)
                                                     : 
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena)
                                                      ? 
                                                     ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
                                                       ? 0xbU
                                                       : 
                                                      (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                       >> 7U))
                                                      : 0U)))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__690__PROF__pc__l26(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__690__PROF__pc__l26\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu_inst_addr = 
        ((IData)(vlSelf->rst) ? 0x80000000ULL : ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                                                  ? vlSelf->SocTop__DOT__rvcpu_inst_addr
                                                  : 
                                                 (((0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
                                                   & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__ex_pc_change) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)))
                                                   ? vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_ex
                                                   : 
                                                  (((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
                                                    & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__id_pc_change) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena)))
                                                    ? vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_id
                                                    : 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0ULL
                                                     : 
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                      ? 
                                                     (0xfffffffffffffffeULL 
                                                      & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__691__PROF__d_cache__l316(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__691__PROF__d_cache__l316\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok = 
        (2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__692__PROF__d_cache__l119(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__692__PROF__d_cache__l119\n"); );
    // Body
    vlSelf->SocTop__DOT__d_cache3__DOT__read_ok = (2U 
                                                   == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__693__PROF__id_ex__l40(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__693__PROF__id_ex__l40\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_offset 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                         ? 0U : (0xfffU 
                                                 & ((7U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                                     ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                                                      ? 
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                      >> 0x14U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                                                       ? 
                                                      ((0xfe0U 
                                                        & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                             >> 7U)))
                                                       : 0U))))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__694__PROF__id_ex__l40(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__694__PROF__id_ex__l40\n"); );
    // Variables
    QData/*63:0*/ __Vtemp55;
    // Body
    __Vtemp55 = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                                 ? 0ULL
                                                 : 
                                                ((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                                  ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2
                                                  : 
                                                 ((IData)(vlSelf->rst)
                                                   ? 0ULL
                                                   : 
                                                  ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2)
                                                    ? 
                                                   ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))
                                                     ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data
                                                     : 
                                                    ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))
                                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data
                                                      : 
                                                     (((~ (IData)(vlSelf->rst)) 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                                       ? 
                                                      ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                         == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                                        : 
                                                       vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                       [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                                       : 0ULL)))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0xb0U 
                                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                        >> 0x14U))))
                                                     : 
                                                    (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                           >> 0x1fU)))) 
                                                       << 0x14U) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                         >> 0xcU))))
                                                      : 
                                                     ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump)
                                                       ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc
                                                       : 0ULL))))))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 = __Vtemp55;
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__695__PROF__if_id__l33(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__695__PROF__if_id__l33\n"); );
    // Body
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__if_id_inst 
        = ((IData)(vlSelf->rst) ? 0U : ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush)) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp))
                                         ? 0U : ((IData)(
                                                         (2U 
                                                          == 
                                                          (0x1eU 
                                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(
                                                          (7U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                                   ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst
                                                   : vlSelf->SocTop__DOT__i_cache_inst_data))));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__696__PROF__arbitratem__l356(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__696__PROF__arbitratem__l356\n"); );
    // Body
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid = 0U;
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid = 0U;
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid = 1U;
        vlSelf->__Vdly__SocTop__DOT__arbitratem4__DOT__dwrite_ok = 1U;
    } else if (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_ok) {
        vlSelf->__Vdly__SocTop__DOT__arbitratem4__DOT__dwrite_ok = 0U;
    } else if (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid = 0U;
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid = 0U;
    } else if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
        if (vlSelf->SocTop__DOT__arbitratem4__DOT__write_dcache_shankhand) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id = 1U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr 
                = vlSelf->SocTop__DOT__d_cache_out_addr;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len = 0U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size = 3U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst = 1U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache = 2U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port = 0U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos = 0U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid = 1U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data 
                = ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                    ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                    : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                        ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                        : 0ULL));
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb = 0xffU;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last = 1U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid 
                = (1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                             ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp)
                             : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp)))));
        } else {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id = 1U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr 
                = (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__uncache_arb_addr);
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len = 0U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size = 3U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst = 1U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache = 2U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port = 0U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos = 0U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid = 1U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data 
                = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                    ? (vlSelf->SocTop__DOT__rvcpu_data_o 
                       & (((QData)((IData)((((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                            >> 7U)))) 
                                             << 0x18U) 
                                            | ((0xff0000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                  >> 6U)))) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                     >> 5U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                      >> 4U)))))))))) 
                           << 0x20U) | (QData)((IData)(
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                        >> 3U)))) 
                                                         << 0x18U) 
                                                        | ((0xff0000U 
                                                            & ((- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                              >> 2U)))) 
                                                               << 0x10U)) 
                                                           | ((0xff00U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                                >> 1U)))) 
                                                                  << 8U)) 
                                                              | (0xffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(vlSelf->SocTop__DOT__rvcpu_wmask))))))))))))
                    : 0ULL);
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb = 0xffU;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last = 1U;
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid = 1U;
        }
    } else {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid = 0U;
        vlSelf->__Vdly__SocTop__DOT__arbitratem4__DOT__dwrite_ok = 0U;
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__697__PROF__d_cache_data_ram__l21(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__697__PROF__d_cache_data_ram__l21\n"); );
    // Body
    if ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0 = 0U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((2U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 8U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1 = 8U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((4U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2 = 0x10U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((8U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3 = 0x18U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x10U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4 = 0x20U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x20U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5 = 0x28U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x40U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6 = 0x30U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7 = 0x38U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__698__PROF__d_cache_data_ram__l21(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__698__PROF__d_cache_data_ram__l21\n"); );
    // Body
    if ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0 = 0U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((2U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 8U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1 = 8U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((4U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2 = 0x10U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((8U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3 = 0x18U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x10U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4 = 0x20U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x20U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5 = 0x28U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x40U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6 = 0x30U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7 = 1U;
        vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7 = 0x38U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__699__PROF__d_cache__l491(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__699__PROF__d_cache__l491\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v0 = 1U;
    } else if ((1U & (~ ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                         & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                            == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 9U)))))) {
        if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
             & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                == (vlSelf->SocTop__DOT__uncache_dc_addr 
                    >> 9U)))) {
            vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v64 = 1U;
            vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty2__v64 
                = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                    >> 3U)));
        } else if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_o) 
                             | (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_o))))) {
            if (((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_t) 
                 | (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_t))) {
                vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v65 = 1U;
                vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty2__v65 
                    = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)));
            }
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__700__PROF__d_cache__l491(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__700__PROF__d_cache__l491\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v0 = 1U;
    } else if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                   == (vlSelf->SocTop__DOT__uncache_dc_addr 
                       >> 9U)))) {
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v64 = 1U;
        vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty1__v64 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    } else if ((1U & (~ ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                         & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                            == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 9U)))))) {
        if (((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_o) 
             | (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_o))) {
            vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v65 = 1U;
            vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty1__v65 
                = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                    >> 3U)));
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__701__PROF__ex_mem__l34(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__701__PROF__ex_mem__l34\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
        = ((IData)(vlSelf->rst) ? 0ULL : ((0xfU == 
                                           (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                           ? vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr
                                           : ((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))))
                                               ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                  + 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset) 
                                                                           >> 0xbU))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset))))
                                               : 0ULL)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__702__PROF__ex_mem__l34(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__702__PROF__ex_mem__l34\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type 
        = ((IData)(vlSelf->rst) ? 0U : ((0xfU == (0xfU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                         ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type)
                                         : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__703__PROF__d_cache__l460(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__703__PROF__d_cache__l460\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v0 = 1U;
    } else {
        if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
             & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                == (vlSelf->SocTop__DOT__uncache_dc_addr 
                    >> 9U)))) {
            vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v64 = 1U;
            vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter2__v64 
                = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                    >> 3U)));
        }
        if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
             & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                == (vlSelf->SocTop__DOT__uncache_dc_addr 
                    >> 9U)))) {
            vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v65 = 1U;
            vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter2__v65 
                = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                    >> 3U)));
        }
        if ((((IData)(vlSelf->SocTop__DOT__uncache_dc_re) 
              & (IData)(vlSelf->SocTop__DOT__uncache_dc_we)) 
             & (IData)(vlSelf->SocTop__DOT__uncache_dc_finish))) {
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v66 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [0U])));
            vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v66 = 1U;
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v67 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [1U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [1U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v68 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [2U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [2U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v69 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [3U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [3U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v70 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [4U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [4U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v71 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [5U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [5U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v72 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [6U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [6U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v73 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [7U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [7U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v74 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [8U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [8U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v75 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [9U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [9U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v76 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0xaU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                          [0xaU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v77 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0xbU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                          [0xbU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v78 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0xcU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                          [0xcU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v79 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0xdU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                          [0xdU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v80 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0xeU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                          [0xeU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v81 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0xfU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                          [0xfU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v82 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x10U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v83 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x11U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v84 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x12U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v85 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x13U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v86 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x14U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v87 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x15U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v88 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x16U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v89 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x17U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v90 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x18U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v91 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x19U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v92 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x1aU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v93 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x1bU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v94 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x1cU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v95 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x1dU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v96 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x1eU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v97 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x1fU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v98 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x20U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v99 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x21U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v100 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x22U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v101 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x23U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v102 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x24U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v103 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x25U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v104 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x26U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v105 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x27U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v106 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x28U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v107 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x29U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v108 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x2aU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v109 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x2bU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v110 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x2cU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v111 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x2dU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v112 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x2eU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v113 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x2fU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v114 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x30U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v115 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x31U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v116 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x32U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v117 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x33U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v118 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x34U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v119 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x35U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v120 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x36U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v121 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x37U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v122 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x38U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v123 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x39U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v124 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x3aU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v125 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x3bU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v126 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x3cU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v127 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x3dU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v128 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x3eU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v129 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x3fU])));
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__704__PROF__d_cache__l460(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__704__PROF__d_cache__l460\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v0 = 1U;
    } else {
        if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
             & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                == (vlSelf->SocTop__DOT__uncache_dc_addr 
                    >> 9U)))) {
            vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v64 = 1U;
            vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter1__v64 
                = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                    >> 3U)));
        }
        if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
             & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                == (vlSelf->SocTop__DOT__uncache_dc_addr 
                    >> 9U)))) {
            vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v65 = 1U;
            vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter1__v65 
                = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                    >> 3U)));
        }
        if ((((IData)(vlSelf->SocTop__DOT__uncache_dc_re) 
              & (IData)(vlSelf->SocTop__DOT__uncache_dc_we)) 
             & (IData)(vlSelf->SocTop__DOT__uncache_dc_finish))) {
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v66 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                        [0U])));
            vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v66 = 1U;
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v67 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [1U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                        [1U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v68 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [2U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                        [2U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v69 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [3U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                        [3U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v70 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [4U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                        [4U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v71 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [5U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                        [5U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v72 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [6U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                        [6U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v73 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [7U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                        [7U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v74 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [8U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                        [8U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v75 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [9U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                        [9U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v76 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0xaU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                          [0xaU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v77 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0xbU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                          [0xbU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v78 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0xcU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                          [0xcU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v79 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0xdU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                          [0xdU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v80 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0xeU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                          [0xeU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v81 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0xfU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                          [0xfU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v82 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x10U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v83 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x11U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v84 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x12U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v85 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x13U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v86 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x14U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v87 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x15U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v88 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x16U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v89 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x17U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v90 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x18U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v91 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x19U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v92 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x1aU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v93 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x1bU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v94 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x1cU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v95 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x1dU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v96 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x1eU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v97 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x1fU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v98 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x20U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v99 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x21U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v100 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x22U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v101 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x23U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v102 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x24U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v103 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x25U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v104 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x26U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v105 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x27U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v106 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x28U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v107 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x29U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v108 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x2aU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v109 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x2bU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v110 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x2cU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v111 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x2dU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v112 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x2eU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v113 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x2fU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v114 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x30U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v115 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x31U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v116 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x32U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v117 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x33U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v118 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x34U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v119 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x35U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v120 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x36U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v121 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x37U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v122 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x38U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v123 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x39U])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v124 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x3aU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v125 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x3bU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v126 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x3cU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v127 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x3dU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v128 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x3eU])));
            vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v129 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                    [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter1
                                           [0x3fU])));
        }
    }
}
