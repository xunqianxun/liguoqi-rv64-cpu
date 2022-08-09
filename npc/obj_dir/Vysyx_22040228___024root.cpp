// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040228.h for the primary calling header

#include "Vysyx_22040228___024root.h"
#include "Vysyx_22040228__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void difftest_dut_csrs(long long mcycle_val, long long mstatus_val, long long mtvec_val, long long mepc_val, long long mcause_val, long long mie_val, long long mip_val, long long mscratch_val);

VL_INLINE_OPT void Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__difftest_dut_csrs_TOP(QData/*63:0*/ mcycle_val, QData/*63:0*/ mstatus_val, QData/*63:0*/ mtvec_val, QData/*63:0*/ mepc_val, QData/*63:0*/ mcause_val, QData/*63:0*/ mie_val, QData/*63:0*/ mip_val, QData/*63:0*/ mscratch_val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__difftest_dut_csrs_TOP\n"); );
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

VL_INLINE_OPT void Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__difftest_dut_pc_TOP(QData/*63:0*/ pc_data, QData/*63:0*/ exit_code, CData/*0:0*/ endyn, CData/*0:0*/ exe) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__difftest_dut_pc_TOP\n"); );
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

VL_INLINE_OPT void Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__difftest_dut_thepc_TOP(QData/*63:0*/ thepc_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__difftest_dut_thepc_TOP\n"); );
    // Body
    long long thepc_data__Vcvt;
    for (size_t thepc_data__Vidx = 0; thepc_data__Vidx < 1; ++thepc_data__Vidx) thepc_data__Vcvt = thepc_data;
    difftest_dut_thepc(thepc_data__Vcvt);
}

extern "C" void difftest_dut_regs(long long Z0, long long ra, long long sp, long long gp, long long tp, long long t0, long long t1, long long t2, long long fp, long long s1, long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long a7, long long s2, long long s3, long long s4, long long s5, long long s6, long long s7, long long s8, long long s9, long long s10, long long a11, long long t3, long long t4, long long t5, long long t6);

VL_INLINE_OPT void Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__difftest_dut_regs_TOP(QData/*63:0*/ Z0, QData/*63:0*/ ra, QData/*63:0*/ sp, QData/*63:0*/ gp, QData/*63:0*/ tp, QData/*63:0*/ t0, QData/*63:0*/ t1, QData/*63:0*/ t2, QData/*63:0*/ fp, QData/*63:0*/ s1, QData/*63:0*/ a0, QData/*63:0*/ a1, QData/*63:0*/ a2, QData/*63:0*/ a3, QData/*63:0*/ a4, QData/*63:0*/ a5, QData/*63:0*/ a6, QData/*63:0*/ a7, QData/*63:0*/ s2, QData/*63:0*/ s3, QData/*63:0*/ s4, QData/*63:0*/ s5, QData/*63:0*/ s6, QData/*63:0*/ s7, QData/*63:0*/ s8, QData/*63:0*/ s9, QData/*63:0*/ s10, QData/*63:0*/ a11, QData/*63:0*/ t3, QData/*63:0*/ t4, QData/*63:0*/ t5, QData/*63:0*/ t6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__difftest_dut_regs_TOP\n"); );
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

VL_INLINE_OPT void Vysyx_22040228___024root___sequent__TOP__2(Vysyx_22040228___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040228___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*3:0*/ __Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v0;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v0;
    CData/*3:0*/ __Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v1;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v1;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v2;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v2;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v3;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v4;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v5;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v6;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v7;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v8;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v9;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v10;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v11;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v12;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v13;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v14;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v15;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v16;
    CData/*3:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v17;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v33;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v33;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v34;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v34;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v0;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v1;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v2;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v3;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v4;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v5;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v6;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v7;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v8;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v9;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v10;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v11;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v12;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v13;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v14;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v15;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v16;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v17;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v18;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v19;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v20;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v21;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v22;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v23;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v24;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v25;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v26;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v27;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v28;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v29;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v30;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v31;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v32;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v33;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v34;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v35;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v36;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v37;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v38;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v39;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v40;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v41;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v42;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v43;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v44;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v45;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v46;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v47;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v48;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v49;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v50;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v51;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v52;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v53;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v54;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v55;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v56;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v57;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v58;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v59;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v60;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v61;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v62;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v63;
    CData/*2:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v64;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0;
    VlWide<8>/*255:0*/ __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand;
    VlWide<4>/*127:0*/ __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand;
    VlWide<5>/*159:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<5>/*159:0*/ __Vtemp63;
    VlWide<5>/*159:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<5>/*159:0*/ __Vtemp70;
    VlWide<3>/*95:0*/ __Vtemp72;
    VlWide<3>/*95:0*/ __Vtemp73;
    VlWide<5>/*159:0*/ __Vtemp75;
    VlWide<5>/*159:0*/ __Vtemp76;
    VlWide<5>/*159:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<5>/*159:0*/ __Vtemp85;
    VlWide<5>/*159:0*/ __Vtemp87;
    VlWide<3>/*95:0*/ __Vtemp91;
    VlWide<5>/*159:0*/ __Vtemp92;
    VlWide<3>/*95:0*/ __Vtemp94;
    VlWide<3>/*95:0*/ __Vtemp95;
    VlWide<5>/*159:0*/ __Vtemp97;
    VlWide<5>/*159:0*/ __Vtemp98;
    VlWide<4>/*127:0*/ __Vtemp108;
    VlWide<8>/*255:0*/ __Vtemp109;
    VlWide<6>/*191:0*/ __Vtemp110;
    VlWide<8>/*255:0*/ __Vtemp111;
    VlWide<6>/*191:0*/ __Vtemp112;
    VlWide<8>/*255:0*/ __Vtemp113;
    VlWide<4>/*127:0*/ __Vtemp126;
    VlWide<4>/*127:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<4>/*127:0*/ __Vtemp141;
    VlWide<4>/*127:0*/ __Vtemp146;
    VlWide<4>/*127:0*/ __Vtemp222;
    VlWide<4>/*127:0*/ __Vtemp241;
    VlWide<4>/*127:0*/ __Vtemp260;
    VlWide<4>/*127:0*/ __Vtemp267;
    VlWide<3>/*95:0*/ __Vtemp268;
    VlWide<4>/*127:0*/ __Vtemp269;
    VlWide<3>/*95:0*/ __Vtemp270;
    VlWide<4>/*127:0*/ __Vtemp271;
    QData/*63:0*/ __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc;
    QData/*63:0*/ __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc;
    QData/*63:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32;
    QData/*63:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v33;
    QData/*63:0*/ __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v34;
    QData/*63:0*/ __Vtemp266;
    // Body
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[1U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[1U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[3U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[3U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[5U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[5U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[7U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[7U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc;
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc;
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr;
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr;
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena;
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena;
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid__v0 = 0U;
    vlSelf->__Vdly__ysyx_22040228__DOT__data_cache3__DOT__counter 
        = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter;
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[0U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[0U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[1U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[1U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[2U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[2U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[3U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[3U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[0U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[0U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[1U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[1U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[2U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[2U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[3U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[3U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[4U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[4U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[5U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[5U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[6U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[6U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[7U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[7U];
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram__v0 = 0U;
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U];
    __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode;
    __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32 = 0U;
    __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v33 = 0U;
    __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v34 = 0U;
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu_inst_addr 
        = vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr;
    __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0 = 0U;
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__dividend_t = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__divider_t = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[3U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[4U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sign = 0U;
    } else if ((0U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter))) {
        if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__dr_ready) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter)));
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish = 0U;
            if ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sigin_inst) 
                  & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata 
                             >> 0x3fU))) & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata 
                                                    >> 0x3fU)))) {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__dividend_t 
                    = (1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata));
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__divider_t 
                    = (1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata));
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sign = 0U;
            } else if (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sigin_inst) 
                        & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata 
                                   >> 0x3fU)))) {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__dividend_t 
                    = (1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata));
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sign = 1U;
            } else if (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sigin_inst) 
                        & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata 
                                   >> 0x3fU)))) {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__divider_t 
                    = (1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata));
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sign = 1U;
            } else {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__divider_t 
                    = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata;
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__dividend_t 
                    = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata;
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sign = 0U;
            }
        }
    } else if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter)));
        VL_EXTEND_WQ(129,64, __Vtemp59, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__dividend_t);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U] 
            = __Vtemp59[0U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[1U] 
            = __Vtemp59[1U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[2U] 
            = __Vtemp59[2U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[3U] 
            = __Vtemp59[3U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[4U] 
            = __Vtemp59[4U];
        VL_EXTEND_WQ(65,64, __Vtemp60, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__divider_t);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b[0U] 
            = __Vtemp60[0U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b[1U] 
            = __Vtemp60[1U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b[2U] 
            = __Vtemp60[2U];
    } else if ((0x42U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish = 1U;
    } else if ((0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter)));
        __Vtemp63[1U] = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U] 
                          >> 0x1fU) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[1U] 
                                       << 1U));
        __Vtemp63[2U] = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[1U] 
                          >> 0x1fU) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[2U] 
                                       << 1U));
        __Vtemp63[3U] = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[2U] 
                          >> 0x1fU) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[3U] 
                                       << 1U));
        __Vtemp63[4U] = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[3U] 
                         >> 0x1fU);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U] 
            = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U] 
               << 1U);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[1U] 
            = __Vtemp63[1U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[2U] 
            = __Vtemp63[2U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[3U] 
            = __Vtemp63[3U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[4U] 
            = __Vtemp63[4U];
        __Vtemp69[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[2U];
        __Vtemp69[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[3U];
        __Vtemp69[2U] = (1U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[4U]);
        __Vtemp70[0U] = 1U;
        __Vtemp70[1U] = 0U;
        __Vtemp70[2U] = 0U;
        __Vtemp70[3U] = 0U;
        __Vtemp70[4U] = 0U;
        __Vtemp72[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[2U];
        __Vtemp72[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[3U];
        __Vtemp72[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[4U];
        VL_SUB_W(3, __Vtemp73, __Vtemp72, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b);
        __Vtemp75[0U] = (IData)((((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U]))));
        __Vtemp75[1U] = (IData)(((((QData)((IData)(
                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U]))) 
                                 >> 0x20U));
        __Vtemp75[2U] = __Vtemp73[0U];
        __Vtemp75[3U] = __Vtemp73[1U];
        __Vtemp75[4U] = (1U & __Vtemp73[2U]);
        VL_ADD_W(5, __Vtemp76, __Vtemp70, __Vtemp75);
        if (VL_GTE_W(3, __Vtemp69, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b)) {
            __Vtemp65[1U] = __Vtemp76[1U];
            __Vtemp65[2U] = __Vtemp76[2U];
            __Vtemp65[3U] = __Vtemp76[3U];
            __Vtemp65[4U] = (1U & __Vtemp76[4U]);
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U] 
                = __Vtemp76[0U];
        } else {
            __Vtemp65[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[1U];
            __Vtemp65[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[2U];
            __Vtemp65[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[3U];
            __Vtemp65[4U] = (1U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[4U]);
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U] 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U];
        }
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[1U] 
            = __Vtemp65[1U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[2U] 
            = __Vtemp65[2U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[3U] 
            = __Vtemp65[3U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[4U] 
            = __Vtemp65[4U];
    }
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v64 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v65 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v66 = 0U;
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__dividend_t = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__divider_t = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[3U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[4U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sign = 0U;
    } else if ((0U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter))) {
        if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__dr_ready) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter)));
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish = 0U;
            if ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sigin_inst) 
                  & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata 
                             >> 0x3fU))) & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata 
                                                    >> 0x3fU)))) {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__dividend_t 
                    = (1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata));
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__divider_t 
                    = (1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata));
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sign = 0U;
            } else if (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sigin_inst) 
                        & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata 
                                   >> 0x3fU)))) {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__dividend_t 
                    = (1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata));
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sign = 1U;
            } else if (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sigin_inst) 
                        & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata 
                                   >> 0x3fU)))) {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__divider_t 
                    = (1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata));
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sign = 1U;
            } else {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__divider_t 
                    = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata;
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__dividend_t 
                    = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata;
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sign = 0U;
            }
        }
    } else if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter)));
        VL_EXTEND_WQ(129,64, __Vtemp81, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__dividend_t);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U] 
            = __Vtemp81[0U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[1U] 
            = __Vtemp81[1U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[2U] 
            = __Vtemp81[2U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[3U] 
            = __Vtemp81[3U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[4U] 
            = __Vtemp81[4U];
        VL_EXTEND_WQ(65,64, __Vtemp82, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__divider_t);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b[0U] 
            = __Vtemp82[0U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b[1U] 
            = __Vtemp82[1U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b[2U] 
            = __Vtemp82[2U];
    } else if ((0x42U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish = 1U;
    } else if ((0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter)));
        __Vtemp85[1U] = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U] 
                          >> 0x1fU) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[1U] 
                                       << 1U));
        __Vtemp85[2U] = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[1U] 
                          >> 0x1fU) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[2U] 
                                       << 1U));
        __Vtemp85[3U] = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[2U] 
                          >> 0x1fU) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[3U] 
                                       << 1U));
        __Vtemp85[4U] = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[3U] 
                         >> 0x1fU);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U] 
            = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U] 
               << 1U);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[1U] 
            = __Vtemp85[1U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[2U] 
            = __Vtemp85[2U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[3U] 
            = __Vtemp85[3U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[4U] 
            = __Vtemp85[4U];
        __Vtemp91[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[2U];
        __Vtemp91[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[3U];
        __Vtemp91[2U] = (1U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[4U]);
        __Vtemp92[0U] = 1U;
        __Vtemp92[1U] = 0U;
        __Vtemp92[2U] = 0U;
        __Vtemp92[3U] = 0U;
        __Vtemp92[4U] = 0U;
        __Vtemp94[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[2U];
        __Vtemp94[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[3U];
        __Vtemp94[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[4U];
        VL_SUB_W(3, __Vtemp95, __Vtemp94, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b);
        __Vtemp97[0U] = (IData)((((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U]))));
        __Vtemp97[1U] = (IData)(((((QData)((IData)(
                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U]))) 
                                 >> 0x20U));
        __Vtemp97[2U] = __Vtemp95[0U];
        __Vtemp97[3U] = __Vtemp95[1U];
        __Vtemp97[4U] = (1U & __Vtemp95[2U]);
        VL_ADD_W(5, __Vtemp98, __Vtemp92, __Vtemp97);
        if (VL_GTE_W(3, __Vtemp91, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b)) {
            __Vtemp87[1U] = __Vtemp98[1U];
            __Vtemp87[2U] = __Vtemp98[2U];
            __Vtemp87[3U] = __Vtemp98[3U];
            __Vtemp87[4U] = (1U & __Vtemp98[4U]);
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U] 
                = __Vtemp98[0U];
        } else {
            __Vtemp87[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[1U];
            __Vtemp87[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[2U];
            __Vtemp87[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[3U];
            __Vtemp87[4U] = (1U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[4U]);
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U] 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U];
        }
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[1U] 
            = __Vtemp87[1U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[2U] 
            = __Vtemp87[2U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[3U] 
            = __Vtemp87[3U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[4U] 
            = __Vtemp87[4U];
    }
    __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v0 = 0U;
    __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v1 = 0U;
    __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v2 = 0U;
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__clean_temp 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__clean_temp;
    __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v0 = 0U;
    __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v1 = 0U;
    __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v1 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v64 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v65 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v66 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v64 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v65 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v66 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v64 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v65 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v66 = 0U;
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[0U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[0U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[1U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[1U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[2U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[2U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[3U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[3U];
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst;
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst;
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__i = 0x20U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__j = 0x40U;
    }
    if (((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__icache_if_shankhand) 
         & (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid))) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i = 0x40U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__i = 0x40U;
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_re) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_we)) 
                & (IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_finish))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__i = 0x40U;
    }
    if ((0x100073U == ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst))) {
        Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__difftest_dut_pc_TOP(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data, (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena), 0U);
    } else if ((0x100073U == ((IData)(vlSelf->rst) ? 0U
                               : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst))) {
        Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__difftest_dut_pc_TOP(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data, (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena), 0U);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite)))) {
            if (vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread) {
                vlSelf->ysyx_22040228__DOT__arbitrate_i_data 
                    = vlSelf->ysyx_22040228__DOT__t_axi_r_data;
            } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite)))) {
                    vlSelf->ysyx_22040228__DOT__arbitrate_i_data = 0ULL;
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_addr_reg = 0ULL;
        vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_data_reg = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_addr_reg 
            = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[4U])));
        vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_data_reg 
            = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_data[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_data[4U])));
    }
    if (vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread) {
        vlSelf->ysyx_22040228__DOT__arbitrate_d_data 
            = vlSelf->ysyx_22040228__DOT__t_axi_r_data;
    } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite)))) {
                    vlSelf->ysyx_22040228__DOT__arbitrate_d_data = 0ULL;
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_data_reg = 0ULL;
        vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_addr_reg = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_data_reg 
            = ((IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__aw_shankhand)
                ? (((QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_data[0U])))
                : 0ULL);
        vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_addr_reg 
            = ((IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__aw_shankhand)
                ? (((QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[0U])))
                : 0ULL);
    }
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__delay_oclk 
        = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_success;
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread)))) {
                    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite 
                        = vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite;
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread)))) {
                if (vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread) {
                    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread = 1U;
                } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite)))) {
                    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread = 0U;
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite)))) {
            if (vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread) {
                vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread = 1U;
            } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite)))) {
                    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread = 0U;
                }
            }
        }
    }
    if (vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread) {
        vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread = 1U;
    } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite)))) {
                    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread = 0U;
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread)))) {
        if (vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite) {
            vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite = 1U;
        } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite)))) {
                    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite = 0U;
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state = 0U;
        vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state = 0U;
        vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_aw_id = 0U;
        vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_ar_id = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state 
            = vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state_nxt;
        vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state 
            = vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state_nxt;
        vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_aw_id 
            = (0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id) 
                       >> 8U));
        vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_ar_id 
            = (0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id) 
                       >> 8U));
    }
    vlSelf->ysyx_22040228__DOT__clint6__DOT__timeraw_id_temp 
        = (0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw)
                    ? ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id) 
                       >> 4U) : ((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_b)
                                  ? 0U : (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timeraw_id_temp))));
    vlSelf->ysyx_22040228__DOT__clint6__DOT__read_csrdata_temp 
        = ((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
             >> 1U) & (0x200bff8ULL == (((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))))
            ? vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime
            : ((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                 >> 1U) & (0x2004000ULL == (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))))
                ? vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp
                : ((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_r)
                    ? 0ULL : vlSelf->ysyx_22040228__DOT__clint6__DOT__read_csrdata_temp)));
    vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state_n));
    vlSelf->ysyx_22040228__DOT__clint6__DOT__timerar_id_temp 
        = (0xfU & ((2U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid))
                    ? ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id) 
                       >> 4U) : ((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_r)
                                  ? 0U : (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timerar_id_temp))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state = 0U;
        vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state = 0U;
        vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst = 0U;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh = 1U;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl = 1U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state 
            = vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state_n;
        vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state 
            = vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state_nxt;
        vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state 
            = vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state_nxt;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst
                : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_inst
                    : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_inst
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst
                : (((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_inst
                    : (((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_inst
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst
                : (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_inst
                    : (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_inst
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data
                : (((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2
                    : (((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2
                        : 0ULL)));
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread)))) {
                vlSelf->ysyx_22040228__DOT__uncache_arb_finish 
                    = ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread) 
                       | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite));
            }
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc = 0ULL;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc = 0ULL;
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena)) 
                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena))) {
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc = 0ULL;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc = 0ULL;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[1U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[3U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[5U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[7U] = 0U;
    } else if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__should_updata) {
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[0U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[1U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[1U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[2U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[3U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[3U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[4U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[5U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[5U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[6U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[7U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[7U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc = 0ULL;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc = 0ULL;
    } else if ((1U & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                      & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2))))) {
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc 
            = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U])));
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc 
            = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U])));
        __Vtemp108[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U];
        __Vtemp108[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[5U];
        __Vtemp108[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U];
        __Vtemp108[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[7U];
        VL_EXTEND_WW(256,128, __Vtemp109, __Vtemp108);
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U] 
            = __Vtemp109[0U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[1U] 
            = __Vtemp109[1U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U] 
            = __Vtemp109[2U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[3U] 
            = __Vtemp109[3U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U] 
            = __Vtemp109[4U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[5U] 
            = __Vtemp109[5U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U] 
            = __Vtemp109[6U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[7U] 
            = __Vtemp109[7U];
    } else if (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2))) {
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_trap)
                ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc);
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc 
            = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U])));
        __Vtemp110[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U];
        __Vtemp110[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[3U];
        __Vtemp110[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U];
        __Vtemp110[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[5U];
        __Vtemp110[4U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U];
        __Vtemp110[5U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[7U];
        VL_EXTEND_WW(256,192, __Vtemp111, __Vtemp110);
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U] 
            = __Vtemp111[0U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[1U] 
            = __Vtemp111[1U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U] 
            = __Vtemp111[2U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[3U] 
            = __Vtemp111[3U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U] 
            = __Vtemp111[4U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[5U] 
            = __Vtemp111[5U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U] 
            = __Vtemp111[6U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[7U] 
            = __Vtemp111[7U];
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1) 
                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2)))) {
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_trap)
                ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc);
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc 
            = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U])));
        __Vtemp112[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U];
        __Vtemp112[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[3U];
        __Vtemp112[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U];
        __Vtemp112[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[5U];
        __Vtemp112[4U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U];
        __Vtemp112[5U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[7U];
        VL_EXTEND_WW(256,192, __Vtemp113, __Vtemp112);
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U] 
            = __Vtemp113[0U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[1U] 
            = __Vtemp113[1U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U] 
            = __Vtemp113[2U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[3U] 
            = __Vtemp113[3U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U] 
            = __Vtemp113[4U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[5U] 
            = __Vtemp113[5U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U] 
            = __Vtemp113[6U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[7U] 
            = __Vtemp113[7U];
    } else {
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc;
    }
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__aw_enable 
        = (IData)(((0U == (1U & (IData)(vlSelf->rst))) 
                   & ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                       ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready)
                       : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                           ? ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready) 
                              >> 1U) : (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready)) 
                                        >> 2U)))));
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite)))) {
            if (vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread) {
                vlSelf->ysyx_22040228__DOT__arbitrate_i_ok = 1U;
            } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite)))) {
                    vlSelf->ysyx_22040228__DOT__arbitrate_i_ok = 0U;
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state = 4U;
        vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state = 1U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_pc = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_pc = 0ULL;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state 
            = vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state_n;
        vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state 
            = vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state_nxt;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_pc 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_pc
                : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc
                    : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc
                        : 0ULL)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_pc 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_pc
                : (((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc
                    : (((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc
                        : 0ULL)));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req)
                ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr)
                : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_addr)
                    : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_addr)
                        : 0U)));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy)
                ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr)
                : (((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_addr)
                    : (((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_addr)
                        : 0U)));
    }
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req)
                                        ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena)
                                        : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                                            & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                                            ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_ena)
                                            : (((2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                                                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_ena)))));
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy)
                                        ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena)
                                        : (((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                                            & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                                            ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_ena)
                                            : (((4U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                                                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_ena)))));
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_w_ok 
        = (2U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_ena 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req)
                                        ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_ena)
                                        : (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                                            & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                                            ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_ena)
                                            : (((1U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                                                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_ena)))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mscrstch = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcycle = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mscrstch 
            = (((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data
                : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mscrstch);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base 
            = (0x3fffffffffffffffULL & (((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))
                                         ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                            >> 2U) : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcycle 
            = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en) 
                & (0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data
                : (1ULL + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcycle));
    }
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_ 
        = ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw) 
           | ((~ ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok))) 
              & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_)));
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_ 
        = ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr) 
           | ((~ ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok))) 
              & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_ena)
                                         ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpp_nxt)
                                         : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_ena)
                                        ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_nxt)
                                        : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie)));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs 
            = (3U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                      ? (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                 >> 0xdU)) : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs)));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req)
                ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr)
                : (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_addr)
                    : (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_addr)
                        : 0U)));
    }
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__fence_counter 
        = ((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
            ? (0x7fU & ((0x40U <= (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__fence_counter))
                         ? (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__fence_counter)
                         : ((IData)(1U) + (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__fence_counter))))
            : 0U);
    if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_ena_i) {
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid__v0 
            = (0xa8U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode));
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid__v0 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_addr_i;
    }
    if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_ena_i) {
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid__v0 
            = (0xa8U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode));
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid__v0 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_addr_i;
    }
    if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__tteg_ena_i) {
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid__v0 
            = (0xa8U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode));
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid__v0 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i;
    }
    if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_ena_i) {
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid__v0 
            = (0xa8U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode));
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid__v0 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__mult_valid) {
        if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler))) {
            __Vtemp129[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U];
            __Vtemp129[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U];
            __Vtemp129[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U];
            __Vtemp129[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U];
        } else {
            __Vtemp129[0U] = 0U;
            __Vtemp129[1U] = 0U;
            __Vtemp129[2U] = 0U;
            __Vtemp129[3U] = 0U;
        }
        VL_ADD_W(4, __Vtemp126, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp, __Vtemp129);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U] 
            = __Vtemp126[0U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U] 
            = __Vtemp126[1U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[2U] 
            = __Vtemp126[2U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[3U] 
            = __Vtemp126[3U];
    } else if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[3U] = 0U;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__mult_valid) {
        if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler))) {
            __Vtemp133[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U];
            __Vtemp133[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U];
            __Vtemp133[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U];
            __Vtemp133[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U];
        } else {
            __Vtemp133[0U] = 0U;
            __Vtemp133[1U] = 0U;
            __Vtemp133[2U] = 0U;
            __Vtemp133[3U] = 0U;
        }
        VL_ADD_W(4, __Vtemp130, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp, __Vtemp133);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U] 
            = __Vtemp130[0U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U] 
            = __Vtemp130[1U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[2U] 
            = __Vtemp130[2U];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[3U] 
            = __Vtemp130[3U];
    } else if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[3U] = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread)))) {
                if (vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread) {
                    vlSelf->ysyx_22040228__DOT__uncache_arb_data_o 
                        = vlSelf->ysyx_22040228__DOT__t_axi_r_data;
                } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite)))) {
                    vlSelf->ysyx_22040228__DOT__uncache_arb_data_o = 0ULL;
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mepc = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause 
            = ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause_nxt
                : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mepc 
            = (((((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en)) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))
                ? (0xfffffffffffffffcULL & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data)
                : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mepc);
    }
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_ok 
        = (2U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req)
                                         ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)
                                         : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                                             & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                                             ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode)
                                             : (((2U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                                                 & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                                                 ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode)
                                                 : 0U))));
    if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_ena_i) {
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram__v0 
            = ((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                ? 0U : (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                             >> 9U))));
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram__v0 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_addr_i;
    }
    if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_ena_i) {
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram__v0 
            = ((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                ? 0U : (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                             >> 9U))));
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram__v0 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_addr_i;
    }
    if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__tteg_ena_i) {
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram__v0 
            = ((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                ? 0U : (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                             >> 0xaU))));
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram__v0 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i;
    }
    if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_ena_i) {
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram__v0 
            = ((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                ? 0U : (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                             >> 0xaU))));
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram__v0 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i;
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U] = 0U;
    } else if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__mult_valid) {
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U] 
            = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U] 
               << 1U);
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U] 
            = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U] 
                >> 0x1fU) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U] 
                             << 1U));
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U] 
            = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U] 
                >> 0x1fU) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U] 
                             << 1U));
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U] 
            = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U] 
                >> 0x1fU) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U] 
                             << 1U));
    } else if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready) {
        VL_EXTEND_WQ(128,64, __Vtemp141, ((1U & (IData)(
                                                        (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                         >> 0x3fU)))
                                           ? (1ULL 
                                              + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data))
                                           : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data));
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U] 
            = __Vtemp141[0U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U] 
            = __Vtemp141[1U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U] 
            = __Vtemp141[2U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U] 
            = __Vtemp141[3U];
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U] = 0U;
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U] = 0U;
    } else if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__mult_valid) {
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U] 
            = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U] 
               << 1U);
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U] 
            = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U] 
                >> 0x1fU) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U] 
                             << 1U));
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U] 
            = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U] 
                >> 0x1fU) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U] 
                             << 1U));
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U] 
            = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U] 
                >> 0x1fU) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U] 
                             << 1U));
    } else if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready) {
        VL_EXTEND_WQ(128,64, __Vtemp146, ((1U & (IData)(
                                                        (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                         >> 0x3fU)))
                                           ? (1ULL 
                                              + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))
                                           : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data));
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U] 
            = __Vtemp146[0U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U] 
            = __Vtemp146[1U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U] 
            = __Vtemp146[2U];
        __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U] 
            = __Vtemp146[3U];
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__mult_valid) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler 
            = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler 
               >> 1U);
    } else if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler 
            = ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                              >> 0x3fU))) ? (1ULL + 
                                             (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))
                : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data);
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__mult_valid) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler 
            = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler 
               >> 1U);
    } else if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler 
            = ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                              >> 0x3fU))) ? (1ULL + 
                                             (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
                : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data);
    }
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req)
                                         ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)
                                         : (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                                             & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                                             ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode)
                                             : (((1U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                                                 & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                                                 ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode)
                                                 : 0U))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_timer_init));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter = 4U;
    } else if (vlSelf->ysyx_22040228__DOT__i_cache_inst_valid) {
        vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter 
            = (((IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena))
                ? ((0xcU == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc)))
                    ? 1U : ((8U == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc)))
                             ? 2U : ((4U == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc)))
                                      ? 3U : 4U))) : 
               (((IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena))
                 ? ((0xcU == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc)))
                     ? 1U : ((8U == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc)))
                              ? 2U : ((4U == (0xfU 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc)))
                                       ? 3U : 4U)))
                 : (((IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid) 
                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena))
                     ? ((0xcU == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc)))
                         ? 1U : ((8U == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc)))
                                  ? 2U : ((4U == (0xfU 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc)))
                                           ? 3U : 4U)))
                     : (((IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid) 
                         & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp_ena))
                         ? ((0xcU == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp)))
                             ? 1U : ((8U == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp)))
                                      ? 2U : ((4U == 
                                               (0xfU 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp)))
                                               ? 3U
                                               : 4U)))
                         : (((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1) 
                               | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2)) 
                              | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3)) 
                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena4))
                             ? ((0U == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc)))
                                 ? 4U : ((4U == (0xfU 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc)))
                                          ? 3U : ((8U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc)))
                                                   ? 2U
                                                   : 
                                                  ((0xcU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc)))
                                                    ? 1U
                                                    : 4U))))
                             : ((0xcU == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp)))
                                 ? 1U : ((8U == (0xfU 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp)))
                                          ? 2U : ((4U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp)))
                                                   ? 3U
                                                   : 4U))))))));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req)
                                           ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc
                                           : (((1U 
                                                == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                                               & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                                               ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc
                                               : ((
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                                                   & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc
                                                   : 0ULL))));
    if (vlSelf->rst) {
        __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v0 = 1U;
    } else {
        if (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena) 
             & (0U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr)))) {
            __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara;
            __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32 = 1U;
            __Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr;
        }
        if (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena) 
             & (0U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr)))) {
            __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v33 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara;
            __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v33 = 1U;
            __Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v33 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr;
        }
        if (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena) 
             & (0U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr)))) {
            __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v34 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara;
            __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v34 = 1U;
            __Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v34 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr;
        }
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie 
        = (1U & ((~ (IData)(vlSelf->rst)) & (((0x304U 
                                               == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))
                                              ? (IData)(
                                                        (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                                         >> 7U))
                                              : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit 
        = (1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__mult_valid)
                  ? ((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                              >> 0x3fU)) ^ (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                    >> 0x3fU)))
                  : ((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                              >> 0x3fU)) ^ (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                    >> 0x3fU)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_ena)
                                        ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mie_nxt)
                                        : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit 
        = (1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__mult_valid)
                  ? ((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                              >> 0x3fU)) ^ (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                    >> 0x3fU)))
                  : ((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                              >> 0x3fU)) ^ (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                    >> 0x3fU)))));
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu_inst_addr 
        = ((IData)(vlSelf->rst) ? 0x80000000ULL : ((IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid)
                                                    ? 
                                                   (((IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid) 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena))
                                                     ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc
                                                     : 
                                                    (((IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid) 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena))
                                                      ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc
                                                      : 
                                                     (((IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid) 
                                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena))
                                                       ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc
                                                       : 
                                                      (((IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid) 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp_ena))
                                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp
                                                        : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp))))
                                                    : vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__read_ok 
        = (0x20U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_type = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_type 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req)
                ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_type)
                : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type)
                    : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type)
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data
                : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1
                    : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1
                        : 0ULL)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data
                : (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1
                    : (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1
                        : 0ULL)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data
                : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2
                    : (((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2
                        : 0ULL)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy)
                ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type)
                : (((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type)
                    : (((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type)
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data
                : (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2
                    : (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2
                        : 0ULL)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req)
                ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type)
                : (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                    ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type)
                    : (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                        ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type)
                        : 0U)));
    }
    if ((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
          & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t)) 
         | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
            & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t)))) {
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0[0U] 
            = (((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                  ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[0U]
                  : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                      & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                      ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U]
                      : 0U)) & (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                 ? 0xffffffffU : ((
                                                   (8U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                   ? 0xffffffffU
                                                   : 0U))) 
               | (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                     >> 4U)))][0U] 
                  & (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                         ? 0xffffffffU : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                           ? 0xffffffffU
                                           : 0U)))));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0[1U] 
            = (((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                  ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[1U]
                  : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                      & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                      ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U]
                      : 0U)) & (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                 ? 0xffffffffU : ((
                                                   (8U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                   ? 0xffffffffU
                                                   : 0U))) 
               | (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                     >> 4U)))][1U] 
                  & (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                         ? 0xffffffffU : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                           ? 0xffffffffU
                                           : 0U)))));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0[2U] 
            = (((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                  ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[2U]
                  : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                      & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                      ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U]
                      : 0U)) & (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                 ? 0xffffffffU : ((
                                                   (8U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                   ? 0xffffffffU
                                                   : 0U))) 
               | (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                     >> 4U)))][2U] 
                  & (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                         ? 0xffffffffU : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                           ? 0xffffffffU
                                           : 0U)))));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0[3U] 
            = (((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                  ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[3U]
                  : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                      & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                      ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U]
                      : 0U)) & (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                 ? 0xffffffffU : ((
                                                   (8U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                   ? 0xffffffffU
                                                   : 0U))) 
               | (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                     >> 4U)))][3U] 
                  & (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                         ? 0xffffffffU : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                           ? 0xffffffffU
                                           : 0U)))));
        __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                >> 4U)));
    }
    if ((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
          & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t)) 
         | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
            & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t)))) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[0U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                               >> 4U)))][0U];
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[1U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                               >> 4U)))][1U];
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[2U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                               >> 4U)))][2U];
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[3U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                               >> 4U)))][3U];
    }
    if ((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
          & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o)) 
         | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
            & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o)))) {
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0[0U] 
            = (((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                  ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[0U]
                  : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                      & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                      ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U]
                      : 0U)) & (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                 ? 0xffffffffU : ((
                                                   (8U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                   ? 0xffffffffU
                                                   : 0U))) 
               | (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                     >> 4U)))][0U] 
                  & (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                         ? 0xffffffffU : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                           ? 0xffffffffU
                                           : 0U)))));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0[1U] 
            = (((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                  ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[1U]
                  : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                      & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                      ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U]
                      : 0U)) & (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                 ? 0xffffffffU : ((
                                                   (8U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                   ? 0xffffffffU
                                                   : 0U))) 
               | (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                     >> 4U)))][1U] 
                  & (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                         ? 0xffffffffU : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                           ? 0xffffffffU
                                           : 0U)))));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0[2U] 
            = (((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                  ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[2U]
                  : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                      & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                      ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U]
                      : 0U)) & (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                 ? 0xffffffffU : ((
                                                   (8U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                   ? 0xffffffffU
                                                   : 0U))) 
               | (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                     >> 4U)))][2U] 
                  & (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                         ? 0xffffffffU : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                           ? 0xffffffffU
                                           : 0U)))));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0[3U] 
            = (((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                  ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[3U]
                  : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                      & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                      ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U]
                      : 0U)) & (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                 ? 0xffffffffU : ((
                                                   (8U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                   ? 0xffffffffU
                                                   : 0U))) 
               | (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                     >> 4U)))][3U] 
                  & (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                         ? 0xffffffffU : (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                           ? 0xffffffffU
                                           : 0U)))));
        __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                >> 4U)));
    }
    if ((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
          & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o)) 
         | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
            & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o)))) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[0U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                               >> 4U)))][0U];
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[1U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                               >> 4U)))][1U];
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[2U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                               >> 4U)))][2U];
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[3U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                               >> 4U)))][3U];
    }
    if (((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
          ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena)
          : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
              ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                 & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                      == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                               >> 9U)))) 
                     & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                    | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                        == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                 >> 9U)))) 
                       & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))
              : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena))))) {
        VL_EXTEND_WQ(128,64, __Vtemp222, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
        VL_EXTEND_WQ(128,64, __Vtemp241, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
        __Vtemp260[0U] = ((((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                             ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[0U]
                             : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                 ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[0U]
                                 : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                     ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[0U]
                                     : 0U))) & ((0x10U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                                 ? 
                                                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U]
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                  ? 
                                                 ((4U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                   ? 
                                                  (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                 >> 9U)))) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                                    ? 
                                                   __Vtemp222[0U]
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                   ? 
                                                  vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U]
                                                   : 0U)))) 
                          | (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram
                             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                >> 3U)))][0U] 
                             & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U]
                                    : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                            ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                                ? __Vtemp241[0U]
                                                : 0U)
                                            : 0U) : 
                                       ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                         ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U]
                                         : 0U))))));
        __Vtemp260[1U] = ((((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                             ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[1U]
                             : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                 ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[1U]
                                 : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                     ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[1U]
                                     : 0U))) & ((0x10U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                                 ? 
                                                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U]
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                  ? 
                                                 ((4U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                   ? 
                                                  (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                 >> 9U)))) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                                    ? 
                                                   __Vtemp222[1U]
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                   ? 
                                                  vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U]
                                                   : 0U)))) 
                          | (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram
                             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                >> 3U)))][1U] 
                             & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U]
                                    : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                            ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                                ? __Vtemp241[1U]
                                                : 0U)
                                            : 0U) : 
                                       ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                         ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U]
                                         : 0U))))));
        __Vtemp260[2U] = ((((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                             ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[2U]
                             : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                 ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[2U]
                                 : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                     ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[2U]
                                     : 0U))) & ((0x10U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                                 ? 
                                                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U]
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                  ? 
                                                 ((4U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                   ? 
                                                  (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                 >> 9U)))) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                                    ? 
                                                   __Vtemp222[2U]
                                                    : 
                                                   (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                      == 
                                                      (0x7fffffU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                  >> 9U)))) 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                                     ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection)
                                                     : 0U))
                                                   : 0U)
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                   ? 
                                                  vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[2U]
                                                   : 0U)))) 
                          | (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram
                             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                >> 3U)))][2U] 
                             & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U]
                                    : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                            ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                                ? __Vtemp241[2U]
                                                : (
                                                   ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                 >> 9U)))) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                                    ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection)
                                                    : 0U))
                                            : 0U) : 
                                       ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                         ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[2U]
                                         : 0U))))));
        __Vtemp260[3U] = ((((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                             ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[3U]
                             : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                 ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[3U]
                                 : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                     ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[3U]
                                     : 0U))) & ((0x10U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                                 ? 
                                                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U]
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                  ? 
                                                 ((4U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                   ? 
                                                  (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                 >> 9U)))) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                                    ? 
                                                   __Vtemp222[3U]
                                                    : 
                                                   (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                      == 
                                                      (0x7fffffU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                  >> 9U)))) 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                                     ? (IData)(
                                                               (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection 
                                                                >> 0x20U))
                                                     : 0U))
                                                   : 0U)
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                   ? 
                                                  vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[3U]
                                                   : 0U)))) 
                          | (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram
                             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                >> 3U)))][3U] 
                             & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U]
                                    : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                            ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                                ? __Vtemp241[3U]
                                                : (
                                                   ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                 >> 9U)))) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection 
                                                               >> 0x20U))
                                                    : 0U))
                                            : 0U) : 
                                       ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                         ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[3U]
                                         : 0U))))));
        __Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0[0U] 
            = __Vtemp260[0U];
        __Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0[1U] 
            = __Vtemp260[1U];
        __Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0[2U] 
            = __Vtemp260[2U];
        __Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0[3U] 
            = __Vtemp260[3U];
        __Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if (((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
          ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena)
          : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
              ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                 & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                      == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                               >> 9U)))) 
                     & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                    | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                        == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                 >> 9U)))) 
                       & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))
              : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena))))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[0U] 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                               >> 3U)))][0U];
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[1U] 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                               >> 3U)))][1U];
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[2U] 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                               >> 3U)))][2U];
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[3U] 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                               >> 3U)))][3U];
    }
    if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) {
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v0 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__data_jf)
                ? (1U | (0xeU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                         [(0xfU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc 
                                           >> 2U)))]))
                : (0xeU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                   [(0xfU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc 
                                     >> 2U)))]));
        __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v0 = 1U;
        __Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v0 
            = (0xfU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc 
                               >> 2U)));
    } else if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) {
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v1 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__data_jf)
                ? (1U | (0xeU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                         [(0xfU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc 
                                           >> 2U)))]))
                : (0xeU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                   [(0xfU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc 
                                     >> 2U)))]));
        __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v1 = 1U;
        __Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v1 
            = (0xfU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc 
                               >> 2U)));
    } else {
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v2 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [0U];
        __Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v2 = 1U;
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v3 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [1U];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v4 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [2U];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v5 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [3U];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v6 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [4U];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v7 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [5U];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v8 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [6U];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v9 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [7U];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v10 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [8U];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v11 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [9U];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v12 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [0xaU];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v13 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [0xbU];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v14 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [0xcU];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v15 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [0xdU];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v16 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [0xeU];
        __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v17 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
            [0xfU];
    }
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__clean_temp 
        = ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena) 
             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena)) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena)) 
           | ((~ ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                  & ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                     & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_empty)) 
                        | (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                             == (0x3fffffU & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                      >> 0xaU)))) 
                            & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)) 
                           | ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                               == (0x3fffffU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 0xaU)))) 
                              & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))))))) 
              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__clean_temp)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel 
        = ((IData)(vlSelf->rst) ? 0U : (7U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy)
                                               ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)
                                               : ((
                                                   (4U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                                                   & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                                                   ? 
                                                  ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : 
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                    >> 0xcU))
                                                   : 
                                                  (((4U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                                                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                                                    ? 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                     >> 0xcU))
                                                    : 0U)))));
    if ((((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
          & ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
              == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                       >> 0xaU)))) 
             & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r))) 
         | ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o) 
            | (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o)))) {
        __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v0 = 1U;
        __Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                >> 4U)));
    }
    if (((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__icache_if_shankhand) 
         & (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid))) {
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v1 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                    [0U])));
        __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v1 = 1U;
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v2 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [1U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                    [1U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v3 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [2U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                    [2U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v4 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [3U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                    [3U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v5 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [4U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                    [4U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v6 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [5U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                    [5U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v7 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [6U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                    [6U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v8 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [7U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                    [7U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v9 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [8U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                    [8U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v10 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [9U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                    [9U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v11 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0xaU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                      [0xaU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v12 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0xbU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                      [0xbU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v13 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0xcU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                      [0xcU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v14 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0xdU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                      [0xdU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v15 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0xeU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                      [0xeU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v16 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0xfU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                      [0xfU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v17 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x10U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v18 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x11U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v19 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x12U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v20 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x13U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v21 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x14U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v22 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x15U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v23 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x16U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v24 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x17U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v25 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x18U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v26 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x19U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v27 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x1aU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v28 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x1bU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v29 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x1cU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v30 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x1dU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v31 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x1eU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v32 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x1fU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v33 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x20U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v34 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x21U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v35 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x22U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v36 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x23U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v37 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x24U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v38 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x25U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v39 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x26U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v40 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x27U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v41 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x28U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v42 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x29U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v43 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x2aU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v44 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x2bU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v45 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x2cU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v46 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x2dU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v47 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x2eU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v48 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x2fU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v49 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x30U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v50 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x31U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v51 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x32U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v52 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x33U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v53 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x34U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v54 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x35U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v55 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x36U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v56 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x37U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v57 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x38U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v58 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x39U])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v59 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x3aU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v60 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x3bU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v61 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x3cU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v62 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x3dU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v63 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x3eU])));
        __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v64 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                       [0x3fU])));
    }
    if ((((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
          & ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
              == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                       >> 0xaU)))) 
             & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))) 
         | ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t) 
            | (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t)))) {
        __Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v0 = 1U;
        __Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                >> 4U)));
    }
    if (((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__icache_if_shankhand) 
         & (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid))) {
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v1 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                    [0U])));
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v1 = 1U;
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v2 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [1U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                    [1U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v3 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [2U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                    [2U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v4 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [3U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                    [3U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v5 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [4U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                    [4U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v6 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [5U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                    [5U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v7 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [6U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                    [6U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v8 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [7U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                    [7U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v9 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [8U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                    [8U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v10 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [9U]) ? 7U : (7U & ((IData)(1U) + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                    [9U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v11 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0xaU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                      [0xaU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v12 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0xbU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                      [0xbU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v13 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0xcU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                      [0xcU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v14 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0xdU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                      [0xdU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v15 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0xeU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                      [0xeU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v16 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0xfU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                      [0xfU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v17 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x10U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v18 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x11U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v19 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x12U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v20 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x13U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v21 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x14U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v22 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x15U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v23 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x16U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v24 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x17U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v25 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x18U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v26 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x19U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v27 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x1aU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v28 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x1bU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v29 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x1cU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v30 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x1dU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v31 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x1eU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v32 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x1fU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v33 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x20U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v34 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x21U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v35 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x22U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v36 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x23U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v37 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x24U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v38 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x25U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v39 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x26U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v40 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x27U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v41 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x28U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v42 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x29U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v43 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x2aU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v44 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x2bU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v45 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x2cU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v46 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x2dU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v47 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x2eU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v48 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x2fU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v49 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x30U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v50 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x31U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v51 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x32U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v52 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x33U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v53 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x34U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v54 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x35U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v55 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x36U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v56 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x37U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v57 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x38U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v58 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x39U])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v59 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x3aU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v60 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x3bU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v61 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x3cU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v62 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x3dU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v63 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x3eU])));
        vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v64 
            = ((7U == vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                       [0x3fU])));
    }
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v0 = 1U;
    } else if (((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                   == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 9U)))))) {
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v64 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v64 
            = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)));
    } else if (((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                   == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 9U)))))) {
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v64 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v64 
            = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)));
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_o) 
                | (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_o))) {
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v65 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v65 
            = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)));
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_t) 
                | (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_t))) {
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v65 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v65 
            = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)));
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                 & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                 [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))]) 
                & (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok))) {
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v66 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v66 
            = (0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter));
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                 & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                 [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))]) 
                & (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok))) {
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v66 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v66 
            = (0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter));
    }
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v0 = 1U;
    } else {
        if (((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
             & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                         >> 9U)))))) {
            vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v64 = 1U;
            vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__counter2__v64 
                = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                    >> 3U)));
        }
        if (((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
             & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                         >> 9U)))))) {
            vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v65 = 1U;
            vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__counter2__v65 
                = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                    >> 3U)));
        }
        if ((((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_re) 
              & (IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_we)) 
             & (IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_finish))) {
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v66 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                        [0U])));
            vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v66 = 1U;
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v67 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [1U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                        [1U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v68 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [2U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                        [2U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v69 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [3U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                        [3U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v70 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [4U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                        [4U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v71 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [5U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                        [5U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v72 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [6U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                        [6U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v73 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [7U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                        [7U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v74 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [8U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                        [8U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v75 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [9U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                        [9U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v76 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0xaU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                          [0xaU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v77 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0xbU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                          [0xbU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v78 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0xcU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                          [0xcU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v79 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0xdU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                          [0xdU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v80 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0xeU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                          [0xeU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v81 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0xfU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                          [0xfU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v82 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x10U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v83 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x11U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v84 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x12U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v85 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x13U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v86 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x14U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v87 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x15U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v88 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x16U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v89 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x17U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v90 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x18U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v91 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x19U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v92 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x1aU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v93 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x1bU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v94 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x1cU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v95 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x1dU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v96 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x1eU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v97 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x1fU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v98 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x20U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v99 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x21U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v100 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x22U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v101 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x23U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v102 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x24U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v103 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x25U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v104 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x26U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v105 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x27U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v106 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x28U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v107 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x29U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v108 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x2aU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v109 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x2bU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v110 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x2cU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v111 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x2dU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v112 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x2eU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v113 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x2fU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v114 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x30U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v115 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x31U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v116 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x32U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v117 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x33U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v118 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x34U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v119 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x35U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v120 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x36U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v121 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x37U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v122 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x38U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v123 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x39U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v124 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x3aU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v125 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x3bU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v126 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x3cU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v127 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x3dU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v128 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x3eU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v129 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                    [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                           [0x3fU])));
        }
    }
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v0 = 1U;
    } else {
        if (((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
             & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                         >> 9U)))))) {
            vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v64 = 1U;
            vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__counter1__v64 
                = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                    >> 3U)));
        }
        if (((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
             & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                         >> 9U)))))) {
            vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v65 = 1U;
            vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__counter1__v65 
                = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                    >> 3U)));
        }
        if ((((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_re) 
              & (IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_we)) 
             & (IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_finish))) {
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v66 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                        [0U])));
            vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v66 = 1U;
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v67 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [1U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                        [1U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v68 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [2U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                        [2U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v69 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [3U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                        [3U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v70 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [4U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                        [4U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v71 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [5U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                        [5U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v72 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [6U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                        [6U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v73 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [7U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                        [7U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v74 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [8U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                        [8U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v75 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [9U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                        [9U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v76 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0xaU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                          [0xaU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v77 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0xbU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                          [0xbU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v78 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0xcU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                          [0xcU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v79 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0xdU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                          [0xdU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v80 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0xeU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                          [0xeU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v81 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0xfU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                          [0xfU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v82 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x10U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v83 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x11U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v84 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x12U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v85 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x13U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v86 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x14U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v87 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x15U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v88 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x16U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v89 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x17U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v90 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x18U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v91 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x19U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v92 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x1aU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v93 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x1bU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v94 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x1cU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v95 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x1dU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v96 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x1eU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v97 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x1fU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v98 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x20U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v99 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x21U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v100 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x22U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v101 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x23U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v102 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x24U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v103 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x25U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v104 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x26U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v105 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x27U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v106 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x28U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v107 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x29U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v108 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x2aU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v109 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x2bU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v110 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x2cU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v111 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x2dU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v112 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x2eU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v113 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x2fU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v114 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x30U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v115 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x31U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v116 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x32U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v117 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x33U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v118 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x34U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v119 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x35U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v120 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x36U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v121 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x37U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v122 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x38U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v123 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x39U])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v124 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x3aU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v125 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x3bU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v126 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x3cU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v127 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x3dU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v128 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x3eU])));
            vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v129 
                = ((7U == vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                    [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                           [0x3fU])));
        }
    }
    __Vtemp266 = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy)
                                                  ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset
                                                  : 
                                                 (((4U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                                                   & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))
                                                   ? 
                                                  ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))))
                                                    ? 
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                                                    + 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__store_addr_offset) 
                                                                             >> 0xbU))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__store_addr_offset))))
                                                    : 0ULL)
                                                   : 
                                                  (((4U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                                                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))
                                                    ? 
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))))
                                                     ? 
                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                                                     + 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__store_addr_offset) 
                                                                              >> 0xbU))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__store_addr_offset))))
                                                     : 0ULL)
                                                    : 0ULL))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
        = __Vtemp266;
    if (vlSelf->rst) {
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst = 0U;
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena)) 
                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena))) {
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[0U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[1U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[2U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[3U] = 0U;
    } else if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__should_updata) {
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[0U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[0U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[1U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[1U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[2U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[2U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[3U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[3U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                      & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2))))) {
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[0U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[1U];
        VL_EXTEND_WQ(128,64, __Vtemp267, (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[2U]))));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[0U] 
            = __Vtemp267[0U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[1U] 
            = __Vtemp267[1U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[2U] 
            = __Vtemp267[2U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[3U] 
            = __Vtemp267[3U];
    } else if (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2))) {
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_trap)
                ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst);
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[0U];
        __Vtemp268[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[1U];
        __Vtemp268[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[2U];
        __Vtemp268[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[3U];
        VL_EXTEND_WW(128,96, __Vtemp269, __Vtemp268);
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[0U] 
            = __Vtemp269[0U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[1U] 
            = __Vtemp269[1U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[2U] 
            = __Vtemp269[2U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[3U] 
            = __Vtemp269[3U];
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1) 
                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2)))) {
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_trap)
                ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst);
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[0U];
        __Vtemp270[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[1U];
        __Vtemp270[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[2U];
        __Vtemp270[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[3U];
        VL_EXTEND_WW(128,96, __Vtemp271, __Vtemp270);
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[0U] 
            = __Vtemp271[0U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[1U] 
            = __Vtemp271[1U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[2U] 
            = __Vtemp271[2U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[3U] 
            = __Vtemp271[3U];
    } else {
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[1U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[1U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[3U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[3U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[5U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[5U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[7U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[7U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U] 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U];
    if (__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v0) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[1U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[2U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[3U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[4U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[5U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[6U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[7U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[8U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[9U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0xaU] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0xbU] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0xcU] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0xdU] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0xeU] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0xfU] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x10U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x11U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x12U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x13U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x14U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x15U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x16U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x17U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x18U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x19U] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x1aU] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x1bU] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x1cU] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x1dU] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x1eU] = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[__Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32;
    }
    if (__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v33) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[__Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v33] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v33;
    }
    if (__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v34) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[__Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v34] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v34;
    }
    if (__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram[__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0[0U];
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram[__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0[1U];
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram[__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0[2U];
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram[__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram[__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0[0U];
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram[__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0[1U];
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram[__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0[2U];
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram[__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram[__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0[0U];
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram[__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0[1U];
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram[__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0[2U];
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram[__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0[3U];
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc 
        = __Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc;
    if (__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v0) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[__Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v0] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v0;
    }
    if (__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v1) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[__Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v1] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v1;
    }
    if (__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v2) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[0U] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v2;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[1U] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v3;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[2U] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v4;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[3U] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v5;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[4U] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v6;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[5U] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v7;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[6U] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v8;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[7U] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v9;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[8U] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v10;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[9U] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v11;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[0xaU] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v12;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[0xbU] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v13;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[0xcU] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v14;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[0xdU] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v15;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[0xeU] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v16;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[0xfU] 
            = __Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v17;
    }
    if (__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v0] = 0U;
    }
    if (__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v1) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v1;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[1U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v2;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[2U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v3;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[3U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v4;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[4U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v5;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[5U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v6;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[6U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v7;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[7U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v8;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[8U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v9;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[9U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v10;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0xaU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v11;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0xbU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v12;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0xcU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v13;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0xdU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v14;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0xeU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v15;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0xfU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v16;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x10U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v17;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x11U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v18;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x12U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v19;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x13U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v20;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x14U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v21;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x15U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v22;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x16U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v23;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x17U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v24;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x18U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v25;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x19U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v26;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x1aU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v27;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x1bU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v28;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x1cU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v29;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x1dU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v30;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x1eU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v31;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x1fU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v32;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x20U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v33;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x21U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v34;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x22U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v35;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x23U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v36;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x24U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v37;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x25U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v38;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x26U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v39;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x27U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v40;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x28U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v41;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x29U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v42;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x2aU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v43;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x2bU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v44;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x2cU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v45;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x2dU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v46;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x2eU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v47;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x2fU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v48;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x30U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v49;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x31U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v50;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x32U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v51;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x33U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v52;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x34U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v53;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x35U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v54;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x36U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v55;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x37U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v56;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x38U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v57;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x39U] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v58;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x3aU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v59;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x3bU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v60;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x3cU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v61;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x3dU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v62;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x3eU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v63;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[0x3fU] 
            = __Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v64;
    }
    if (__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v0] = 0U;
    }
}

extern const VlWide<8>/*255:0*/ Vysyx_22040228__ConstPool__CONST_9e67c271_0;

VL_INLINE_OPT void Vysyx_22040228___024root___sequent__TOP__3(Vysyx_22040228___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040228___024root___sequent__TOP__3\n"); );
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v1) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v1;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[1U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v2;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[2U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v3;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[3U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v4;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[4U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v5;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[5U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v6;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[6U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v7;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[7U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v8;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[8U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v9;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[9U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v10;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v11;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v12;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v13;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v14;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v15;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v16;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v17;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v18;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v19;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v20;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v21;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v22;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v23;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v24;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v25;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v26;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v27;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v28;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v29;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v30;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v31;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v32;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v33;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v34;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v35;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v36;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v37;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v38;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v39;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v40;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v41;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v42;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v43;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v44;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v45;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v46;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v47;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v48;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v49;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v50;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v51;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v52;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v53;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v54;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v55;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v56;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v57;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v58;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v59;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v60;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v61;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v62;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v63;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v64;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu_inst_addr;
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v64) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v64] = 1U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v65) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v65] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v66) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v66] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v64) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v64] = 1U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v65) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v65] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v66) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v66] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v64) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__counter2__v64] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v65) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__counter2__v65] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v66) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v66;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[1U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v67;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[2U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v68;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[3U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v69;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[4U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v70;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[5U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v71;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[6U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v72;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[7U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v73;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[8U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v74;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[9U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v75;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v76;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v77;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v78;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v79;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v80;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v81;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v82;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v83;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v84;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v85;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v86;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v87;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v88;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v89;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v90;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v91;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v92;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v93;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v94;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v95;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v96;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v97;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v98;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v99;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v100;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v101;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v102;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v103;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v104;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v105;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v106;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v107;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v108;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v109;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v110;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v111;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v112;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v113;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v114;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v115;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v116;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v117;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v118;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v119;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v120;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v121;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v122;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v123;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v124;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v125;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v126;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v127;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v128;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter2__v129;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v64) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__counter1__v64] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v65) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__counter1__v65] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v66) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v66;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[1U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v67;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[2U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v68;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[3U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v69;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[4U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v70;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[5U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v71;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[6U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v72;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[7U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v73;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[8U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v74;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[9U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v75;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v76;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v77;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v78;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v79;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v80;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v81;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v82;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v83;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v84;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v85;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v86;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v87;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v88;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v89;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v90;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v91;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v92;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v93;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v94;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v95;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v96;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v97;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v98;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v99;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v100;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v101;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v102;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v103;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v104;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v105;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v106;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v107;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v108;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v109;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v110;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v111;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v112;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v113;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v114;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v115;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v116;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v117;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v118;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v119;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v120;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v121;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v122;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v123;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v124;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v125;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v126;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v127;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v128;
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__counter1__v129;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[0U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[0U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[1U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[1U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[2U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[2U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[3U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst[3U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst;
    vlSelf->out_write_ram_ena = (2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state));
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state))) {
        vlSelf->out_write_ram_addr = vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_addr_reg;
        vlSelf->out_write_ram_data = vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_data_reg;
    } else {
        vlSelf->out_write_ram_addr = 0ULL;
        vlSelf->out_write_ram_data = 0ULL;
    }
    vlSelf->out_serial_write_ = (2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state));
    vlSelf->out_serial_data_ = ((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state))
                                 ? vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_data_reg
                                 : 0ULL);
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime = 0ULL;
        vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime 
            = vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime_temp;
        vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp 
            = vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp_temp;
    }
    vlSelf->ysyx_22040228__DOT__add_axi_b_valid = (
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state)) 
                                                    << 2U) 
                                                   | (((2U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state)) 
                                                       << 1U) 
                                                      | (2U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state))));
    vlSelf->ysyx_22040228__DOT__soc_axi_ar_ready = 
        ((0U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)) 
         | (1U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)));
    vlSelf->ysyx_22040228__DOT__add_axi_r_last = ((
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)) 
                                                   << 2U) 
                                                  | (((3U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state)) 
                                                      << 1U) 
                                                     | (2U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))));
    vlSelf->ysyx_22040228__DOT__add_axi_r_valid = (
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)) 
                                                    << 2U) 
                                                   | (((3U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state)) 
                                                       << 1U) 
                                                      | (2U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))));
    vlSelf->ysyx_22040228__DOT__io_axi_ar_ready = (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state)) 
                                                   | (1U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state)));
    vlSelf->ysyx_22040228__DOT__t_axi_aw_id = (((2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                & (6U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                ? 1U
                                                : (
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                    ? 2U
                                                    : 0U));
    vlSelf->ysyx_22040228__DOT__t_axi_ar_id = (((5U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                & (6U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                ? 1U
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                    ? 2U
                                                    : 
                                                   (((4U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                     & (6U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                     ? 4U
                                                     : 0U)));
    vlSelf->ysyx_22040228__DOT__t_axi_ar_valid = ((
                                                   (5U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))) 
                                                  | (((6U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                      & (6U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))) 
                                                     | ((4U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                        & (6U 
                                                           == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))));
    vlSelf->ysyx_22040228__DOT__t_axi_aw_size = (((2U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                  ? 3U
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                   ? 3U
                                                   : 0U));
    vlSelf->ysyx_22040228__DOT__t_axi_w_valid = (((2U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))));
    vlSelf->ysyx_22040228__DOT__t_axi_aw_valid = (1U 
                                                  & (((2U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                      & (6U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                      ? 
                                                     (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__aw_enable))
                                                      : 
                                                     (((3U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                       & (6U 
                                                          == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))) 
                                                      & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__aw_enable)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sigin_inst 
        = ((((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)) 
             | (0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
            | (0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
           | (0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__dr_ready 
        = ((((((((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)) 
                 | (0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
                | (0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
               | (0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
              | (0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
             | (0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
            | (0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
           | (0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req)))) {
            if (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
                 & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)))) {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_timer_init = 0U;
            } else if (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)))) {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_timer_init = 0U;
            }
        }
    }
    Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__difftest_dut_regs_TOP(
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [1U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [2U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [3U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [4U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [5U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [6U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [7U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [8U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [9U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x1fU]);
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara 
            = ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating) 
                                         >> 1U))))) 
               & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara 
            = ((- (QData)((IData)((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating))))) 
               & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara 
            = ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating) 
                                         >> 2U))))) 
               & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__load_data);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr 
            = ((- (IData)((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating) 
                                 >> 1U)))) & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating) 
                                        >> 2U) & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr 
        = ((IData)(vlSelf->rst) ? 0U : ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating) 
                                                       >> 2U)))) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating) 
                                        >> 1U) & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr 
        = ((IData)(vlSelf->rst) ? 0U : ((- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating)))) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_data 
        = ((0xeU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
            ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit)
                ? (1ULL + (~ (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U])))))
                : (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U]))))
            : ((0x1cU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit)
                    ? ((QData)((IData)(((IData)(1U) 
                                        + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U])))) 
                       << 0x20U) : ((QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U])) 
                                    << 0x20U)) : ((0x70U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit)
                                                    ? 
                                                   ((QData)((IData)(
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (~ 
                                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U])))) 
                                                    << 0x20U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U])) 
                                                    << 0x20U))
                                                   : 
                                                  ((0xe0U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit)
                                                     ? 
                                                    ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U] 
                                                      >> 0x1fU)
                                                      ? (QData)((IData)(
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U]))))
                                                      : 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U]))))))
                                                     : 
                                                    ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U])))
                                                      : (QData)((IData)(
                                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U]))))
                                                    : 0ULL))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__mult_valid 
        = (1U & (~ ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready)) 
                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_finish_sign))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus 
        = ((((QData)((IData)(((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs)) 
                              << 0x1fU))) << 0x20U) 
            | ((QData)((IData)((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs) 
                                 << 2U) | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp)))) 
               << 0xbU)) | (QData)((IData)((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie) 
                                             << 7U) 
                                            | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie) 
                                               << 3U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena 
        = ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip) 
             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)) 
            & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie)) 
           & (0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__mult_valid 
        = (1U & (~ ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready)) 
                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_finish_sign))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp_ena = 0U;
    } else if (((~ (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid)) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp_ena = 1U;
    } else if (((~ (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid)) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp_ena = 1U;
    } else if (((~ (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid)) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp_ena = 1U;
    } else if (vlSelf->ysyx_22040228__DOT__i_cache_inst_valid) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp_ena = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp = 0ULL;
    } else if (((~ (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid)) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc;
    } else if (((~ (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid)) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc;
    } else if (((~ (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid)) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc;
    } else if (vlSelf->ysyx_22040228__DOT__i_cache_inst_valid) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp = 0ULL;
    }
    if ((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata 
            = ((0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data
                : ((0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data))
                    : ((0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                        ? ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                          >> 0x20U)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data)))
                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data)))
                        : ((0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data
                            : ((0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data
                                : ((0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data))
                                    : ((0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                          >> 0x20U)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data)))
                                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data)))
                                        : 0ULL)))))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata 
            = ((0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data
                : ((0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))
                    : ((0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                        ? ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                          >> 0x20U)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))
                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))
                        : ((0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data
                            : ((0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data
                                : ((0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))
                                    : ((0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                          >> 0x20U)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))
                                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))
                                        : 0ULL)))))));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__upper_imm 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                      >> 0x13U))))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data) 
                                         << 0xcU))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__shift_res 
        = (((0x3fU >= (0x7fU & ((IData)(0x40U) - (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))
             ? ((- (QData)((IData)((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                  >> 0x3fU)))))) 
                << (0x7fU & ((IData)(0x40U) - (0x3fU 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))
             : 0ULL) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                        >> (0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data) 
           - (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sllw_op2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data) 
           << (0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_srlw_op2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data) 
           >> (0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sraw_op2 
        = (((0x1fU >= (0x3fU & ((IData)(0x20U) - (0x1fU 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))
             ? ((- (IData)((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                          >> 0x1fU))))) 
                << (0x3fU & ((IData)(0x20U) - (0x1fU 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))
             : 0U) | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data) 
                      >> (0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2 
        = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
           + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                   + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__upper_imm 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                      >> 0x13U))))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data) 
                                         << 0xcU))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__shift_res 
        = (((0x3fU >= (0x7fU & ((IData)(0x40U) - (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))
             ? ((- (QData)((IData)((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                  >> 0x3fU)))))) 
                << (0x7fU & ((IData)(0x40U) - (0x3fU 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))
             : 0ULL) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                        >> (0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data) 
           - (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sllw_op2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data) 
           << (0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_srlw_op2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data) 
           >> (0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sraw_op2 
        = (((0x1fU >= (0x3fU & ((IData)(0x20U) - (0x1fU 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))
             ? ((- (IData)((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                          >> 0x1fU))))) 
                << (0x3fU & ((IData)(0x20U) - (0x1fU 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))
             : 0U) | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data) 
                      >> (0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2 
        = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
           + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                   + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx 
        = ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))
            ? (0xfffU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
            : 0U);
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_ena_i)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid
            [vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_addr_i];
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_ena_i)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid
            [vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_addr_i];
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__clean_temp) {
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[0U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[1U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[2U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[3U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[4U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[5U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[6U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[7U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[0U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[1U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[2U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[3U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu_empty = 1U;
    } else if ((0U == (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[0U] 
                       >> 0x1cU))) {
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[0U] 
            = (IData)(((((QData)((IData)(vlSelf->ysyx_22040228__DOT__i_cache_pc[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ysyx_22040228__DOT__i_cache_pc[0U]))) 
                       & (- (QData)((IData)((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif))))))));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[1U] 
            = (IData)((((((QData)((IData)(vlSelf->ysyx_22040228__DOT__i_cache_pc[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__i_cache_pc[0U]))) 
                        & (- (QData)((IData)((1U & 
                                              (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif))))))) 
                       >> 0x20U));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[2U] 
            = (IData)(((((QData)((IData)(vlSelf->ysyx_22040228__DOT__i_cache_pc[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ysyx_22040228__DOT__i_cache_pc[2U]))) 
                       & (- (QData)((IData)((1U & (~ 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif) 
                                                    >> 1U))))))));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[3U] 
            = (IData)((((((QData)((IData)(vlSelf->ysyx_22040228__DOT__i_cache_pc[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__i_cache_pc[2U]))) 
                        & (- (QData)((IData)((1U & 
                                              (~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif) 
                                                  >> 1U))))))) 
                       >> 0x20U));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[4U] 
            = (IData)(((((QData)((IData)(vlSelf->ysyx_22040228__DOT__i_cache_pc[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ysyx_22040228__DOT__i_cache_pc[4U]))) 
                       & (- (QData)((IData)((1U & (~ 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif) 
                                                    >> 2U))))))));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[5U] 
            = (IData)((((((QData)((IData)(vlSelf->ysyx_22040228__DOT__i_cache_pc[5U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__i_cache_pc[4U]))) 
                        & (- (QData)((IData)((1U & 
                                              (~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif) 
                                                  >> 2U))))))) 
                       >> 0x20U));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[6U] 
            = (IData)(((((QData)((IData)(vlSelf->ysyx_22040228__DOT__i_cache_pc[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ysyx_22040228__DOT__i_cache_pc[6U]))) 
                       & (- (QData)((IData)((1U & (~ 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif) 
                                                    >> 3U))))))));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[7U] 
            = (IData)((((((QData)((IData)(vlSelf->ysyx_22040228__DOT__i_cache_pc[7U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__i_cache_pc[6U]))) 
                        & (- (QData)((IData)((1U & 
                                              (~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif) 
                                                  >> 3U))))))) 
                       >> 0x20U));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[0U] 
            = (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
               & (- (IData)((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif))))));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[1U] 
            = (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
               & (- (IData)((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif) 
                                      >> 1U))))));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[2U] 
            = (IData)((((QData)((IData)((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif) 
                                                           >> 3U)))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif) 
                                                                       >> 2U))))))))));
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[3U] 
            = (IData)(((((QData)((IData)((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif) 
                                                            >> 3U)))))))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ 
                                                                       ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif) 
                                                                        >> 2U))))))))) 
                       >> 0x20U));
        vlSelf->ysyx_22040228__DOT__rvcpu_empty = 1U;
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena)) 
                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena))) {
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[0U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[1U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[2U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[3U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[4U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[5U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[6U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[7U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[0U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[1U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[2U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[3U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu_empty = 1U;
    } else if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_clean) {
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[0U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[1U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[2U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[3U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[4U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[5U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[6U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[7U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[0U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[1U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[2U] = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[3U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu_empty = 1U;
    } else {
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[0U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[0U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[1U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[1U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[2U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[2U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[3U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[3U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[4U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[4U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[5U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[5U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[6U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[6U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[7U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[7U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[0U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[0U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[1U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[1U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[2U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[2U];
        vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[3U] 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[3U];
        vlSelf->ysyx_22040228__DOT__rvcpu_empty = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_ena_i)))) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram
            [vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i];
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_ena_i)))) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid
            [vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i];
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_nextpc_temp 
        = ((0U == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
            ? 0x10U : ((4U == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                        ? 0xcU : ((8U == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                   ? 8U : ((0xcU == 
                                            (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                            ? 4U : 0U))));
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__tteg_ena_i)))) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram
            [vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i];
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__tteg_ena_i)))) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid
            [vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i];
    }
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst_nxt));
    if (vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread) {
        vlSelf->ysyx_22040228__DOT__arbitrate_d_ok = 1U;
    } else if (vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite) {
        vlSelf->ysyx_22040228__DOT__arbitrate_d_ok = 1U;
    } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite)))) {
                vlSelf->ysyx_22040228__DOT__arbitrate_d_ok = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request = 1U;
    } else if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_success) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_ena_i)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram
            [vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_addr_i];
    }
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt));
    if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_ena_i)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram
            [vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_addr_i];
    }
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm 
        = ((0x800U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                  >> 8U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw 
        = (7U & ((((1U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                    [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                              >> 2U))]) + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))] 
                                                 >> 1U))) 
                  + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                           [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                     >> 2U))] >> 2U))) 
                 + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                    >> 2U))] >> 3U))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_fence_i 
        = (IData)((0x1007U == (0x707fU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm 
        = ((0x800U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                  >> 8U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt 
        = (7U & ((((1U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                    [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                              >> 2U))]) + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))] 
                                                 >> 1U))) 
                  + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                           [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                     >> 2U))] >> 2U))) 
                 + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                    >> 2U))] >> 3U))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_fence_i 
        = (IData)((0x1007U == (0x707fU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)));
    vlSelf->ysyx_22040228__DOT__add_axi_ar_ready = 
        (2U | (((IData)(vlSelf->ysyx_22040228__DOT__soc_axi_ar_ready) 
                << 2U) | (IData)(vlSelf->ysyx_22040228__DOT__io_axi_ar_ready)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready 
        = (((((0xeU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)) 
              | (0x1cU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
             | (0x38U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
            | (0x70U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
           | (0xe0U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)));
    Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__difftest_dut_csrs_TOP(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcycle, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus, 
                                                                                (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base 
                                                                                << 2U), vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mepc, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause, 
                                                                                ((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie)) 
                                                                                << 7U), (QData)((IData)(
                                                                                ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip) 
                                                                                << 7U))), vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mscrstch);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_ena) 
           & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sllw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sllw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sllw_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__srlw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_srlw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_srlw_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sraw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sraw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sraw_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_addw_op2 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_ls_op2 
        = (1U & ((((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sllw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sllw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sllw_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__srlw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_srlw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_srlw_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sraw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sraw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sraw_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_addw_op2 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_ls_op2 
        = (1U & ((((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid__v0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid__v0] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid__v0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid__v0] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid__v0;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__clean_temp 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__clean_temp;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[0U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[0U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[1U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[1U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[2U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[2U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[3U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[3U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[4U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[4U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[5U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[5U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[6U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[6U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[7U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc[7U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[0U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[0U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[1U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[1U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[2U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[2U];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[3U] 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst[3U];
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram__v0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid__v0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid__v0] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram__v0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid__v0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid__v0] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram__v0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram__v0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram__v0;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2 
        = (1U & ((8U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                  [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                            >> 2U))]) ? ((4U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                          [(0xfU & 
                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                             >> 2U))])
                                          ? ((2U & 
                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [(0xfU 
                                                & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                   >> 2U))])
                                              ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))] 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw)))
                                              : ((~ 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                  [
                                                  (0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))]) 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw))))
                                          : ((2U & 
                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [(0xfU 
                                                & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                   >> 2U))])
                                              ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))] 
                                                 & (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw)))
                                              : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))] 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw)))))
                  : ((4U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                      [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                >> 2U))]) ? ((2U & 
                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [(0xfU 
                                                & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                   >> 2U))])
                                              ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))] 
                                                 & (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw)))
                                              : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))] 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw))))
                      : ((2U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                    >> 2U))]) ? ((~ 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                  [
                                                  (0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))]) 
                                                 & (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw)))
                          : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                       >> 2U))] & (2U 
                                                   < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw)))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1 
        = (1U & ((8U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                  [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                            >> 2U))]) ? ((4U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                          [(0xfU & 
                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                             >> 2U))])
                                          ? ((2U & 
                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [(0xfU 
                                                & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                   >> 2U))])
                                              ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))] 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt)))
                                              : ((~ 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                  [
                                                  (0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))]) 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt))))
                                          : ((2U & 
                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [(0xfU 
                                                & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                   >> 2U))])
                                              ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))] 
                                                 & (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt)))
                                              : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))] 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt)))))
                  : ((4U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                      [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                >> 2U))]) ? ((2U & 
                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [(0xfU 
                                                & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                   >> 2U))])
                                              ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))] 
                                                 & (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt)))
                                              : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))] 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt))))
                      : ((2U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                    >> 2U))]) ? ((~ 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                  [
                                                  (0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))]) 
                                                 & (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt)))
                          : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                       >> 2U))] & (2U 
                                                   < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt)))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[2U] 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena)
            ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr)
            : 0U);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[1U] 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena)
            ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr)
            : 0U);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_finish_sign 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__mult_valid) 
           & (~ (IData)((0U != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[0U] 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena)
            ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr)
            : 0U);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_finish_sign 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__mult_valid) 
           & (~ (IData)((0U != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_clean 
        = ((~ (IData)(vlSelf->rst)) & ((~ (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena) 
                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena)) 
                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena))) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__should_updata)));
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n = 2U;
            }
        } else if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n = 2U;
            }
        } else {
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n = 1U;
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n = 1U;
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 1U;
            } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 1U;
            } else if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 4U;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
                if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 4U;
                }
            } else if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 3U;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 2U;
            }
        } else {
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 1U;
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 1U;
    }
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[0U] 
                    = (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_data);
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[1U] 
                    = (IData)((vlSelf->ysyx_22040228__DOT__arbitrate_i_data 
                               >> 0x20U));
            }
        } else if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[2U] 
                    = (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_data);
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[3U] 
                    = (IData)((vlSelf->ysyx_22040228__DOT__arbitrate_i_data 
                               >> 0x20U));
            }
        }
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh)))) {
                    if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U] 
                            = (IData)((vlSelf->ysyx_22040228__DOT__arbitrate_i_data 
                                       >> 0x20U));
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
                if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_data);
                }
            } else if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U] 
                    = (IData)((vlSelf->ysyx_22040228__DOT__arbitrate_i_data 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U] 
                    = (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_data);
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U] = 0U;
    }
    if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if (vlSelf->ysyx_22040228__DOT__rvcpu_empty) {
            if (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                  == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                           >> 0xaU)))) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r))) {
                if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] 
                        = (IData)((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] 
                        = (IData)(((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] 
                        = (IData)((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] 
                        = (IData)(((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)((0xcULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)(((0xcULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                }
                if ((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] 
                        = (IData)((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] 
                        = (IData)(((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)(((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                }
                if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)(((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                }
                if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                }
            } else if (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                         == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                  >> 0xaU)))) 
                        & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))) {
                if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] 
                        = (IData)((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] 
                        = (IData)(((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] 
                        = (IData)((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] 
                        = (IData)(((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)((0xcULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)(((0xcULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                }
                if ((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] 
                        = (IData)((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] 
                        = (IData)(((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)(((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                }
                if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)(((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                }
                if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                }
            }
        }
    }
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U != (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
                if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                    if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r) {
                        if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r) {
                            if ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                 [(0x3fU & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                    >> 4U)))] 
                                 >= vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                    >> 4U)))])) {
                                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o = 1U;
                            }
                        }
                    } else {
                        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o = 1U;
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o = 0U;
    }
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U != (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
                if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                    if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r) {
                        if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r) {
                            if ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                 [(0x3fU & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                    >> 4U)))] 
                                 < vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                    >> 4U)))])) {
                                if ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 4U)))] 
                                     < vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 4U)))])) {
                                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t = 1U;
                                }
                            }
                        } else {
                            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t = 1U;
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t = 0U;
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh)))) {
                    if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                        if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r) {
                            if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r) {
                                if ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 4U)))] 
                                     < vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 4U)))])) {
                                    if ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                         [(0x3fU & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                            >> 4U)))] 
                                         < vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                         [(0x3fU & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                            >> 4U)))])) {
                                        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t = 1U;
                                    }
                                }
                            } else {
                                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t = 0U;
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh)))) {
                    if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                        if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r) {
                            if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r) {
                                if ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 4U)))] 
                                     >= vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 4U)))])) {
                                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o = 1U;
                                }
                            }
                        } else {
                            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o = 1U;
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o = 0U;
    }
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U != (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
                if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_i_ok = 1U;
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_i_ok = 0U;
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh)))) {
                    if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_m_ok = 1U;
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_m_ok = 0U;
    }
    vlSelf->ysyx_22040228__DOT__i_cache_inst_valid 
        = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
           & ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
              & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_empty) 
                 & (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                      == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                               >> 0xaU)))) 
                     & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)) 
                    | ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                        == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                 >> 0xaU)))) 
                       & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))))));
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_miss_ena = 1U;
            }
        } else if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_miss_ena 
                = (1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)));
        }
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh)))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena 
                        = (1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)));
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena = 1U;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena = 1U;
            }
        }
    }
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_miss_addr 
                    = (0xfffffffffffffff0ULL & vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
            }
        } else if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_miss_addr 
                = ((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)
                    ? 0ULL : (8ULL | (0xfffffffffffffff0ULL 
                                      & vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)));
        }
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh)))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr 
                        = ((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)
                            ? 0ULL : (0xcULL | (0xfffffffffffffff0ULL 
                                                & vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)));
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr 
                        = (8ULL | (0xfffffffffffffff0ULL 
                                   & vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                }
            } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr 
                    = (4ULL | (0xfffffffffffffff0ULL 
                               & vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr 
                    = (0xfffffffffffffff0ULL & vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
            }
        }
    }
    if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if (vlSelf->ysyx_22040228__DOT__rvcpu_empty) {
            if (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                  == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                           >> 0xaU)))) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r))) {
                if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[0U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[1U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[2U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[3U];
                }
                if ((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[1U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[2U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[3U];
                }
                if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[2U]))));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[2U]))) 
                                   >> 0x20U));
                }
                if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[3U];
                }
            } else if (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                         == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                  >> 0xaU)))) 
                        & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))) {
                if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[0U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[1U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[2U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[3U];
                }
                if ((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[1U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[2U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[3U];
                }
                if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[2U]))));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[2U]))) 
                                   >> 0x20U));
                }
                if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[3U];
                }
            }
        } else {
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] = 0U;
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] = 0U;
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] = 0U;
        }
    }
    if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_success) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request = 0U;
    } else if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_success) {
        vlSelf->__Vdly__ysyx_22040228__DOT__data_cache3__DOT__counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter)));
    } else if (((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                & (0x40U > (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request = 1U;
    } else if (((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                & (0x40U <= (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_valid_req = 1U;
    } else {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_valid_req = 0U;
        vlSelf->__Vdly__ysyx_22040228__DOT__data_cache3__DOT__counter = 0U;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena 
            = (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) 
               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_));
    }
    if (((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw = 1U;
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw = 0U;
    }
    if ((1U & (~ ((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_ok 
            = ((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
               & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)));
    }
    if (((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_type = 8U;
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_type = 0U;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena 
            = (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) 
               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_));
    }
    if (((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr = 1U;
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr = 0U;
    }
    if ((1U & (~ ((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_ok 
            = ((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
               & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)));
    }
    if (((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_type = 2U;
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_type = 0U;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req 
        = (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish)) 
            & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__dr_ready)) 
           | ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_finish_sign)) 
              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready)));
    if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        vlSelf->ysyx_22040228__DOT__i_cache_pc[0U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[1U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[2U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[3U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[4U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[5U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[6U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[7U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U];
    } else {
        vlSelf->ysyx_22040228__DOT__i_cache_pc[0U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[1U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[2U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[3U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[4U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[5U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[6U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[7U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[7U];
    }
    vlSelf->ysyx_22040228__DOT__i_cache_addr = ((2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                                 ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_miss_addr
                                                 : 
                                                ((8U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                                  ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr
                                                  : 0ULL));
    if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U];
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U];
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U];
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U];
    } else {
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                      & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_success 
                = (1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__delay_oclk)));
        }
    }
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter 
        = vlSelf->__Vdly__ysyx_22040228__DOT__data_cache3__DOT__counter;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode 
        = vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[1U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req;
    vlSelf->ysyx_22040228__DOT__t_axi_ar_size = (((5U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                  ? 3U
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                   ? 3U
                                                   : 
                                                  ((((4U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                     & (6U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))) 
                                                    & ((0x10000000ULL 
                                                        <= vlSelf->ysyx_22040228__DOT__i_cache_addr) 
                                                       & (0x3fffffffULL 
                                                          >= vlSelf->ysyx_22040228__DOT__i_cache_addr)))
                                                    ? 2U
                                                    : 
                                                   ((((4U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                      & (6U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))) 
                                                     & ((0x10000000ULL 
                                                         > vlSelf->ysyx_22040228__DOT__i_cache_addr) 
                                                        | (0x3fffffffULL 
                                                           < vlSelf->ysyx_22040228__DOT__i_cache_addr)))
                                                     ? 3U
                                                     : 0U))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm1 
        = ((0x80000U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                                  >> 1U)) 
                                     | ((0x400U & (
                                                   vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                            >> 0x15U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm1 
        = ((0x800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                                  >> 8U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm2 
        = ((0x80000U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                  >> 1U)) 
                                     | ((0x400U & (
                                                   vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                            >> 0x15U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm2 
        = ((0x800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                  >> 8U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm3 
        = ((0x80000U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                  >> 1U)) 
                                     | ((0x400U & (
                                                   vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                            >> 0x15U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm3 
        = ((0x800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                  >> 8U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm4 
        = ((0x80000U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                  >> 1U)) 
                                     | ((0x400U & (
                                                   vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                            >> 0x15U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm4 
        = ((0x800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                  >> 8U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4 
        = ((0x1bU == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1 
        = ((0x1bU == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2 
        = ((0x1bU == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3 
        = ((0x1bU == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4 
        = ((0x19U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1 
        = ((0x19U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2 
        = ((0x19U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3 
        = ((0x19U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4 
        = ((0x18U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1 
        = ((0x18U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2 
        = ((0x18U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3 
        = ((0x18U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U])));
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_success 
        = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request;
    if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
         & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))) {
        if ((1U & (~ ((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
                      & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                      [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                          & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                          [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])))) {
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid1 = 1U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                         & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__delay_oclk)))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid1 = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))))) {
        if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))) {
            if ((1U & (~ ((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
                          & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                          [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                              & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                              [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])))) {
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid2 = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__delay_oclk)))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid2 = 0U;
        }
    }
    if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
         & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))) {
        if (((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
             & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r)) 
                    << 9U) | (QData)((IData)((0x1f8U 
                                              & ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter) 
                                                 << 3U)))));
        } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                    & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                    [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out = 0ULL;
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))) {
        if (((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
             & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
             [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r)) 
                    << 9U) | (QData)((IData)((0x1f8U 
                                              & ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter) 
                                                 << 3U)))));
        } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                    & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                    [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out = 0ULL;
        }
    }
    if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
         & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))) {
        if (((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
             & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[0U])));
        } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                    & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                    [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out = 0ULL;
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))) {
        if (((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
             & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
             [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[2U])));
        } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                    & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                    [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out = 0ULL;
        }
    }
    if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
         & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))) {
        if (((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
             & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out = 1U;
        } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                    & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                    [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out = 0U;
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))) {
        if (((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
             & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
             [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out = 1U;
        } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                    & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                    [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out = 0U;
        }
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sigin_inst 
        = ((((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
             | (0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
            | (0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
           | (0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)));
    if ((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata 
            = ((0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data
                : ((0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))
                    : ((0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                        ? ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                          >> 0x20U)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)))
                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)))
                        : ((0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data
                            : ((0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data
                                : ((0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))
                                    : ((0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                          >> 0x20U)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)))
                                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)))
                                        : 0ULL)))))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata 
            = ((0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data
                : ((0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
                    : ((0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                        ? ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                          >> 0x20U)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))
                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))
                        : ((0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data
                            : ((0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data
                                : ((0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
                                    : ((0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                          >> 0x20U)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))
                                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))
                                        : 0ULL)))))));
    }
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i 
        = (0x3fU & ((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                     ? (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__fence_counter)
                     : (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                >> 4U))));
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_ena_i 
        = ((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
           | (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o)) 
              | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))));
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__tteg_ena_i 
        = ((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
           | (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t)) 
              | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))));
    if ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value = 0ULL;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                      | (2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                          | (4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                              | (8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
                    if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value = 0xbULL;
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value = 0ULL;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value = 0x8000000000000007ULL;
    }
    if ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en = 0U;
        if (((0x40U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
             | (2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en = 1U;
        } else if (((0x80U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                    | (4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en 
                = (0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data);
        } else if (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                    | (8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en 
                = (0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data);
        } else if ((0x10U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
            if ((0x20U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en = 0U;
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en = 0U;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en = 0U;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready 
        = (((((0xeU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
              | (0x1cU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
             | (0x38U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
            | (0x70U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
           | (0xe0U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__dr_ready 
        = ((((((((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                 | (0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
                | (0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
               | (0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
              | (0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
             | (0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
            | (0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
           | (0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_data 
        = ((0xeU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
            ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit)
                ? (1ULL + (~ (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U])))))
                : (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U]))))
            : ((0x1cU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit)
                    ? ((QData)((IData)(((IData)(1U) 
                                        + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U])))) 
                       << 0x20U) : ((QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U])) 
                                    << 0x20U)) : ((0x70U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit)
                                                    ? 
                                                   ((QData)((IData)(
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (~ 
                                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U])))) 
                                                    << 0x20U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U])) 
                                                    << 0x20U))
                                                   : 
                                                  ((0xe0U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit)
                                                     ? 
                                                    ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U] 
                                                      >> 0x1fU)
                                                      ? (QData)((IData)(
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U]))))
                                                      : 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U]))))))
                                                     : 
                                                    ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U])))
                                                      : (QData)((IData)(
                                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U]))))
                                                    : 0ULL))));
    if ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = 0U;
        if (((0x40U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
             | (2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en 
                = (0U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr));
        } else if (((0x80U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                    | (4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = 1U;
        } else if (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                    | (8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = 1U;
        } else if ((0x10U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
            if ((0x20U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = 0U;
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = 0U;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = 0U;
    }
    if ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena = 0U;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                      | (2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                          | (4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                              | (8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
                    if ((0x10U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena 
                            = (0x20U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode));
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena = 0U;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena = 0U;
    }
    if ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena = 0U;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                      | (2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                          | (4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                              | (8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
                    if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena = 1U;
                    } else if ((0x20U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena = 0U;
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena = 0U;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena = 0U;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_ena 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1) 
           | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2) 
              | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr 
        = (0x1fU & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1)
                     ? ((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                         << 0x11U) | (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                      >> 0xfU)) : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2)
                                                    ? 
                                                   ((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                     << 0x11U) 
                                                    | (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                       >> 0xfU))
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3)
                                                     ? 
                                                    ((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                      << 0x11U) 
                                                     | (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                        >> 0xfU))
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4)
                                                      ? 
                                                     ((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                       << 0x11U) 
                                                      | (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                         >> 0xfU))
                                                      : 0U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr 
        = (0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1)
                    ? (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                               >> 2U)) : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2)
                                           ? (IData)(
                                                     ((4ULL 
                                                       + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                                      >> 2U))
                                           : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3)
                                               ? (IData)(
                                                         ((8ULL 
                                                           + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                                          >> 2U))
                                               : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4)
                                                   ? (IData)(
                                                             ((0xcULL 
                                                               + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                                              >> 2U))
                                                   : 0U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause 
        = ((0x342U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus 
        = ((0x300U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req 
        = (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish)) 
            & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__dr_ready)) 
           | ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_finish_sign)) 
              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
        = ((((((((((- (QData)((IData)(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en) 
                                       & (0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)))))) 
                   & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcycle) 
                  | ((- (QData)((IData)(((0x300U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))))) 
                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus)) 
                 | ((- (QData)((IData)(((((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))))) 
                    & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base 
                       << 2U))) | ((- (QData)((IData)(
                                                      (((0x341U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena))))) 
                                   & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mepc)) 
               | ((- (QData)((IData)(((0x342U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))))) 
                  & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause)) 
              | ((- (QData)((IData)(((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))))) 
                 & ((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie)) 
                    << 7U))) | ((- (QData)((IData)(
                                                   ((0x344U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))))) 
                                & (QData)((IData)(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip) 
                                                   << 7U))))) 
            | ((- (QData)((IData)(((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))))) 
               & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mscrstch)) 
           | (0x43593231ULL & (- (QData)((IData)(((0xf11U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo 
        = (7U & ((((1U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                    [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr]) 
                   + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                            [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                            >> 1U))) + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                                              >> 2U))) 
                 + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                          >> 3U))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_ena 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena)) 
           | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
              | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[0U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena)
            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data
            : 0ULL);
    if ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data = 0ULL;
        if (((0x40U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
             | (2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data;
        } else if (((0x80U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                    | (4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
                   | vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data);
        } else if (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                    | (8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
                   & (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data));
        } else if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc;
        }
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data = 0ULL;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1 
        = (1U & ((8U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                  [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                  ? ((4U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                      [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                      ? ((2U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                          ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                             | (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo)))
                          : ((~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                              [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr]) 
                             | (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo))))
                      : ((2U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                          ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                             & (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo)))
                          : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                             | (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo)))))
                  : ((4U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                      [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                      ? ((2U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                          ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                             & (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo)))
                          : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                             | (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo))))
                      : ((2U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                          ? ((~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                              [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr]) 
                             & (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo)))
                          : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                             & (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo)))))));
    if (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpp_nxt = 3U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause_nxt 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_nxt 
            = (1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie));
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpp_nxt 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena)
                ? 0U : (3U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                               ? (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                          >> 0xbU))
                               : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause_nxt 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data
                : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_nxt 
            = (1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena) 
                     | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                    >> 7U)) : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie))));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mie_nxt 
        = (1U & ((~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))) 
                 & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena)
                     ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie)
                     : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                    >> 3U)) : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena4 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4) 
            | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4) 
               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1) 
            | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1) 
               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2) 
            | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2) 
               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3) 
            | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3) 
               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1)
            ? 0xeU : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2)
                       ? 0xcU : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3)
                                  ? 8U : 0U)));
}
