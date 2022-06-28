// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSocTop.h for the primary calling header

#include "VSocTop___024root.h"
#include "VSocTop__Syms.h"

#include "verilated_dpi.h"

//==========

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

VL_INLINE_OPT void VSocTop___024root___combo__TOP__2(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->out_axi_b_ready = (3U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state));
    vlSelf->out_axi_r_ready = (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state));
    vlSelf->SocTop__DOT__arbitrate4__DOT__r_shankhand 
        = ((IData)(vlSelf->out_axi_r_valid) & (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state)));
    vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand 
        = (((IData)(vlSelf->out_axi_b_valid) & (3U 
                                                == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state))) 
           & (0U == (IData)(vlSelf->out_axi_b_id)));
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__3(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32;
    QData/*63:0*/ __Vdly__SocTop__DOT__rvcpu1__DOT__wb_regfile_data;
    QData/*63:0*/ __Vdlyvval__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32;
    // Body
    __Vdly__SocTop__DOT__rvcpu1__DOT__wb_regfile_data 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data;
    __Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v0 = 0U;
    __Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32 = 0U;
    vlSelf->__Vdly__SocTop__DOT__rvcpu_inst_addr = vlSelf->SocTop__DOT__rvcpu_inst_addr;
    if ((1U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffffffffffffff00ULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | (IData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__in_data1)))));
    }
    if ((2U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffffffffffff00ffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data1 
                                                                             >> 8U))))) 
                                                 << 8U));
    }
    if ((4U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffffffffff00ffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data1 
                                                                             >> 0x10U))))) 
                                                 << 0x10U));
    }
    if ((8U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffffffff00ffffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data1 
                                                                             >> 0x18U))))) 
                                                 << 0x18U));
    }
    if ((0x10U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffffff00ffffffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data1 
                                                                             >> 0x20U))))) 
                                                 << 0x20U));
    }
    if ((0x20U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffff00ffffffffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data1 
                                                                             >> 0x28U))))) 
                                                 << 0x28U));
    }
    if ((0x40U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xff00ffffffffffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data1 
                                                                             >> 0x30U))))) 
                                                 << 0x30U));
    }
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffffffffffffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data1 
                                                                             >> 0x38U))))) 
                                                 << 0x38U));
    }
    vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data 
        = vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram
        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                           >> 3U)))];
    if ((1U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffffffffffffff00ULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | (IData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__in_data2)))));
    }
    if ((2U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffffffffffff00ffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data2 
                                                                             >> 8U))))) 
                                                 << 8U));
    }
    if ((4U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffffffffff00ffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data2 
                                                                             >> 0x10U))))) 
                                                 << 0x10U));
    }
    if ((8U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffffffff00ffffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data2 
                                                                             >> 0x18U))))) 
                                                 << 0x18U));
    }
    if ((0x10U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffffff00ffffffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data2 
                                                                             >> 0x20U))))) 
                                                 << 0x20U));
    }
    if ((0x20U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffff00ffffffffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data2 
                                                                             >> 0x28U))))) 
                                                 << 0x28U));
    }
    if ((0x40U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xff00ffffffffffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data2 
                                                                             >> 0x30U))))) 
                                                 << 0x30U));
    }
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                                           >> 3U)))] 
            = ((0xffffffffffffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                                   >> 3U)))]) | ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SocTop__DOT__d_cache13__DOT__in_data2 
                                                                             >> 0x38U))))) 
                                                 << 0x38U));
    }
    vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data 
        = vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram
        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_o 
                           >> 3U)))];
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i = 0x20U;
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__i_cache12__DOT__i = 0x40U;
    }
    vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data 
        = vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__ram
        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                           >> 3U)))];
    if (vlSelf->SocTop__DOT__i_cache12__DOT__i_data_ena2) {
        vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__ram[(0x3fU 
                                                                 & (IData)(
                                                                           (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                                            >> 3U)))] 
            = vlSelf->SocTop__DOT__i_cache12__DOT__i_in_data2;
    }
    vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data 
        = vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__ram
        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                           >> 3U)))];
    if (((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2) 
         & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok))) {
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[(0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                                    >> 3U)))] = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                    [0U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[1U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [1U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                    [1U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[2U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [2U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                    [2U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[3U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [3U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                    [3U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[4U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [4U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                    [4U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[5U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [5U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                    [5U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[6U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [6U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                    [6U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[7U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [7U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                    [7U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[8U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [8U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                    [8U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[9U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [9U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                    [9U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0xaU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0xaU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                      [0xaU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0xbU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0xbU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                      [0xbU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0xcU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0xcU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                      [0xcU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0xdU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0xdU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                      [0xdU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0xeU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0xeU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                      [0xeU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0xfU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0xfU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                      [0xfU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x10U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x10U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x11U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x11U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x12U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x12U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x13U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x13U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x14U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x14U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x15U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x15U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x16U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x16U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x17U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x17U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x18U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x18U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x19U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x19U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x1aU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x1aU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x1bU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x1bU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x1cU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x1cU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x1dU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x1dU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x1eU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x1eU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x1fU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x1fU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x20U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x20U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x21U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x21U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x22U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x22U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x23U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x23U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x24U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x24U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x25U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x25U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x26U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x26U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x27U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x27U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x28U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x28U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x29U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x29U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x2aU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x2aU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x2bU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x2bU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x2cU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x2cU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x2dU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x2dU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x2eU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x2eU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x2fU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x2fU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x30U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x30U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x31U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x31U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x32U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x32U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x33U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x33U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x34U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x34U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x35U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x35U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x36U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x36U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x37U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x37U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x38U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x38U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x39U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x39U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x3aU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x3aU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x3bU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x3bU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x3cU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x3cU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x3dU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x3dU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x3eU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x3eU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[0x3fU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                       [0x3fU])));
    }
    if (((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1) 
         & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok))) {
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[(0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                                    >> 3U)))] = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                    [0U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[1U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [1U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                    [1U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[2U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [2U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                    [2U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[3U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [3U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                    [3U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[4U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [4U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                    [4U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[5U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [5U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                    [5U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[6U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [6U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                    [6U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[7U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [7U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                    [7U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[8U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [8U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                    [8U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[9U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [9U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                    [9U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0xaU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0xaU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                      [0xaU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0xbU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0xbU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                      [0xbU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0xcU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0xcU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                      [0xcU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0xdU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0xdU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                      [0xdU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0xeU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0xeU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                      [0xeU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0xfU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0xfU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                      [0xfU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x10U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x10U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x11U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x11U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x12U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x12U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x13U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x13U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x14U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x14U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x15U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x15U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x16U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x16U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x17U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x17U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x18U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x18U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x19U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x19U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x1aU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x1aU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x1bU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x1bU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x1cU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x1cU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x1dU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x1dU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x1eU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x1eU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x1fU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x1fU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x20U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x20U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x21U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x21U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x22U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x22U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x23U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x23U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x24U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x24U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x25U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x25U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x26U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x26U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x27U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x27U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x28U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x28U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x29U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x29U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x2aU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x2aU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x2bU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x2bU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x2cU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x2cU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x2dU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x2dU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x2eU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x2eU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x2fU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x2fU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x30U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x30U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x31U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x31U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x32U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x32U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x33U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x33U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x34U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x34U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x35U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x35U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x36U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x36U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x37U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x37U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x38U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x38U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x39U] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x39U])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x3aU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x3aU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x3bU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x3bU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x3cU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x3cU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x3dU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x3dU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x3eU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x3eU])));
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[0x3fU] 
            = ((7U == vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                       [0x3fU])));
    }
    if (vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena2) {
        vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                                           >> 3U)))] 
            = ((0x80000000000000ULL & vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                   >> 3U)))]) | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                 >> 9U));
        vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                                           >> 3U)))] 
            = (0x80000000000000ULL | vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram
               [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                  >> 3U)))]);
    } else {
        vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data 
            = (0x7fffffffffffffULL & vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram
               [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                  >> 3U)))]);
        vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild 
            = (1U & (IData)((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                >> 3U)))] 
                             >> 0x37U)));
    }
    if (vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena1) {
        vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                                           >> 3U)))] 
            = ((0x80000000000000ULL & vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                   >> 3U)))]) | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                 >> 9U));
        vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram[(0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                                           >> 3U)))] 
            = (0x80000000000000ULL | vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram
               [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                  >> 3U)))]);
    } else {
        vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data 
            = (0x7fffffffffffffULL & vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram
               [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                  >> 3U)))]);
        vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild 
            = (1U & (IData)((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                >> 3U)))] 
                             >> 0x37U)));
    }
    if (((IData)(vlSelf->SocTop__DOT__rvcpu_re) & (IData)(vlSelf->SocTop__DOT__rvcpu_we))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__i = 0x40U;
    }
    if (vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena2) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__ram[(0x3fU 
                                                               & (IData)(
                                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                                          >> 3U)))] 
            = ((0x80000000000000ULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                   >> 3U)))]) | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                 >> 9U));
        vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__ram[(0x3fU 
                                                               & (IData)(
                                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                                          >> 3U)))] 
            = (0x80000000000000ULL | vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__ram
               [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                  >> 3U)))]);
    } else {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
            = (0x7fffffffffffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__ram
               [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                  >> 3U)))]);
        vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild 
            = (1U & (IData)((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__ram
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             >> 0x37U)));
    }
    if (vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena1) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__ram[(0x3fU 
                                                               & (IData)(
                                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                                          >> 3U)))] 
            = ((0x80000000000000ULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__ram
                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                   >> 3U)))]) | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                 >> 9U));
        vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__ram[(0x3fU 
                                                               & (IData)(
                                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                                          >> 3U)))] 
            = (0x80000000000000ULL | vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__ram
               [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                  >> 3U)))]);
    } else {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
            = (0x7fffffffffffffULL & vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__ram
               [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                  >> 3U)))]);
        vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild 
            = (1U & (IData)((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__ram
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             >> 0x37U)));
    }
    if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
         & (vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
            == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                >> 9U)))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[(0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                                  >> 3U)))] 
            = vlSelf->SocTop__DOT__d_cache13__DOT__count_hit1;
    }
    if (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache) 
         & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[(0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                                  >> 3U)))] 
            = vlSelf->SocTop__DOT__d_cache13__DOT__count_write1;
    }
    if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
         & (vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
            == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                >> 9U)))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[(0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                                  >> 3U)))] 
            = vlSelf->SocTop__DOT__d_cache13__DOT__load_hit_count1;
    }
    if (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache) 
         & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[(0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                                  >> 3U)))] 
            = vlSelf->SocTop__DOT__d_cache13__DOT__load_write_count1;
    }
    if (((IData)(vlSelf->SocTop__DOT__rvcpu_re) & (IData)(vlSelf->SocTop__DOT__rvcpu_we))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [0U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[1U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [1U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [1U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[2U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [2U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [2U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[3U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [3U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [3U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[4U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [4U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [4U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[5U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [5U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [5U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[6U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [6U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [6U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[7U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [7U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [7U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[8U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [8U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [8U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[9U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [9U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [9U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0xaU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0xaU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                      [0xaU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0xbU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0xbU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                      [0xbU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0xcU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0xcU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                      [0xcU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0xdU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0xdU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                      [0xdU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0xeU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0xeU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                      [0xeU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0xfU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0xfU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                      [0xfU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x10U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x10U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x11U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x11U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x12U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x12U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x13U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x13U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x14U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x14U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x15U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x15U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x16U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x16U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x17U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x17U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x18U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x18U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x19U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x19U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x1aU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x1aU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x1bU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x1bU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x1cU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x1cU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x1dU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x1dU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x1eU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x1eU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x1fU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x1fU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x20U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x20U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x21U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x21U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x22U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x22U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x23U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x23U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x24U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x24U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x25U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x25U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x26U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x26U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x27U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x27U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x28U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x28U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x29U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x29U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x2aU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x2aU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x2bU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x2bU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x2cU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x2cU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x2dU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x2dU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x2eU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x2eU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x2fU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x2fU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x30U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x30U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x31U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x31U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x32U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x32U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x33U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x33U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x34U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x34U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x35U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x35U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x36U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x36U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x37U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x37U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x38U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x38U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x39U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x39U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x3aU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x3aU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x3bU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x3bU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x3cU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x3cU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x3dU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x3dU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x3eU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x3eU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[0x3fU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                       [0x3fU])));
    }
    if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
         & (vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
            == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                >> 9U)))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[(0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                                  >> 3U)))] 
            = vlSelf->SocTop__DOT__d_cache13__DOT__count_hit2;
    }
    if (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache) 
         & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[(0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                                  >> 3U)))] 
            = vlSelf->SocTop__DOT__d_cache13__DOT__count_write2;
    }
    if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
         & (vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
            == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                >> 9U)))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[(0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                                  >> 3U)))] 
            = vlSelf->SocTop__DOT__d_cache13__DOT__load_hit_count2;
    }
    if (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache) 
         & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[(0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                                  >> 3U)))] 
            = vlSelf->SocTop__DOT__d_cache13__DOT__load_write_count2;
    }
    if (((IData)(vlSelf->SocTop__DOT__rvcpu_re) & (IData)(vlSelf->SocTop__DOT__rvcpu_we))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [0U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[1U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [1U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [1U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[2U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [2U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [2U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[3U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [3U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [3U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[4U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [4U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [4U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[5U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [5U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [5U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[6U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [6U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [6U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[7U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [7U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [7U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[8U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [8U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [8U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[9U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [9U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [9U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0xaU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0xaU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                      [0xaU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0xbU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0xbU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                      [0xbU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0xcU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0xcU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                      [0xcU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0xdU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0xdU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                      [0xdU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0xeU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0xeU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                      [0xeU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0xfU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0xfU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                      [0xfU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x10U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x10U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x11U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x11U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x12U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x12U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x13U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x13U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x14U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x14U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x15U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x15U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x16U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x16U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x17U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x17U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x18U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x18U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x19U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x19U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x1aU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x1aU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x1bU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x1bU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x1cU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x1cU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x1dU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x1dU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x1eU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x1eU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x1fU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x1fU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x20U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x20U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x21U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x21U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x22U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x22U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x23U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x23U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x24U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x24U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x25U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x25U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x26U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x26U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x27U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x27U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x28U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x28U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x29U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x29U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x2aU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x2aU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x2bU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x2bU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x2cU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x2cU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x2dU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x2dU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x2eU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x2eU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x2fU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x2fU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x30U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x30U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x31U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x31U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x32U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x32U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x33U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x33U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x34U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x34U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x35U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x35U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x36U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x36U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x37U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x37U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x38U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x38U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x39U] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x39U])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x3aU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x3aU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x3bU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x3bU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x3cU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x3cU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x3dU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x3dU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x3eU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x3eU])));
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[0x3fU] 
            = ((7U == vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                       [0x3fU])));
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc = 0ULL;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst 
            = ((IData)((0U == (0x18U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst
                : ((IData)((0xfU == (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst));
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc 
            = ((IData)((0U == (0x18U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc
                : ((IData)((0xfU == (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc));
    }
    if ((0U != vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn = 1U;
    } else if ((0U == vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn = 0U;
    }
    if ((0U != vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn 
            = (0x100073U == vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o);
    } else if ((0U == vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1 = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst 
            = ((IData)((0U == (0x1cU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                    ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst)
                : ((IData)((7U == (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst));
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset 
            = ((IData)((0U == (0x1cU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                    ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset))
                : ((IData)((7U == (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset)));
    }
    if ((0U != vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code 
            = ((0x100073U == vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                : 0ULL);
    } else if ((0U == vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code = 0ULL;
    }
    if (vlSelf->rst) {
        __Vdly__SocTop__DOT__rvcpu1__DOT__wb_regfile_data = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel = 0U;
    } else {
        __Vdly__SocTop__DOT__rvcpu1__DOT__wb_regfile_data 
            = ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                ? ((IData)((0x1fU == (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data)
                : vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data);
        vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data 
            = ((IData)((0U == (0x18U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data
                : ((IData)((0xfU == (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data));
        vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel 
            = ((IData)((0U == (0x18U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel)
                : ((IData)((0xfU == (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel)));
    }
    if (vlSelf->rst) {
        __Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v0 = 1U;
    } else if (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena) 
                & (0U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr)))) {
        __Vdlyvval__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data;
        __Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32 = 1U;
        __Vdlyvdim0__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena 
        = ((~ (IData)(vlSelf->rst)) & ((IData)((0U 
                                                == 
                                                (0x1cU 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                        ? ((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)) 
                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena))
                                        : ((~ (IData)(
                                                      (7U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))) 
                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & ((0x10U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                                                       ? 
                                                      ((~ (IData)(
                                                                  (0x1fU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))) 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                                       : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena)));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch 
            = (((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch);
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
            = (0x3fffffffffffffffULL & (((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))
                                         ? (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                            >> 2U) : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base));
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle 
            = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                : (1ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle));
        vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                ? 0ULL : ((IData)((2U == (0x1eU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                           ? 0ULL : ((IData)((7U == 
                                              (7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush)
                                          ? 0ULL : vlSelf->SocTop__DOT__rvcpu_inst_addr))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena)
                ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt)
                : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp));
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena) 
                                        & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                              >> 3U)))
                                        ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt)
                                        : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 = 0ULL;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs 
            = (3U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                      ? (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                 >> 0xdU)) : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs)));
        vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr 
            = ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                ? ((IData)((0x1fU == (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr))
                : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr));
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode 
            = ((IData)((0U == (0x1cU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                    ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode))
                : ((IData)((7U == (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)));
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause 
            = ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                 | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt
                : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause);
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc 
            = (((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                 | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                ? (0xfffffffffffffffcULL & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data)
                : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc);
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
            = ((IData)((0U == (0x1cU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                    ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)
                : ((IData)((7U == (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op));
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
            = ((IData)((0U == (0x1cU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                    ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2)
                : ((IData)((7U == (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2));
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip = 0U;
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie 
        = (1U & ((~ (IData)(vlSelf->rst)) & (((0x304U 
                                               == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))
                                              ? (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                         >> 7U))
                                              : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena) 
                                        & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                              >> 3U)))
                                        ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mie_nxt)
                                        : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type = 0U;
        vlSelf->__Vdly__SocTop__DOT__rvcpu_inst_addr = 0x80000000ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr = 0ULL;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type 
            = ((IData)((0U == (0x1cU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                    ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                : ((IData)((7U == (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type)));
        vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type 
            = ((IData)((0U == (0x18U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type)
                : ((IData)((0xfU == (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type)));
        vlSelf->__Vdly__SocTop__DOT__rvcpu_inst_addr 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                ? (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                    ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                    : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                        ? (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                        : 0ULL)) : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena)
                                     ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
                                         ? (0xfffffffffffffffeULL 
                                            & ((((- (QData)((IData)(
                                                                    (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                               + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op))
                                         : 0ULL) : 
                                    ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                                      ? vlSelf->SocTop__DOT__rvcpu_inst_addr
                                      : ((IData)(vlSelf->rst)
                                          ? 0ULL : 
                                         ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                           ? (0xfffffffffffffffeULL 
                                              & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                           : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                ? 0U : ((IData)((2U == (0x1eU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                         ? 0U : ((IData)((7U == (7U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                  ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst
                                  : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush)
                                      ? 0U : vlSelf->SocTop__DOT__i_cache_inst_data))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
            = ((IData)((0U == (0x18U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr
                : ((IData)((0xfU == (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr));
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data 
        = __Vdly__SocTop__DOT__rvcpu1__DOT__wb_regfile_data;
    if (__Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v0) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0xaU] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0xbU] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0xcU] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0xdU] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0xeU] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0xfU] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x10U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x11U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x12U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x13U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x14U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x15U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x16U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x17U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x18U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x19U] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x1aU] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x1bU] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x1cU] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x1dU] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x1eU] = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[__Vdlyvdim0__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32] 
            = __Vdlyvval__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o 
        = ((IData)(vlSelf->rst) ? 0ULL : ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                                           ? ((IData)(
                                                      (0x1fU 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                               ? 0ULL
                                               : vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc)
                                           : vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc));
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_pc_TOP(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1, vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code, (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn), vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn);
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o 
            = ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                ? ((IData)((0x1fU == (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst)
                : vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst);
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel 
            = ((IData)((0U == (0x1cU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                    ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel))
                : ((IData)((7U == (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel)));
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena 
        = ((~ (IData)(vlSelf->rst)) & ((IData)((0U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                        ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena)
                                        : ((~ (IData)(
                                                      (0xfU 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))) 
                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)((0U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                         ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)
                                         : ((IData)(
                                                    (0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                             ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2) 
           - (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                      >> 0x13U))))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2) 
                                         << 0xcU))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res 
        = (((0x3fU >= (0x7fU & ((IData)(0x40U) - (0x3fU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             ? ((- (QData)((IData)((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                  >> 0x3fU)))))) 
                << (0x7fU & ((IData)(0x40U) - (0x3fU 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             : 0ULL) | (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                        >> (0x3fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))));
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2 
        = (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
           + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                   + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus 
        = ((((QData)((IData)(((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs)) 
                              << 0x1fU))) << 0x20U) 
            | ((QData)((IData)((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs) 
                                 << 2U) | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))) 
               << 0xbU)) | (QData)((IData)((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie) 
                                             << 7U) 
                                            | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie) 
                                               << 3U)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr = 
        ((IData)((0U != (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))))
          ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
             + (((- (QData)((IData)((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset) 
                                           >> 0xbU))))) 
                 << 0xcU) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset))))
          : 0ULL);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx 
        = ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))
            ? (0xfffU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
            : 0U);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc = 
        ((IData)(vlSelf->rst) ? 0ULL : ((IData)((0U 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                         ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                             ? 0ULL
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc)
                                         : ((IData)(
                                                    (7U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                             ? 0ULL
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc)));
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
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_thepc_TOP(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)((0U 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                         ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                             ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr))
                                         : ((IData)(
                                                    (7U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                             ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr))));
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena 
        = ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)) 
            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
           & (0ULL != vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc));
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type) 
           & (- (IData)((1U & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))))));
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena) 
           & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena)));
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus) 
            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)) 
           | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
              | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch) 
            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena)) 
           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
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
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__4(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*0:0*/ __Vdly__SocTop__DOT__d_cache13__DOT__write_incache;
    // Body
    __Vdly__SocTop__DOT__d_cache13__DOT__write_incache 
        = vlSelf->SocTop__DOT__d_cache13__DOT__write_incache;
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_i_ok)))) {
        vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena = 1U;
    } else if (((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                & (IData)(vlSelf->SocTop__DOT__arbitrate_i_ok))) {
        vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena = 0U;
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
        if ((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_count1 = 0U;
        }
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
        if ((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_count2 = 0U;
        }
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
        if ((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_o = 1U;
        }
        if ((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_o = 1U;
        }
    } else if ((1U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
        vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_o = 0U;
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
        if ((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__i_cache12__DOT__inst_data_o 
                = vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data;
        }
        if ((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__i_cache12__DOT__inst_data_o 
                = vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data;
        }
    } else if ((1U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
        vlSelf->SocTop__DOT__i_cache12__DOT__inst_data_o = 0U;
    }
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w = 1U;
    } else if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w = 0U;
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
        if ((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok = 1U;
        }
        if ((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok = 1U;
        }
    } else {
        vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok = 0U;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_i_ok)))))) {
        if (((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
             & (IData)(vlSelf->SocTop__DOT__arbitrate_i_ok))) {
            if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild)) 
                       | (vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                          [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                             >> 3U)))] 
                          >= vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                          [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                             >> 3U)))])))) {
                vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1 = 1U;
            } else if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild)) 
                              | (vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1
                                 [(0x3fU & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                    >> 3U)))] 
                                 < vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                    >> 3U)))])))) {
                vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2 = 1U;
            }
            vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache = 1U;
        } else if (vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache) {
            vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_write = 1U;
            vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok = 1U;
            vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache = 0U;
            if (vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1) {
                vlSelf->SocTop__DOT__i_cache12__DOT__data_inst 
                    = vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data;
            }
            if (vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2) {
                vlSelf->SocTop__DOT__i_cache12__DOT__data_inst 
                    = vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data;
            }
        } else if (vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok) {
            vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok = 0U;
            if ((1U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
                vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1 = 0U;
                vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2 = 0U;
                vlSelf->SocTop__DOT__i_cache12__DOT__data_inst = 0U;
                vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_write = 0U;
            }
        }
    }
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w_l = 1U;
    } else if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w_l = 0U;
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__count_hit1 = 0U;
        }
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__count_hit2 = 0U;
        }
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__load_hit_count1 = 0U;
        }
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__load_hit_count2 = 0U;
        }
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__load_finish_h = 1U;
        }
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__load_finish_h = 1U;
        }
    } else if ((1U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__load_finish_h = 0U;
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__load_data_o 
                = vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data;
        }
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__load_data_o 
                = vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data;
        }
    } else if ((1U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__load_data_o = 0ULL;
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__load_ok = 1U;
        }
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__load_ok = 1U;
        }
    } else {
        vlSelf->SocTop__DOT__d_cache13__DOT__load_ok = 0U;
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__dirty_hit = 1U;
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_mask 
                = vlSelf->SocTop__DOT__rvcpu_wmask;
            vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_data 
                = vlSelf->SocTop__DOT__rvcpu_data_o;
            vlSelf->SocTop__DOT__d_cache13__DOT__store_finish = 1U;
            vlSelf->SocTop__DOT__d_cache13__DOT__store_ok = 1U;
        }
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                 >> 9U))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_mask 
                = vlSelf->SocTop__DOT__rvcpu_wmask;
            vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_data 
                = vlSelf->SocTop__DOT__rvcpu_data_o;
            vlSelf->SocTop__DOT__d_cache13__DOT__store_finish = 1U;
            vlSelf->SocTop__DOT__d_cache13__DOT__store_ok = 1U;
        }
    } else if (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__store_ok) 
                & (1U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__store_ok = 0U;
        vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_mask = 0U;
        vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_data = 0ULL;
        vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_mask = 0U;
        vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_data = 0ULL;
        vlSelf->SocTop__DOT__d_cache13__DOT__store_finish = 0U;
        vlSelf->SocTop__DOT__d_cache13__DOT__dirty_hit = 0U;
    }
    if ((0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__out_addr_wb 
                = vlSelf->SocTop__DOT__rvcpu_data_addr;
        }
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__out_addr_wb 
                = vlSelf->SocTop__DOT__rvcpu_data_addr;
        }
    } else if (vlSelf->SocTop__DOT__arbitrate_d_ok) {
        vlSelf->SocTop__DOT__d_cache13__DOT__out_addr_wb = 0ULL;
    }
    if ((0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb 
                = vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data;
        }
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb 
                = vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data;
        }
    } else if (vlSelf->SocTop__DOT__arbitrate_d_ok) {
        vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb = 0ULL;
    }
    if ((0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena = 1U;
        }
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena = 1U;
        }
    } else if (vlSelf->SocTop__DOT__arbitrate_d_ok) {
        vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena = 0U;
    }
    if ((0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb_l 
                = vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data;
        }
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb_l 
                = vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data;
        }
    } else if (vlSelf->SocTop__DOT__d_cache13__DOT__load_bc_ok) {
        vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb_l = 0ULL;
    }
    if ((0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__outw_data_ena_l = 1U;
        }
        if ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                >> 3U)))] & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__outw_data_ena_l = 1U;
        }
    } else if (vlSelf->SocTop__DOT__d_cache13__DOT__load_bc_ok) {
        vlSelf->SocTop__DOT__d_cache13__DOT__outw_data_ena_l = 0U;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
             & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) {
            if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild)) 
                       | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                          [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                             >> 3U)))] 
                          & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))]))))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data_l 
                    = vlSelf->SocTop__DOT__arbitrate_d_data;
            } else if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild)) 
                              | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                    >> 3U)))] 
                                 & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                       >> 3U)))] 
                                    < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                       >> 3U)))]))))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data_l 
                    = vlSelf->SocTop__DOT__arbitrate_d_data;
            }
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
             & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) {
            if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild)) 
                       | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                          [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                             >> 3U)))] 
                          & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))]))))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1 = 1U;
            } else if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild)) 
                              | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                    >> 3U)))] 
                                 & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                       >> 3U)))] 
                                    < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                       >> 3U)))]))))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2 = 1U;
            }
        } else if (vlSelf->SocTop__DOT__d_cache13__DOT__read_cache) {
            vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem_l = 1U;
            vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok = 1U;
            if (vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1) {
                vlSelf->SocTop__DOT__d_cache13__DOT__data_load 
                    = vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data;
            }
            if (vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2) {
                vlSelf->SocTop__DOT__d_cache13__DOT__data_load 
                    = vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data;
            }
        } else if (vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok) {
            vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok = 0U;
            if ((1U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__data_load = 0ULL;
                vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem_l = 0U;
            }
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
             & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) {
            if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild)) 
                       | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                          [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                             >> 3U)))] 
                          & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))]))))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__count_write1 = 0U;
            }
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
             & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) {
            if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild)) 
                       | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                          [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                             >> 3U)))] 
                          & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))]))))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__load_write_count1 = 0U;
            }
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
             & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) {
            if ((1U & (~ ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild)) 
                          | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 3U)))] 
                                >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 3U)))])))))) {
                if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild)) 
                           | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
                              [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                 >> 3U)))] 
                              & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                 [(0x3fU & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                    >> 3U)))] 
                                 < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                    >> 3U)))]))))) {
                    vlSelf->SocTop__DOT__d_cache13__DOT__count_write2 = 0U;
                }
            }
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
             & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) {
            if ((1U & (~ ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild)) 
                          | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 3U)))] 
                                >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 3U)))])))))) {
                if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild)) 
                           | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
                              [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                 >> 3U)))] 
                              & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                 [(0x3fU & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                    >> 3U)))] 
                                 < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                    >> 3U)))]))))) {
                    vlSelf->SocTop__DOT__d_cache13__DOT__load_write_count2 = 0U;
                }
            }
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
             & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) {
            if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild)) 
                       | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                          [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                             >> 3U)))] 
                          & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))]))))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1 = 1U;
                vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data 
                    = vlSelf->SocTop__DOT__arbitrate_d_data;
                __Vdly__SocTop__DOT__d_cache13__DOT__write_incache = 1U;
            } else if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild)) 
                              | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                    >> 3U)))] 
                                 & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                       >> 3U)))] 
                                    < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                       >> 3U)))]))))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2 = 1U;
                vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data 
                    = vlSelf->SocTop__DOT__arbitrate_d_data;
                __Vdly__SocTop__DOT__d_cache13__DOT__write_incache = 1U;
            }
        } else if (vlSelf->SocTop__DOT__d_cache13__DOT__write_incache) {
            vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_mask 
                = vlSelf->SocTop__DOT__rvcpu_wmask;
            vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data 
                = vlSelf->SocTop__DOT__rvcpu_data_o;
            vlSelf->SocTop__DOT__d_cache13__DOT__write_ok = 1U;
            vlSelf->SocTop__DOT__d_cache13__DOT__dirty_make = 1U;
            vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem = 1U;
            __Vdly__SocTop__DOT__d_cache13__DOT__write_incache = 0U;
        } else if (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_ok) 
                    & (1U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))) {
            vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem = 0U;
            vlSelf->SocTop__DOT__d_cache13__DOT__write_ok = 0U;
            vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1 = 0U;
            vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2 = 0U;
            vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data = 0ULL;
            vlSelf->SocTop__DOT__d_cache13__DOT__dirty_make = 0U;
        }
    }
    vlSelf->out_axi_ar_size = ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena)
                                ? 2U : 3U);
    vlSelf->SocTop__DOT__d_cache13__DOT__write_incache 
        = __Vdly__SocTop__DOT__d_cache13__DOT__write_incache;
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
             & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) {
            if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild)) 
                       | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                          [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                             >> 3U)))] 
                          & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))]))))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__read_cache = 1U;
            } else if ((1U & ((~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild)) 
                              | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                    >> 3U)))] 
                                 & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                       >> 3U)))] 
                                    < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                       >> 3U)))]))))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__read_cache = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VSocTop___024root___combo__TOP__5(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst);
    vlSelf->SocTop__DOT__rvcpu_we = (1U & ((~ (IData)(vlSelf->rst)) 
                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type)));
    vlSelf->SocTop__DOT__rvcpu_re = (1U & ((~ (IData)(vlSelf->rst)) 
                                           & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type) 
                                              >> 1U)));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                         >> 2U))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                       >> 2U))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal 
            = (IData)((0x1bU == (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                          >> 2U))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr 
            = (IData)((0x19U == (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                          >> 2U))));
    }
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
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc = 0ULL;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask 
            = ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                ? 0U : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                         ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                             ? 0xffU : ((IData)(vlSelf->rst)
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                                  ? 0xf0U
                                                  : 0xfU)))
                         : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                             ? ((IData)(vlSelf->rst)
                                 ? 0U : ((0U == (3U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 1U))))
                                          ? 3U : ((1U 
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
                             : ((IData)(vlSelf->rst)
                                 ? 0U : ((1U & (IData)(
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                        >> 2U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 1U)))
                                              ? ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                  ? 0x80U
                                                  : 0x40U)
                                              : ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                  ? 0x20U
                                                  : 0x10U))
                                          : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 1U)))
                                              ? ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                  ? 8U
                                                  : 4U)
                                              : ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                  ? 2U
                                                  : 1U)))))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data 
            = ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                ? 0ULL : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                           ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                               ? vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data
                               : ((IData)(vlSelf->rst)
                                   ? 0ULL : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                              : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))))
                           : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                               ? ((IData)(vlSelf->rst)
                                   ? 0ULL : ((0U == 
                                              (3U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 1U))))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))
                                              : ((1U 
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
                                   ? 0ULL : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? ((1U 
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
                                              : ((1U 
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
                                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))))))))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc;
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel 
            = (7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                     >> 0xcU));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res 
            = ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                ? ((0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                    ? ((0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                        ? 0ULL : ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                   ? 0ULL : ((8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                              ? 0ULL
                                              : ((4U 
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
                                                    << 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))))))
                    : ((0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                        ? ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                            ? 0ULL : ((8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                       ? 0ULL : ((4U 
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
                        : ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                            ? ((8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                             ? 0ULL
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res))))
                            : ((8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                ? ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                   + vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm))))
                                : ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                    ? ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res))
                                    : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 
                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                   + vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm)
                                                   : 
                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))))))))
                : ((0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                    ? ((0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                        ? ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                            ? 0ULL : ((8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                       ? 0ULL : ((4U 
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
                        : ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                            ? ((8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                             ? 0ULL
                                             : (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                ^ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
                            : ((8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                ? ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res)))
                                : ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                    ? ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))
                                    : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                        ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? 0ULL : 
                                           (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                        : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? 0ULL : 
                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                            << (0x3fU 
                                                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))))))
                    : ((0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                        ? ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                            ? ((8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                             ? 0ULL
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2))))
                            : ((8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))
                                           : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                   | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                               : ((1U 
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
                        : ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                            ? ((8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                ? ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2)))
                                : ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res)
                                               : ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res
                                                   : 
                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                   | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
                            : ((8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                ? ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                    ? ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2))
                                    : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                        ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? 0ULL : (QData)((IData)(
                                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                                      < vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))
                                        : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res
                                            : (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                               ^ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))
                                : ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                    ? ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                        ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1
                                            : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res)
                                        : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2))
                                            : (QData)((IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                               < vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
                                    : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                        ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res
                                            : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2)))
                                        : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2
                                            : 0ULL))))))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc;
    }
    vlSelf->SocTop__DOT__arbitrate_i_ok = (((1U == (IData)(vlSelf->out_axi_r_id)) 
                                            & (IData)(vlSelf->out_axi_r_last)) 
                                           & (0U == (IData)(vlSelf->out_axi_r_resp)));
    vlSelf->SocTop__DOT__arbitrate_d_ok = (((2U == (IData)(vlSelf->out_axi_r_id)) 
                                            & (IData)(vlSelf->out_axi_r_last)) 
                                           & (0U == (IData)(vlSelf->out_axi_r_resp)));
    vlSelf->SocTop__DOT__rvcpu_data_addr = ((IData)(vlSelf->rst)
                                             ? 0ULL
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal) 
           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset 
        = (0xfffU & ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                      ? (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                         >> 0x14U) : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                                       ? ((0xfe0U & 
                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 7U)))
                                       : 0U)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40000000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x40007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x4000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x40007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x3000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x6000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x7000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40000000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai 
        = (1U & (IData)(((0x10U == (0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2 = (IData)(
                                                            (0U 
                                                             != 
                                                             (0x4dU 
                                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x3000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                    & (0U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
           & (1U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                     >> 0x14U)));
    if ((1U & ((IData)(vlSelf->rst) | (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))))) {
        vlSelf->SocTop__DOT__rvcpu_wmask = 0U;
        vlSelf->SocTop__DOT__rvcpu_data_o = 0ULL;
    } else {
        vlSelf->SocTop__DOT__rvcpu_wmask = vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask;
        vlSelf->SocTop__DOT__rvcpu_data_o = vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data 
        = ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))
            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2
            : ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type) 
                 >> 7U) & (7U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res));
    vlSelf->SocTop__DOT____Vcellout__arbitrate4__i_cache_data_o 
        = ((IData)(vlSelf->SocTop__DOT__arbitrate_i_ok)
            ? vlSelf->out_axi_r_data : 0ULL);
    vlSelf->SocTop__DOT__arbitrate_d_data = ((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)
                                              ? vlSelf->out_axi_r_data
                                              : 0ULL);
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1 
            = vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_mask;
        vlSelf->SocTop__DOT__d_cache13__DOT__in_data1 
            = vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_data;
        vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2 
            = vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_mask;
        vlSelf->SocTop__DOT__d_cache13__DOT__in_data2 
            = vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_data;
    } else {
        vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1 
            = ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                 & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
                & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1))
                ? 0xffU : (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache) 
                            & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1))
                            ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_mask)
                            : 0U));
        vlSelf->SocTop__DOT__d_cache13__DOT__in_data1 
            = ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                 & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
                & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1))
                ? vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data
                : (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache) 
                    & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1))
                    ? vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data
                    : 0ULL));
        vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2 
            = ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                 & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
                & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2))
                ? 0xffU : (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache) 
                            & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2))
                            ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_mask)
                            : 0U));
        vlSelf->SocTop__DOT__d_cache13__DOT__in_data2 
            = ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                 & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
                & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2))
                ? vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data
                : (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache) 
                    & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2))
                    ? vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data
                    : 0ULL));
    }
    vlSelf->SocTop__DOT__d_cache13__DOT__dirty1[(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                            >> 3U)))] 
        = (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1) 
            & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__dirty_make)) 
           | (((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
               & (vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
                  == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                      >> 9U))) & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__dirty_hit)));
    vlSelf->SocTop__DOT__d_cache13__DOT__dirty2[(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                            >> 3U)))] 
        = (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2) 
            & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__dirty_make)) 
           | (((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
               & (vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
                  == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                      >> 9U))) & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__dirty_hit)));
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
        = ((0xf7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((1U 
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
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw)))) 
              << 3U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xdfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((IData)(
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
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw)))) 
              << 5U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xefU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((IData)(
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
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw)))) 
              << 4U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2)
            ? (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                        >> 0x14U)) : 0U);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xbfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
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
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw)))) 
              << 6U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0x7fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs) 
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
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw)))) 
              << 7U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1 = 
        (1U & ((IData)((0U != (0x7fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type)))) 
               | (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfbU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((1U 
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
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))) 
              << 2U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfeU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | ((IData)(vlSelf->rst) ? 0U : (1U & (((
                                                   (((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc) 
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
                                                 | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfdU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi) 
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
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))) 
              << 1U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
            ? 0xbU : (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                               >> 0xfU)));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 1U;
    } else if ((0x20U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))) {
                            if (vlSelf->SocTop__DOT__arbitrate_d_ok) {
                                vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 0x10U;
                            }
                            vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 0x20U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))) {
                        if (vlSelf->SocTop__DOT__d_cache13__DOT__write_ok) {
                            vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 1U;
                        }
                        vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 0x10U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))) {
                    if (((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                          [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                             >> 3U)))] 
                          & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))])) 
                         | ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 3U)))] 
                                < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 3U)))])) 
                            & ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild) 
                               & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild))))) {
                        vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 0x20U;
                    }
                    vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 0x10U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))) {
                if (vlSelf->SocTop__DOT__d_cache13__DOT__store_ok) {
                    vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 1U;
                }
                vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 4U;
            }
        }
    } else if ((2U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))) {
            if ((((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
                   == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                       >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild)) 
                 | ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
                     == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild)))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 4U;
            }
            vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 8U;
        }
    } else if ((1U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if (vlSelf->SocTop__DOT__rvcpu_we) {
            vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 2U;
        }
        vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__d_cache13__DOT__state_load = 1U;
    } else if ((0x20U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))) {
                            if (vlSelf->SocTop__DOT__d_cache13__DOT__load_bc_ok) {
                                vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 0x10U;
                            }
                            vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 0x20U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))) {
                        if (vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok) {
                            vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 0x10U;
                        }
                        vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 1U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))) {
                    if (((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                          [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                             >> 3U)))] 
                          & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))])) 
                         | ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 3U)))] 
                                < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 3U)))])) 
                            & ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild) 
                               & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild))))) {
                        vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 0x20U;
                    }
                    vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 0x10U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))) {
                if (vlSelf->SocTop__DOT__d_cache13__DOT__load_ok) {
                    vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 1U;
                }
                vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 4U;
            }
        }
    } else if ((2U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))) {
            if ((((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
                   == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                       >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild)) 
                 | ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
                     == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild)))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 4U;
            }
            vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 8U;
        }
    } else if ((1U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if (vlSelf->SocTop__DOT__rvcpu_re) {
            vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 2U;
        }
        vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 1U;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena)
            ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
                ? 0xbU : (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                   >> 7U))) : 0U);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1)
            ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1)
            : 0U);
    vlSelf->SocTop__DOT__d_cache13__DOT__state_load 
        = vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt;
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
            == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
            == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
    vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena1 = 
        ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
           & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
          & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2)) 
         | (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
             & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
            & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2)));
    vlSelf->SocTop__DOT__d_cache_read_ena = (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                              & (0x10U 
                                                 == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                              ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w_l)
                                              : (((0x10U 
                                                   == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                                                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) 
                                                 & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w)));
    vlSelf->SocTop__DOT__d_cache_write_ena = (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                               & (0x20U 
                                                  == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                               ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__outw_data_ena_l)
                                               : (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                   & (0x20U 
                                                      == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) 
                                                  & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena)));
    vlSelf->SocTop__DOT__d_cache_data_out = (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                              & (4U 
                                                 == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                              ? vlSelf->SocTop__DOT__d_cache13__DOT__load_data_o
                                              : (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                                  & ((0x10U 
                                                      == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                                                     & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))
                                                  ? vlSelf->SocTop__DOT__d_cache13__DOT__data_load
                                                  : 0ULL));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena 
        = ((IData)(vlSelf->rst) ? 0U : (1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr) 
                                              & (~ 
                                                 (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                                   & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))))))));
    vlSelf->out_axi_ar_id = ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena)
                              ? 1U : ((IData)(vlSelf->SocTop__DOT__d_cache_read_ena)
                                       ? 2U : 0U));
    vlSelf->SocTop__DOT__t_axi_ar_valid = ((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state)) 
                                           & ((IData)(vlSelf->SocTop__DOT__d_cache_read_ena) 
                                              | (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena)));
    vlSelf->SocTop__DOT__t_axi_w_valid = ((IData)(vlSelf->SocTop__DOT__d_cache_write_ena) 
                                          & (0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)));
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush = 
        ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
    vlSelf->out_axi_ar_valid = vlSelf->SocTop__DOT__t_axi_ar_valid;
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state 
            = vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state_nxt;
        if ((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state))) {
            if (((IData)(vlSelf->SocTop__DOT__t_axi_ar_valid) 
                 & (IData)(vlSelf->out_axi_ar_ready))) {
                vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state_nxt = 1U;
            }
            vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state_nxt = 0U;
        } else if ((1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state))) {
            if (vlSelf->SocTop__DOT__arbitrate4__DOT__r_shankhand) {
                vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state_nxt = 2U;
            }
            vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state_nxt = 1U;
        } else if ((2U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state))) {
            if (vlSelf->out_axi_r_last) {
                vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state_nxt = 0U;
            }
            vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state_nxt = 2U;
        }
    } else {
        vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state = 0U;
    }
    vlSelf->out_axi_aw_valid = vlSelf->SocTop__DOT__t_axi_w_valid;
    vlSelf->out_axi_w_valid = vlSelf->SocTop__DOT__t_axi_w_valid;
    vlSelf->SocTop__DOT__arbitrate4__DOT__aw_shankhand 
        = ((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
           & (IData)(vlSelf->out_axi_aw_ready));
    vlSelf->SocTop__DOT__arbitrate4__DOT__w_shankhand 
        = ((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
           & (IData)(vlSelf->out_axi_w_ready));
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
    if (((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__aw_shankhand) 
         & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__w_shankhand))) {
        vlSelf->out_axi_w_strb = 0xffU;
        vlSelf->out_axi_aw_addr = vlSelf->SocTop__DOT__rvcpu_data_addr;
    } else {
        vlSelf->out_axi_w_strb = 0U;
        vlSelf->out_axi_aw_addr = 0ULL;
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state = 0U;
    } else if ((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state))) {
        vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state 
            = (((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__aw_shankhand) 
                & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__w_shankhand))
                ? 3U : ((IData)(vlSelf->SocTop__DOT__t_axi_w_valid)
                         ? 1U : 0U));
    } else if ((1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state))) {
        vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state 
            = (((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__aw_shankhand) 
                & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__w_shankhand))
                ? 3U : 1U);
    } else if ((3U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state))) {
        vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state 
            = ((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand)
                ? 0U : 3U);
    }
    vlSelf->out_axi_w_data = (((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__aw_shankhand) 
                               & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__w_shankhand))
                               ? (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                   & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                   ? vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb_l
                                   : (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                       & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))
                                       ? vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb
                                       : 0ULL)) : 0ULL);
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2 = 0ULL;
    } else {
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
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2)
                ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))
                    ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data
                    : ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                         == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))
                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data
                        : (((~ (IData)(vlSelf->rst)) 
                            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                            ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                 == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                               [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                            : 0ULL))) : ((IData)((0U 
                                                  != 
                                                  (0xb0U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))))
                                          ? (((- (QData)((IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                >> 0x14U))))
                                          : (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui) 
                                              | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc))
                                              ? (((- (QData)((IData)(
                                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                      >> 0x1fU)))) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                    >> 0xcU))))
                                              : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump)
                                                  ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc
                                                  : 0ULL))));
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__6(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__6\n"); );
    // Body
    vlSelf->SocTop__DOT__rvcpu_inst_addr = vlSelf->__Vdly__SocTop__DOT__rvcpu_inst_addr;
}

VL_INLINE_OPT void VSocTop___024root___combo__TOP__7(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___combo__TOP__7\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__i_cache12__DOT__state_inst = 1U;
    } else if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst) 
                         >> 5U)))) {
        if ((0x10U & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)))) {
                            if (vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok) {
                                vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 1U;
                            }
                            vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 0x10U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst) 
                             >> 3U)))) {
            if ((4U & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
                if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)))) {
                        if (vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok) {
                            vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 1U;
                        }
                        vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 4U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)))) {
                    if ((((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data 
                           == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                               >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild)) 
                         | ((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data 
                             == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                 >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild)))) {
                        vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 4U;
                    }
                    vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 0x10U;
                }
            } else if ((1U & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
                if (vlSelf->rst) {
                    vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 2U;
                }
                vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 1U;
            }
        }
    }
    vlSelf->out_axi_ar_addr = ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena)
                                ? vlSelf->SocTop__DOT__rvcpu_data_addr
                                : ((IData)(vlSelf->SocTop__DOT__d_cache_read_ena)
                                    ? vlSelf->SocTop__DOT__rvcpu_inst_addr
                                    : 0ULL));
    vlSelf->SocTop__DOT__i_cache12__DOT__state_inst 
        = vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt;
    vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena1 
        = (((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
            & (IData)(vlSelf->SocTop__DOT__arbitrate_i_ok)) 
           & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2));
    vlSelf->SocTop__DOT__i_cache12__DOT__i_in_data1 
        = ((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
             & (IData)(vlSelf->SocTop__DOT__arbitrate_i_ok)) 
            & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2))
            ? (IData)(vlSelf->SocTop__DOT____Vcellout__arbitrate4__i_cache_data_o)
            : 0U);
    vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req 
        = (1U & ((~ (IData)(vlSelf->rst)) & (~ ((4U 
                                                 == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))
                                                 ? (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_o)
                                                 : 
                                                ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache) 
                                                 & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_write))))));
    vlSelf->SocTop__DOT__i_cache_inst_data = ((4U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))
                                               ? vlSelf->SocTop__DOT__i_cache12__DOT__inst_data_o
                                               : ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache)
                                                   ? vlSelf->SocTop__DOT__i_cache12__DOT__data_inst
                                                   : 0U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl = 
        ((IData)(vlSelf->rst) ? 0U : (((~ (IData)(vlSelf->rst)) 
                                       & (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                           | (IData)(vlSelf->SocTop__DOT__rvcpu_we)) 
                                          & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                                 & (4U 
                                                    == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                                 ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_finish_h)
                                                 : 
                                                (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                                  & ((0x10U 
                                                      == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                                                     & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))
                                                  ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem_l)
                                                  : 
                                                 (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                   & (4U 
                                                      == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))
                                                   ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__store_finish)
                                                   : 
                                                  (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                    & ((0x10U 
                                                        == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                                                       & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) 
                                                   & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem))))))))
                                       ? 0x1fU : (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req))
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
                                                           & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                               & (2U 
                                                                  == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                              & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                                 == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr))))) 
                                                         | ((IData)(vlSelf->rst)
                                                             ? 0U
                                                             : 
                                                            (1U 
                                                             & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                                 & (2U 
                                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                                & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                                   == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))) 
                                                        | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush) 
                                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req)))))
                                                    ? 7U
                                                    : 
                                                   ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req)
                                                     ? 3U
                                                     : 0U)))));
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
            ? ((1U & ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->rst)
                                                   ? 0U
                                                   : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr))))
                ? ((((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                               >> 0xfU)) == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr)) 
                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                    ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                    : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                   [(0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                              >> 0xfU))]) : 0ULL) : vlSelf->SocTop__DOT__rvcpu_inst_addr);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc 
        = (vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1 
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
                       : 4ULL))));
}

void VSocTop___024root___eval(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___eval\n"); );
    // Body
    VSocTop___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VSocTop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)))) {
        VSocTop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    VSocTop___024root___combo__TOP__5(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VSocTop___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    VSocTop___024root___combo__TOP__7(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData VSocTop___024root___change_request_1(VSocTop___024root* vlSelf);

VL_INLINE_OPT QData VSocTop___024root___change_request(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___change_request\n"); );
    // Body
    return (VSocTop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSocTop___024root___change_request_1(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->SocTop__DOT__d_cache13__DOT__state_store ^ vlSelf->__Vchglast__TOP__SocTop__DOT__d_cache13__DOT__state_store)
         | (vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state ^ vlSelf->__Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__transfor_state)
         | (vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state ^ vlSelf->__Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__cache_state)
         | (vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state_nxt ^ vlSelf->__Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__cache_state_nxt));
    VL_DEBUG_IF( if(__req && ((vlSelf->SocTop__DOT__d_cache13__DOT__state_store ^ vlSelf->__Vchglast__TOP__SocTop__DOT__d_cache13__DOT__state_store))) VL_DBG_MSGF("        CHANGE: vsrc/d_cache1.v:208: SocTop.d_cache13.state_store\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state ^ vlSelf->__Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__transfor_state))) VL_DBG_MSGF("        CHANGE: vsrc/arbitrate.v:131: SocTop.arbitrate4.transfor_state\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state ^ vlSelf->__Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__cache_state))) VL_DBG_MSGF("        CHANGE: vsrc/arbitrate.v:187: SocTop.arbitrate4.cache_state\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state_nxt ^ vlSelf->__Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__cache_state_nxt))) VL_DBG_MSGF("        CHANGE: vsrc/arbitrate.v:188: SocTop.arbitrate4.cache_state_nxt\n"); );
    // Final
    vlSelf->__Vchglast__TOP__SocTop__DOT__d_cache13__DOT__state_store 
        = vlSelf->SocTop__DOT__d_cache13__DOT__state_store;
    vlSelf->__Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__transfor_state 
        = vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state;
    vlSelf->__Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__cache_state 
        = vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state;
    vlSelf->__Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__cache_state_nxt 
        = vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state_nxt;
    return __req;
}

#ifdef VL_DEBUG
void VSocTop___024root___eval_debug_assertions(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->out_axi_aw_ready & 0xfeU))) {
        Verilated::overWidthError("out_axi_aw_ready");}
    if (VL_UNLIKELY((vlSelf->out_axi_w_ready & 0xfeU))) {
        Verilated::overWidthError("out_axi_w_ready");}
    if (VL_UNLIKELY((vlSelf->out_axi_b_id & 0xf0U))) {
        Verilated::overWidthError("out_axi_b_id");}
    if (VL_UNLIKELY((vlSelf->out_axi_b_resp & 0xfcU))) {
        Verilated::overWidthError("out_axi_b_resp");}
    if (VL_UNLIKELY((vlSelf->out_axi_b_valid & 0xfeU))) {
        Verilated::overWidthError("out_axi_b_valid");}
    if (VL_UNLIKELY((vlSelf->out_axi_ar_ready & 0xfeU))) {
        Verilated::overWidthError("out_axi_ar_ready");}
    if (VL_UNLIKELY((vlSelf->out_axi_r_id & 0xf0U))) {
        Verilated::overWidthError("out_axi_r_id");}
    if (VL_UNLIKELY((vlSelf->out_axi_r_resp & 0xfcU))) {
        Verilated::overWidthError("out_axi_r_resp");}
    if (VL_UNLIKELY((vlSelf->out_axi_r_last & 0xfeU))) {
        Verilated::overWidthError("out_axi_r_last");}
    if (VL_UNLIKELY((vlSelf->out_axi_r_valid & 0xfeU))) {
        Verilated::overWidthError("out_axi_r_valid");}
}
#endif  // VL_DEBUG
