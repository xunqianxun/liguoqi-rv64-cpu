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

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__3(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr;
    CData/*7:0*/ __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_type;
    CData/*4:0*/ __Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_addr;
    CData/*0:0*/ __Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_ena;
    CData/*4:0*/ __Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_addr;
    CData/*0:0*/ __Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_ena;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__i_cache2__DOT__i_counter1__v0;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter1__v0;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v1;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter1__v1;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v2;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v3;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v4;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v5;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v6;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v7;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v8;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v9;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v10;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v11;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v12;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v13;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v14;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v15;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v16;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v17;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v18;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v19;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v20;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v21;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v22;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v23;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v24;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v25;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v26;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v27;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v28;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v29;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v30;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v31;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v32;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v33;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v34;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v35;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v36;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v37;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v38;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v39;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v40;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v41;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v42;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v43;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v44;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v45;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v46;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v47;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v48;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v49;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v50;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v51;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v52;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v53;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v54;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v55;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v56;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v57;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v58;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v59;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v60;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v61;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v62;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v63;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v64;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__i_cache2__DOT__i_counter2__v0;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter2__v0;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v1;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter2__v1;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v2;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v3;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v4;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v5;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v6;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v7;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v8;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v9;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v10;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v11;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v12;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v13;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v14;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v15;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v16;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v17;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v18;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v19;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v20;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v21;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v22;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v23;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v24;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v25;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v26;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v27;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v28;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v29;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v30;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v31;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v32;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v33;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v34;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v35;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v36;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v37;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v38;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v39;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v40;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v41;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v42;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v43;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v44;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v45;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v46;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v47;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v48;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v49;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v50;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v51;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v52;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v53;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v54;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v55;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v56;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v57;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v58;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v59;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v60;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v61;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v62;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v63;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v64;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v0;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter2__v64;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v64;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter2__v65;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v65;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v66;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v66;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v67;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v68;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v69;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v70;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v71;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v72;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v73;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v74;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v75;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v76;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v77;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v78;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v79;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v80;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v81;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v82;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v83;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v84;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v85;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v86;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v87;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v88;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v89;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v90;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v91;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v92;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v93;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v94;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v95;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v96;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v97;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v98;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v99;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v100;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v101;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v102;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v103;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v104;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v105;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v106;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v107;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v108;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v109;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v110;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v111;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v112;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v113;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v114;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v115;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v116;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v117;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v118;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v119;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v120;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v121;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v122;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v123;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v124;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v125;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v126;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v127;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v128;
    CData/*2:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v129;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v0;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty1__v64;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v64;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty1__v65;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v65;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v0;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty2__v64;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v64;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty2__v65;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v65;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6;
    CData/*5:0*/ __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7;
    CData/*5:0*/ __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7;
    CData/*7:0*/ __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7;
    CData/*0:0*/ __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7;
    SData/*11:0*/ __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_offset;
    VlWide<4>/*127:0*/ __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand;
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
    VlWide<4>/*127:0*/ __Vtemp38;
    VlWide<4>/*127:0*/ __Vtemp41;
    VlWide<4>/*127:0*/ __Vtemp46;
    IData/*31:0*/ __Vilp;
    QData/*63:0*/ __Vdly__SocTop__DOT__rvcpu1__DOT__if_id_pc;
    QData/*63:0*/ __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_op1;
    QData/*63:0*/ __Vdly__SocTop__DOT__rvcpu1__DOT__wb_regfile_data;
    QData/*63:0*/ __Vdlyvval__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32;
    QData/*63:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0;
    QData/*63:0*/ __Vdlyvval__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0;
    QData/*63:0*/ __Vtemp53;
    // Body
    __Vdly__SocTop__DOT__rvcpu1__DOT__wb_regfile_data 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data;
    __Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_ena = vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena;
    __Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_addr = vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr;
    __Vdlyvset__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0 = 0U;
    __Vdlyvset__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0 = 0U;
    __Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_ena 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena;
    __Vdly__SocTop__DOT__rvcpu1__DOT__if_id_pc = vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc;
    __Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v0 = 0U;
    __Vdlyvset__SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs__v32 = 0U;
    __Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_addr 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr;
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0 = 0U;
    __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_op1 = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1;
    __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U];
    __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U];
    __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U] 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U];
    __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U] 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U];
    __Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter2__v0 = 0U;
    __Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter2__v1 = 0U;
    __Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter1__v0 = 0U;
    __Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter1__v1 = 0U;
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_pc 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7 = 0U;
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
    __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_type 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v0 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v64 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v65 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v0 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v64 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v65 = 0U;
    __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr;
    vlSelf->__Vdly__SocTop__DOT__rvcpu_inst_addr = vlSelf->SocTop__DOT__rvcpu_inst_addr;
    __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_offset 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset;
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__if_id_inst 
        = vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v0 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v64 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v65 = 0U;
    __Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v66 = 0U;
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v0 = 0U;
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v64 = 0U;
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v65 = 0U;
    vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v66 = 0U;
    vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp = 0U;
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg = 0ULL;
        vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst = 0U;
    } else {
        vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg 
            = (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__add_axi_aw_addr[4U])));
        vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg 
            = (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__add_axi_w_data[4U])));
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst 
            = ((0xfU == (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst
                : ((IData)(vlSelf->rst) ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst));
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
    if ((0U != vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code 
            = ((0x100073U == vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                : 0ULL);
    } else if ((0U == vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o)) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code = 0ULL;
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1 = 0ULL;
        vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state = 0U;
        vlSelf->SocTop__DOT__clint6__DOT__time_reg_id = 0U;
        __Vdly__SocTop__DOT__rvcpu1__DOT__wb_regfile_data = 0ULL;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o;
        vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state 
            = vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt;
        vlSelf->SocTop__DOT__clint6__DOT__time_reg_id 
            = (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                       >> 4U));
        __Vdly__SocTop__DOT__rvcpu1__DOT__wb_regfile_data 
            = ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                ? ((IData)((0x1fU == (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                    ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data)
                : vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data);
    }
    __Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_ena = (
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
    __Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_addr = 
        ((IData)(vlSelf->rst) ? 0U : ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                                       ? ((IData)((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                           ? 0U : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr))
                                       : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr)));
    if (vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t) {
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0 
            = vlSelf->SocTop__DOT__i_cache2__DOT__miss_data;
        __Vdlyvset__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                >> 3U)));
    }
    if (vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o) {
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0 
            = vlSelf->SocTop__DOT__i_cache2__DOT__miss_data;
        __Vdlyvset__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                >> 3U)));
    }
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
    vlSelf->SocTop__DOT__clint6__DOT__state_time_m 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_m_nxt));
    __Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_ena 
        = ((~ (IData)(vlSelf->rst)) & ((0xfU == (0xfU 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                        ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena)
                                        : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena)));
    __Vdly__SocTop__DOT__rvcpu1__DOT__if_id_pc = ((IData)(vlSelf->rst)
                                                   ? 0ULL
                                                   : 
                                                  ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp))
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(
                                                            (2U 
                                                             == 
                                                             (0x1eU 
                                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                                     ? 0ULL
                                                     : 
                                                    ((IData)(
                                                             (7U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc
                                                      : vlSelf->SocTop__DOT__rvcpu_inst_addr))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)) 
                                       & ((7U == (7U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                           ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena)
                                           : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena))));
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data 
        = ((IData)(vlSelf->rst) ? 0ULL : ((0xfU == 
                                           (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                           ? vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data
                                           : vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data));
    vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data 
        = vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram
        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                           >> 3U)))];
    vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data 
        = vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram
        [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                           >> 3U)))];
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp = 0U;
    } else {
        vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id 
            = (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                       >> 8U));
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
        __Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_addr = 0U;
        vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state = 0U;
        vlSelf->SocTop__DOT__clint6__DOT__state_time_r = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs 
            = (3U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                      ? (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                 >> 0xdU)) : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs)));
        __Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_addr 
            = ((0xfU == (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr)
                : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr));
        vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state 
            = vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt;
        vlSelf->SocTop__DOT__clint6__DOT__state_time_r 
            = vlSelf->SocTop__DOT__clint6__DOT__state_time_r_nxt;
        vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel 
            = ((0xfU == (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel)
                : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel));
    }
    vlSelf->SocTop__DOT__i_cache2__DOT__read_ok = (0x20U 
                                                   == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc 
        = ((IData)(vlSelf->rst) ? 0ULL : ((0xfU == 
                                           (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                           ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc
                                           : ((IData)(vlSelf->rst)
                                               ? 0ULL
                                               : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)));
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause 
        = ((IData)(vlSelf->rst) ? 0ULL : ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                           ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt
                                           : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause));
    vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data 
        = vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram
        [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                           >> 3U)))];
    vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data 
        = vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram
        [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                           >> 3U)))];
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc = 0ULL;
        __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_op1 = 0ULL;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc 
            = (((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                 | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                ? (0xfffffffffffffffcULL & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data)
                : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc);
        __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                ? 0ULL : ((7U == (7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                           ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1
                           : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op));
    }
    vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok = 
        (2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite));
    vlSelf->SocTop__DOT__d_cache3__DOT__read_ok = (2U 
                                                   == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread));
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
    if (vlSelf->rst) {
        __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] = 0U;
        __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] = 0U;
        __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U] = 0U;
        __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U] = 0U;
    } else if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid) {
        __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] 
            = (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] 
               << 1U);
        __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] 
            = ((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] 
                >> 0x1fU) | (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] 
                             << 1U));
        __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U] 
            = ((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] 
                >> 0x1fU) | (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U] 
                             << 1U));
        __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U] 
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
        __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] 
            = __Vtemp46[0U];
        __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] 
            = __Vtemp46[1U];
        __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U] 
            = __Vtemp46[2U];
        __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U] 
            = __Vtemp46[3U];
    }
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
    if ((((4U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
          & ((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data 
              == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                  >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild))) 
         | (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t))) {
        __Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter2__v0 = 1U;
        __Vdlyvdim0__SocTop__DOT__i_cache2__DOT__i_counter2__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                >> 3U)));
    }
    if (((IData)(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand) 
         & (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))) {
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v1 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [0U])));
        __Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter2__v1 = 1U;
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v2 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [1U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [1U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v3 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [2U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [2U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v4 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [3U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [3U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v5 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [4U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [4U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v6 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [5U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [5U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v7 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [6U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [6U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v8 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [7U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [7U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v9 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [8U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [8U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v10 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [9U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                    [9U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v11 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0xaU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                      [0xaU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v12 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0xbU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                      [0xbU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v13 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0xcU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                      [0xcU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v14 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0xdU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                      [0xdU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v15 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0xeU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                      [0xeU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v16 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0xfU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                      [0xfU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v17 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x10U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v18 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x11U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v19 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x12U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v20 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x13U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v21 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x14U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v22 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x15U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v23 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x16U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v24 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x17U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v25 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x18U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v26 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x19U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v27 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x1aU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v28 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x1bU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v29 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x1cU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v30 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x1dU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v31 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x1eU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v32 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x1fU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v33 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x20U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v34 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x21U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v35 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x22U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v36 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x23U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v37 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x24U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v38 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x25U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v39 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x26U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v40 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x27U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v41 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x28U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v42 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x29U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v43 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x2aU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v44 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x2bU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v45 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x2cU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v46 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x2dU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v47 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x2eU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v48 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x2fU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v49 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x30U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v50 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x31U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v51 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x32U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v52 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x33U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v53 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x34U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v54 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x35U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v55 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x36U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v56 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x37U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v57 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x38U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v58 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x39U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v59 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x3aU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v60 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x3bU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v61 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x3cU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v62 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x3dU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v63 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x3eU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v64 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2
                                       [0x3fU])));
    }
    if ((((4U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
          & ((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data 
              == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                  >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild))) 
         | (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o))) {
        __Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter1__v0 = 1U;
        __Vdlyvdim0__SocTop__DOT__i_cache2__DOT__i_counter1__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                >> 3U)));
    }
    if (((IData)(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand) 
         & (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))) {
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v1 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [0U])));
        __Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter1__v1 = 1U;
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v2 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [1U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [1U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v3 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [2U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [2U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v4 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [3U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [3U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v5 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [4U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [4U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v6 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [5U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [5U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v7 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [6U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [6U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v8 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [7U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [7U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v9 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [8U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [8U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v10 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [9U]) ? 7U : (7U & ((IData)(1U) + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                    [9U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v11 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0xaU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                      [0xaU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v12 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0xbU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                      [0xbU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v13 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0xcU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                      [0xcU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v14 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0xdU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                      [0xdU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v15 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0xeU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                      [0xeU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v16 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0xfU]) ? 7U : (7U & ((IData)(1U) + 
                                      vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                      [0xfU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v17 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x10U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v18 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x11U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v19 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x12U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v20 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x13U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v21 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x14U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v22 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x15U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v23 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x16U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v24 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x17U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v25 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x18U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v26 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x19U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v27 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x1aU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v28 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x1bU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v29 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x1cU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v30 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x1dU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v31 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x1eU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v32 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x1fU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v33 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x20U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v34 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x21U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v35 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x22U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v36 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x23U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v37 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x24U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v38 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x25U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v39 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x26U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v40 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x27U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v41 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x28U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v42 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x29U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v43 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x2aU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v44 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x2bU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v45 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x2cU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v46 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x2dU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v47 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x2eU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v48 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x2fU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v49 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x30U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v50 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x31U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v51 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x32U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v52 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x33U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v53 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x34U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v54 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x35U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v55 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x36U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v56 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x37U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v57 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x38U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v58 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x39U])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v59 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x3aU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v60 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x3bU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v61 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x3cU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v62 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x3dU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v63 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x3eU])));
        __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v64 
            = ((7U == vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                       + vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1
                                       [0x3fU])));
    }
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                         ? 0U : ((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                                  ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)
                                                  : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip 
        = ((~ (IData)(vlSelf->rst)) & (vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l 
                                       > vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h));
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid = 0U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ok = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ok = 0U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitrate_i_data = vlSelf->SocTop__DOT__t_axi_r_data;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitrate_i_data = 0ULL;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid = 1U;
    } else if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                         & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
        if ((2U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid = 0U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_ok = 1U;
    } else if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                         & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
        if ((2U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_ok = 0U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        if (vlSelf->SocTop__DOT__arbitratem4__DOT__read_dcache_shankhand) {
            vlSelf->SocTop__DOT__arbitrate_d_data = vlSelf->SocTop__DOT__t_axi_r_data;
        }
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitrate_d_data = 0ULL;
        }
    }
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success)))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                      & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
            if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
                vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr 
                    = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_dcache_shankhand)
                        ? vlSelf->SocTop__DOT__d_cache_out_addr
                        : (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__uncache_arb_addr));
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success)))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                      & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
            if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
                vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id = 1U;
            }
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_addr = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_addr 
                = vlSelf->SocTop__DOT__i_cache_addr;
        }
    }
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
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success)))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                      & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
            if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
                vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last = 1U;
            }
        }
    }
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
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_id = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_id = 1U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_id = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_id = 0U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U != (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success)))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                      & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
            if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
                vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos = 0U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success)))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                      & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
            if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
                vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache = 2U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success)))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                      & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
            if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
                vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst = 1U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success)))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                      & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
            if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
                vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size = 3U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success)))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                      & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
            if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
                vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port = 0U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success)))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                      & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
            if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
                vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len = 0U;
            }
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_prot = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_prot = 0U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_cache = 2U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_cache = 2U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_qos = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_qos = 0U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_cache = 2U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_cache = 2U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_prot = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_prot = 0U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_qos = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_qos = 0U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid = 0U;
    } else if (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid = 0U;
    } else if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid = 1U;
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid = 0U;
    } else if (((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid = 0U;
    } else if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid = 1U;
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_len = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_len = 0U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_size = 3U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_size = 3U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_burst = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand)))) {
        if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_burst = 1U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_size = 3U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_size = 3U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_len = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_len = 0U;
        }
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_burst = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand)))) {
        if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
            vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_burst = 1U;
        }
    }
    vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_pc 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                           ? 0ULL : 
                                          ((7U == (7U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc
                                            : ((IData)(vlSelf->rst)
                                                ? 0ULL
                                                : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc))));
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid = 0U;
    } else if (vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid = 0U;
    } else if ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid = 1U;
    }
    if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid = 0U;
    } else if (vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid = 0U;
    } else if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
        vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid = 1U;
    }
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
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success)))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                      & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
            if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
                vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb 
                    = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_dcache_shankhand)
                        ? 0xffU : ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                    ? (IData)(vlSelf->SocTop__DOT__rvcpu_wmask)
                                    : 0U));
            }
        }
    }
    if ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0 = 0U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((2U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 8U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1 = 8U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((4U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 0x10U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2 = 0x10U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((8U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 0x18U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3 = 0x18U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x10U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 0x20U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4 = 0x20U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x20U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 0x28U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5 = 0x28U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x40U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 0x30U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6 = 0x30U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
                                >> 0x38U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7 = 0x38U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((1U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0 = 0U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((2U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 8U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1 = 8U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((4U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 0x10U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2 = 0x10U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((8U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 0x18U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3 = 0x18U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x10U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 0x20U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4 = 0x20U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x20U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 0x28U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5 = 0x28U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x40U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 0x30U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6 = 0x30U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1))) {
        __Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7 
            = (0xffU & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
                                >> 0x38U)));
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7 = 1U;
        __Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7 = 0x38U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success)))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand) 
                      & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand))))) {
            if ((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
                vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data 
                    = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_dcache_shankhand)
                        ? ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                            ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                            : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                                : 0ULL)) : ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                             ? vlSelf->SocTop__DOT__rvcpu_data_o
                                             : 0ULL));
            }
        }
    }
    __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_type 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                                         ? 0U : ((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                                  ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type)
                                                  : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))));
    if (vlSelf->rst) {
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v0 = 1U;
    } else if ((1U & (~ ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                         & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                            == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 9U)))))) {
        if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
             & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                == (vlSelf->SocTop__DOT__uncache_dc_addr 
                    >> 9U)))) {
            __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v64 = 1U;
            __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty2__v64 
                = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                    >> 3U)));
        } else if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_o) 
                             | (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_o))))) {
            if (((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_t) 
                 | (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_t))) {
                __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v65 = 1U;
                __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty2__v65 
                    = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 3U)));
            }
        }
    }
    if (vlSelf->rst) {
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v0 = 1U;
    } else if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                   == (vlSelf->SocTop__DOT__uncache_dc_addr 
                       >> 9U)))) {
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v64 = 1U;
        __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty1__v64 
            = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 3U)));
    } else if ((1U & (~ ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                         & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                            == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                >> 9U)))))) {
        if (((IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_o) 
             | (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_o))) {
            __Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v65 = 1U;
            __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty1__v65 
                = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                    >> 3U)));
        }
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel = 0U;
        __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr = 0U;
        vlSelf->__Vdly__SocTop__DOT__rvcpu_inst_addr = 0x80000000ULL;
        __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_offset = 0U;
        __Vtemp53 = 0ULL;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                ? 0U : ((7U == (7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst
                         : ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)));
        vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                ? 0U : (7U & ((7U == (7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                               ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel)
                               : ((IData)(vlSelf->rst)
                                   ? 0U : (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                           >> 0xcU)))));
        __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                ? 0U : (0x1fU & ((7U == (7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                  ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)
                                  : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena)
                                      ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
                                          ? 0xbU : 
                                         (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                          >> 7U)) : 0U))));
        vlSelf->__Vdly__SocTop__DOT__rvcpu_inst_addr 
            = ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                ? vlSelf->SocTop__DOT__rvcpu_inst_addr
                : (((0U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
                    & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__ex_pc_change) 
                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)))
                    ? vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_ex
                    : (((0U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
                        & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__id_pc_change) 
                           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena)))
                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_id
                        : ((IData)(vlSelf->rst) ? 0ULL
                            : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                ? (0xfffffffffffffffeULL 
                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)))));
        __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_offset 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                ? 0U : (0xfffU & ((7U == (7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                   ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset)
                                   : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                                       ? (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                          >> 0x14U)
                                       : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                                           ? ((0xfe0U 
                                               & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                    >> 7U)))
                                           : 0U)))));
        __Vtemp53 = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena)
                      ? 0ULL : ((7U == (7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                 ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2
                                 : ((IData)(vlSelf->rst)
                                     ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2)
                                                ? (
                                                   (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
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
                                                : ((IData)(
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
                                                      : 0ULL)))))));
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 = __Vtemp53;
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr = 0ULL;
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__if_id_inst = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
            = ((0xfU == (0xfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr
                : ((IData)((0U != (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))))
                    ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                       + (((- (QData)((IData)((1U & 
                                               ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset) 
                                                >> 0xbU))))) 
                           << 0xcU) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset))))
                    : 0ULL));
        vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__if_id_inst 
            = ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                 | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush)) 
                | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp))
                ? 0U : ((IData)((2U == (0x1eU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                         ? 0U : ((IData)((7U == (7U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                  ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst
                                  : vlSelf->SocTop__DOT__i_cache_inst_data)));
    }
    if (vlSelf->rst) {
        __Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v0 = 1U;
    } else {
        if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
             & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                == (vlSelf->SocTop__DOT__uncache_dc_addr 
                    >> 9U)))) {
            __Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v64 = 1U;
            __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter2__v64 
                = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                    >> 3U)));
        }
        if (((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
             & (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                == (vlSelf->SocTop__DOT__uncache_dc_addr 
                    >> 9U)))) {
            __Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v65 = 1U;
            __Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter2__v65 
                = (0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                    >> 3U)));
        }
        if ((((IData)(vlSelf->SocTop__DOT__uncache_dc_re) 
              & (IData)(vlSelf->SocTop__DOT__uncache_dc_we)) 
             & (IData)(vlSelf->SocTop__DOT__uncache_dc_finish))) {
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v66 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [0U])));
            __Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v66 = 1U;
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v67 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [1U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [1U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v68 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [2U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [2U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v69 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [3U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [3U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v70 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [4U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [4U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v71 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [5U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [5U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v72 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [6U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [6U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v73 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [7U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [7U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v74 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [8U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [8U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v75 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [9U]) ? 7U : (7U & ((IData)(1U) 
                                        + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                        [9U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v76 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0xaU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                          [0xaU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v77 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0xbU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                          [0xbU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v78 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0xcU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                          [0xcU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v79 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0xdU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                          [0xdU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v80 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0xeU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                          [0xeU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v81 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0xfU]) ? 7U : (7U & ((IData)(1U) 
                                          + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                          [0xfU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v82 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x10U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x10U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v83 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x11U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x11U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v84 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x12U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x12U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v85 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x13U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x13U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v86 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x14U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x14U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v87 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x15U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x15U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v88 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x16U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x16U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v89 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x17U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x17U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v90 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x18U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x18U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v91 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x19U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x19U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v92 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x1aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x1aU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v93 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x1bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x1bU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v94 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x1cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x1cU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v95 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x1dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x1dU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v96 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x1eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x1eU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v97 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x1fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x1fU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v98 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x20U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x20U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v99 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x21U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x21U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v100 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x22U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x22U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v101 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x23U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x23U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v102 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x24U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x24U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v103 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x25U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x25U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v104 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x26U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x26U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v105 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x27U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x27U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v106 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x28U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x28U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v107 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x29U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x29U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v108 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x2aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x2aU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v109 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x2bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x2bU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v110 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x2cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x2cU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v111 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x2dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x2dU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v112 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x2eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x2eU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v113 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x2fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x2fU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v114 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x30U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x30U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v115 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x31U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x31U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v116 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x32U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x32U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v117 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x33U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x33U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v118 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x34U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x34U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v119 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x35U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x35U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v120 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x36U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x36U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v121 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x37U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x37U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v122 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x38U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x38U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v123 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x39U]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x39U])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v124 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x3aU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x3aU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v125 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x3bU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x3bU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v126 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x3cU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x3cU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v127 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x3dU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x3dU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v128 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x3eU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x3eU])));
            __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v129 
                = ((7U == vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                    [0x3fU]) ? 7U : (7U & ((IData)(1U) 
                                           + vlSelf->SocTop__DOT__d_cache3__DOT__counter2
                                           [0x3fU])));
        }
    }
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type 
        = ((IData)(vlSelf->rst) ? 0U : ((0xfU == (0xfU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))
                                         ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type)
                                         : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type)));
    if (__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0) {
        vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram[__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram__v0;
    }
    if (__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0) {
        vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram[__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram__v0;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U] 
        = __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U];
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U] 
        = __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U];
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U] 
        = __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U];
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U] 
        = __Vdly__SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U];
    if (__Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter2__v0) {
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__i_counter2__v0] = 0U;
    }
    if (__Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter2__v1) {
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v1;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[1U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v2;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[2U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v3;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[3U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v4;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[4U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v5;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[5U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v6;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[6U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v7;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[7U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v8;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[8U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v9;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[9U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v10;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0xaU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v11;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0xbU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v12;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0xcU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v13;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0xdU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v14;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0xeU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v15;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0xfU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v16;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x10U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v17;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x11U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v18;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x12U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v19;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x13U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v20;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x14U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v21;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x15U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v22;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x16U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v23;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x17U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v24;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x18U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v25;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x19U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v26;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x1aU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v27;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x1bU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v28;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x1cU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v29;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x1dU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v30;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x1eU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v31;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x1fU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v32;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x20U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v33;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x21U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v34;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x22U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v35;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x23U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v36;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x24U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v37;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x25U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v38;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x26U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v39;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x27U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v40;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x28U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v41;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x29U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v42;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x2aU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v43;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x2bU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v44;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x2cU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v45;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x2dU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v46;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x2eU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v47;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x2fU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v48;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x30U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v49;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x31U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v50;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x32U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v51;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x33U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v52;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x34U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v53;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x35U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v54;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x36U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v55;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x37U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v56;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x38U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v57;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x39U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v58;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x3aU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v59;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x3bU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v60;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x3cU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v61;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x3dU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v62;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x3eU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v63;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter2[0x3fU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter2__v64;
    }
    if (__Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter1__v0) {
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__i_counter1__v0] = 0U;
    }
    if (__Vdlyvset__SocTop__DOT__i_cache2__DOT__i_counter1__v1) {
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v1;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[1U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v2;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[2U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v3;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[3U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v4;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[4U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v5;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[5U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v6;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[6U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v7;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[7U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v8;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[8U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v9;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[9U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v10;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0xaU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v11;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0xbU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v12;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0xcU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v13;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0xdU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v14;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0xeU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v15;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0xfU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v16;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x10U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v17;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x11U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v18;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x12U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v19;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x13U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v20;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x14U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v21;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x15U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v22;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x16U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v23;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x17U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v24;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x18U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v25;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x19U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v26;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x1aU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v27;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x1bU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v28;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x1cU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v29;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x1dU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v30;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x1eU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v31;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x1fU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v32;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x20U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v33;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x21U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v34;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x22U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v35;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x23U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v36;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x24U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v37;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x25U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v38;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x26U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v39;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x27U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v40;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x28U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v41;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x29U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v42;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x2aU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v43;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x2bU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v44;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x2cU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v45;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x2dU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v46;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x2eU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v47;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x2fU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v48;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x30U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v49;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x31U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v50;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x32U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v51;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x33U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v52;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x34U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v53;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x35U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v54;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x36U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v55;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x37U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v56;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x38U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v57;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x39U] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v58;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x3aU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v59;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x3bU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v60;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x3cU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v61;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x3dU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v62;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x3eU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v63;
        vlSelf->SocTop__DOT__i_cache2__DOT__i_counter1[0x3fU] 
            = __Vdlyvval__SocTop__DOT__i_cache2__DOT__i_counter1__v64;
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v0)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v1)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v2)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v3)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v4)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v5)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v6)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram__v7)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v0)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v1)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v2)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v3)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v4)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v5)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v6)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram
                [__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7]) 
               | ((QData)((IData)(__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7)) 
                  << (IData)(__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram__v7)));
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty2[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v64) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty2[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty2__v64] = 1U;
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty2__v65) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty2[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty2__v65] = 0U;
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->SocTop__DOT__d_cache3__DOT__dirty1[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v64) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty1[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty1__v64] = 1U;
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__dirty1__v65) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty1[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__dirty1__v65] = 0U;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc = __Vdly__SocTop__DOT__rvcpu1__DOT__if_id_pc;
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr = __Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_addr;
    vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena = __Vdly__SocTop__DOT__rvcpu1__DOT__wb_id_ena;
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr 
        = __Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_addr;
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena 
        = __Vdly__SocTop__DOT__rvcpu1__DOT__exmem_mem_ena;
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr 
        = __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr;
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset 
        = __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_offset;
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 = __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_op1;
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type 
        = __Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_type;
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->SocTop__DOT__d_cache3__DOT__counter2[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v64) {
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter2__v64] = 0U;
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v65) {
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter2__v65] = 0U;
    }
    if (__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter2__v66) {
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v66;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[1U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v67;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[2U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v68;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[3U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v69;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[4U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v70;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[5U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v71;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[6U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v72;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[7U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v73;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[8U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v74;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[9U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v75;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0xaU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v76;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0xbU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v77;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0xcU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v78;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0xdU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v79;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0xeU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v80;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0xfU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v81;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x10U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v82;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x11U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v83;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x12U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v84;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x13U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v85;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x14U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v86;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x15U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v87;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x16U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v88;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x17U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v89;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x18U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v90;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x19U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v91;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x1aU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v92;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x1bU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v93;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x1cU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v94;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x1dU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v95;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x1eU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v96;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x1fU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v97;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x20U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v98;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x21U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v99;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x22U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v100;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x23U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v101;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x24U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v102;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x25U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v103;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x26U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v104;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x27U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v105;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x28U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v106;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x29U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v107;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x2aU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v108;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x2bU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v109;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x2cU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v110;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x2dU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v111;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x2eU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v112;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x2fU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v113;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x30U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v114;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x31U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v115;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x32U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v116;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x33U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v117;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x34U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v118;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x35U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v119;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x36U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v120;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x37U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v121;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x38U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v122;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x39U] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v123;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x3aU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v124;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x3bU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v125;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x3cU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v126;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x3dU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v127;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x3eU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v128;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter2[0x3fU] 
            = __Vdlyvval__SocTop__DOT__d_cache3__DOT__counter2__v129;
    }
}

VL_INLINE_OPT void VSocTop___024root___sequent__TOP__4(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*0:0*/ SocTop__DOT__tim_axi_r_last;
    IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2;
    IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2;
    IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2;
    IData/*31:0*/ __Vilp;
    QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus;
    // Body
    if (vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->SocTop__DOT__d_cache3__DOT__counter1[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v64) {
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter1__v64] = 0U;
    }
    if (vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v65) {
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__counter1__v65] = 0U;
    }
    if (vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__counter1__v66) {
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v66;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[1U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v67;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[2U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v68;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[3U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v69;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[4U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v70;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[5U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v71;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[6U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v72;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[7U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v73;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[8U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v74;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[9U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v75;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0xaU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v76;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0xbU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v77;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0xcU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v78;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0xdU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v79;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0xeU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v80;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0xfU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v81;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x10U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v82;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x11U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v83;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x12U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v84;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x13U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v85;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x14U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v86;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x15U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v87;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x16U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v88;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x17U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v89;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x18U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v90;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x19U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v91;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x1aU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v92;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x1bU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v93;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x1cU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v94;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x1dU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v95;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x1eU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v96;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x1fU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v97;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x20U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v98;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x21U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v99;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x22U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v100;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x23U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v101;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x24U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v102;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x25U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v103;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x26U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v104;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x27U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v105;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x28U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v106;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x29U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v107;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x2aU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v108;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x2bU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v109;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x2cU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v110;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x2dU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v111;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x2eU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v112;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x2fU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v113;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x30U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v114;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x31U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v115;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x32U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v116;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x33U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v117;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x34U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v118;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x35U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v119;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x36U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v120;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x37U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v121;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x38U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v122;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x39U] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v123;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x3aU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v124;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x3bU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v125;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x3cU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v126;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x3dU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v127;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x3eU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v128;
        vlSelf->SocTop__DOT__d_cache3__DOT__counter1[0x3fU] 
            = vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__counter1__v129;
    }
    vlSelf->SocTop__DOT__add_axi_b_resp = (((IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp) 
                                            << 2U) 
                                           | (IData)(vlSelf->SocTop__DOT__io_axi_b_resp));
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o 
        = ((IData)(vlSelf->rst) ? 0U : ((0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))
                                         ? ((IData)(
                                                    (0x1fU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))))
                                             ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst)
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst));
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_pc_TOP(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1, vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code, (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn), vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn);
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
    vlSelf->out_write_ram_ena = (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state));
    if ((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))) {
        vlSelf->out_write_ram_addr = vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg;
        vlSelf->out_write_ram_data = vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg;
    } else {
        vlSelf->out_write_ram_addr = 0ULL;
        vlSelf->out_write_ram_data = 0ULL;
    }
    vlSelf->SocTop__DOT__tim_axi_b_valid = ((1U != (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_m)) 
                                            & (0U != (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_m)));
    vlSelf->SocTop__DOT__soc_axi_ar_ready = ((0U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                             | (1U 
                                                == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)));
    vlSelf->SocTop__DOT__add_axi_r_valid = (((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                             << 2U) 
                                            | (((2U 
                                                 == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r)) 
                                                << 1U) 
                                               | (IData)(vlSelf->SocTop__DOT__io_axi_r_valid)));
    SocTop__DOT__tim_axi_r_last = (2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r));
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t)))) {
        vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data 
            = (0x7fffffffffffffULL & vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram
               [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                  >> 3U)))]);
        vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild 
            = (1U & (IData)((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                >> 3U)))] 
                             >> 0x37U)));
    }
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o)))) {
        vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data 
            = (0x7fffffffffffffULL & vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram
               [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                  >> 3U)))]);
        vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild 
            = (1U & (IData)((vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                >> 3U)))] 
                             >> 0x37U)));
    }
    vlSelf->SocTop__DOT__i_cache2__DOT__state_inst 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst_nxt));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid 
        = (1U & (~ ((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready)) 
                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sigin_inst 
        = ((((0x86U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (0x51U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0xc1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
           | (0x13U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)));
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready 
        = ((((((((0x86U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                 | (0x1aU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
                | (0x25U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
               | (0x51U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
              | (0xc1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
             | (0x85U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0x43U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
           | (0x13U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l = 0ULL;
        vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h = 0ULL;
    } else {
        vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l 
            = vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_l_nxt;
        vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h 
            = vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h_nxt;
    }
    SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus 
        = ((((QData)((IData)(((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs)) 
                              << 0x1fU))) << 0x20U) 
            | ((QData)((IData)((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs) 
                                 << 2U) | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))) 
               << 0xbU)) | (QData)((IData)((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie) 
                                             << 7U) 
                                            | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie) 
                                               << 3U)))));
    vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state_nxt));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__ex_pc_change = 0U;
    } else if (((3U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__ex_pc_change = 1U;
    } else if ((1U & (~ ((3U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena))))) {
        if ((0U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__ex_pc_change = 0U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__id_pc_change = 0U;
    } else if ((1U & (~ ((3U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena))))) {
        if (((3U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__id_pc_change = 1U;
        } else if ((0U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__id_pc_change = 0U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_ex = 0ULL;
    } else if (((3U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_ex 
            = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                    ? (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                    : 0ULL));
    } else if ((1U & (~ ((3U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena))))) {
        if ((0U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_ex = 0ULL;
        }
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_id = 0ULL;
    } else if ((1U & (~ ((3U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena))))) {
        if (((3U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_id 
                = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
                    ? (0xfffffffffffffffeULL & ((((- (QData)((IData)(
                                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                    >> 0x14U)))) 
                                                + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op))
                    : 0ULL);
        } else if ((0U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_id = 0ULL;
        }
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                      >> 0x13U))))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2) 
                                         << 0xcU))));
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res 
        = (((0x3fU >= (0x7fU & ((IData)(0x40U) - (0x3fU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             ? ((- (QData)((IData)((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                  >> 0x3fU)))))) 
                << (0x7fU & ((IData)(0x40U) - (0x3fU 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             : 0ULL) | (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                        >> (0x3fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
           - (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2));
    SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
           << (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)));
    SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
           >> (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)));
    SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2 
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx 
        = ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))
            ? (0xfffU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
            : 0U);
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp = 0U;
    } else if (((3U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))) 
                & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush)))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp = 1U;
    } else if ((0U == (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl)))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
            = (0x7fffffffffffffULL & vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram
               [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                  >> 3U)))]);
        vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild 
            = (1U & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                >> 3U)))] 
                             >> 0x37U)));
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite = 1U;
        vlSelf->SocTop__DOT__d_cache3__DOT__state_dread = 1U;
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite 
            = vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt;
        vlSelf->SocTop__DOT__d_cache3__DOT__state_dread 
            = vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt;
    }
    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
            = (0x7fffffffffffffULL & vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram
               [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                  >> 3U)))]);
        vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild 
            = (1U & (IData)((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__uncache_dc_addr 
                                                >> 3U)))] 
                             >> 0x37U)));
    }
    vlSelf->SocTop__DOT__add_axi_b_valid = (((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                             << 2U) 
                                            | (((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                                << 1U) 
                                               | (IData)(vlSelf->SocTop__DOT__io_axi_b_valid)));
    vlSelf->SocTop__DOT__add_axi_r_last = (((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                            << 2U) 
                                           | (((IData)(SocTop__DOT__tim_axi_r_last) 
                                               << 1U) 
                                              | (IData)(vlSelf->SocTop__DOT__io_axi_r_last)));
    if (vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0) {
        vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram[vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0] 
            = (((~ (0x7fffffffffffffULL << (IData)(vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0))) 
                & vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram
                [vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0]) 
               | (0xffffffffffffffULL & (vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0 
                                         << (IData)(vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v0))));
        vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram[vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v1] 
            = (vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram
               [vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v1] 
               | (0xffffffffffffffULL & ((QData)((IData)(1U)) 
                                         << (IData)(vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram__v1))));
    }
    if (vlSelf->__Vdlyvset__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0) {
        vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram[vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0] 
            = (((~ (0x7fffffffffffffULL << (IData)(vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0))) 
                & vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram
                [vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0]) 
               | (0xffffffffffffffULL & (vlSelf->__Vdlyvval__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0 
                                         << (IData)(vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v0))));
        vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram[vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v1] 
            = (vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram
               [vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v1] 
               | (0xffffffffffffffULL & ((QData)((IData)(1U)) 
                                         << (IData)(vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram__v1))));
    }
    vlSelf->SocTop__DOT__rvcpu_inst_addr = vlSelf->__Vdly__SocTop__DOT__rvcpu_inst_addr;
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready 
        = (((((0xeU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
              | (0x1cU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
             | (0x38U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0x70U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
           | (0xe0U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc = vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__idex_ex_pc;
    vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst = vlSelf->__Vdly__SocTop__DOT__rvcpu1__DOT__if_id_inst;
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res 
        = (((QData)((IData)((- (IData)((SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res 
        = (((QData)((IData)((- (IData)((SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res 
        = (((QData)((IData)((- (IData)((SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2)));
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
    if (vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram[vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0] 
            = (((~ (0x7fffffffffffffULL << (IData)(vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram
                [vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0]) 
               | (0xffffffffffffffULL & (vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0 
                                         << (IData)(vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v0))));
        vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram[vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v1] 
            = (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram
               [vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v1] 
               | (0xffffffffffffffULL & ((QData)((IData)(1U)) 
                                         << (IData)(vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram__v1))));
    }
    if (vlSelf->__Vdlyvset__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0) {
        vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram[vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0] 
            = (((~ (0x7fffffffffffffULL << (IData)(vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0))) 
                & vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram
                [vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0]) 
               | (0xffffffffffffffULL & (vlSelf->__Vdlyvval__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0 
                                         << (IData)(vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v0))));
        vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram[vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v1] 
            = (vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram
               [vlSelf->__Vdlyvdim0__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v1] 
               | (0xffffffffffffffULL & ((QData)((IData)(1U)) 
                                         << (IData)(vlSelf->__Vdlyvlsb__SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram__v1))));
    }
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_thepc_TOP(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o);
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
    if ((1U & (~ ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))))) {
        vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok 
            = ((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
               & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid));
    }
    if (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid)))) {
        vlSelf->SocTop__DOT__i_cache_read_ena = 1U;
    } else if (((2U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst)) 
                & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid))) {
        vlSelf->SocTop__DOT__i_cache_read_ena = 0U;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid) 
           & (~ (IData)((0U != vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))));
    vlSelf->SocTop__DOT__t_axi_r_ready = ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                          | (5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)));
    if ((4U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))) {
        vlSelf->SocTop__DOT__t_axi_ar_addr = vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_addr;
        vlSelf->SocTop__DOT__t_axi_ar_id = vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_id;
        vlSelf->SocTop__DOT__t_axi_ar_cache = vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_cache;
        vlSelf->SocTop__DOT__t_axi_ar_prot = vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_prot;
        vlSelf->SocTop__DOT__t_axi_ar_qos = vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_qos;
        vlSelf->SocTop__DOT__t_axi_ar_len = vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_len;
        vlSelf->SocTop__DOT__t_axi_ar_size = vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_size;
        vlSelf->SocTop__DOT__t_axi_ar_burst = vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_burst;
        vlSelf->SocTop__DOT__t_axi_ar_valid = vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid;
    } else {
        vlSelf->SocTop__DOT__t_axi_ar_addr = ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                               ? vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_addr
                                               : 0ULL);
        vlSelf->SocTop__DOT__t_axi_ar_id = ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                             ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_id)
                                             : 0U);
        vlSelf->SocTop__DOT__t_axi_ar_cache = ((5U 
                                                == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_cache)
                                                : 2U);
        vlSelf->SocTop__DOT__t_axi_ar_prot = ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                               ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_prot)
                                               : 0U);
        vlSelf->SocTop__DOT__t_axi_ar_qos = ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                              ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_qos)
                                              : 0U);
        vlSelf->SocTop__DOT__t_axi_ar_len = ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                              ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_len)
                                              : 0U);
        vlSelf->SocTop__DOT__t_axi_ar_size = ((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                               ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_size)
                                               : 3U);
        vlSelf->SocTop__DOT__t_axi_ar_burst = ((5U 
                                                == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state))
                                                ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_burst)
                                                : 1U);
        vlSelf->SocTop__DOT__t_axi_ar_valid = ((5U 
                                                == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                               & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid));
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena 
        = ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)) 
            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
           & (0ULL != vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc));
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
                    & SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus)) 
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

extern const VlUnpacked<CData/*1:0*/, 32> VSocTop__ConstPool__TABLE_287fc343_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSocTop__ConstPool__TABLE_0bdcfe05_0;
extern const VlUnpacked<CData/*2:0*/, 2048> VSocTop__ConstPool__TABLE_60a1e09e_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSocTop__ConstPool__TABLE_c02984f2_0;

VL_INLINE_OPT void VSocTop___024root___combo__TOP__5(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___combo__TOP__5\n"); );
    // Variables
    CData/*0:0*/ SocTop__DOT__rvcpu_we;
    CData/*0:0*/ SocTop__DOT__rvcpu_re;
    CData/*0:0*/ SocTop__DOT__core_stall_l;
    CData/*0:0*/ SocTop__DOT__uncache_arb_we;
    CData/*0:0*/ SocTop__DOT__uncache_arb_re;
    CData/*7:0*/ SocTop__DOT__uncache_dc_mask;
    CData/*3:0*/ SocTop__DOT__d_cache_out_type;
    CData/*0:0*/ SocTop__DOT__t_axi_aw_ready;
    CData/*0:0*/ SocTop__DOT__t_axi_w_ready;
    CData/*3:0*/ SocTop__DOT__t_axi_b_id;
    CData/*1:0*/ SocTop__DOT__t_axi_b_resp;
    CData/*0:0*/ SocTop__DOT__t_axi_b_valid;
    CData/*0:0*/ SocTop__DOT__t_axi_ar_ready;
    CData/*1:0*/ SocTop__DOT__t_axi_r_resp;
    CData/*2:0*/ SocTop__DOT__add_axi_aw_ready;
    CData/*2:0*/ SocTop__DOT__add_axi_w_ready;
    CData/*2:0*/ SocTop__DOT__add_axi_ar_ready;
    CData/*0:0*/ SocTop__DOT__soc_axi_aw_ready;
    CData/*0:0*/ SocTop__DOT__soc_axi_w_ready;
    CData/*0:0*/ SocTop__DOT__tim_axi_aw_ready;
    CData/*0:0*/ SocTop__DOT__tim_axi_w_ready;
    CData/*0:0*/ SocTop__DOT__tim_axi_ar_ready;
    CData/*2:0*/ SocTop__DOT__mmio_thing;
    CData/*2:0*/ SocTop__DOT__prot_chose_write;
    CData/*4:0*/ SocTop__DOT__rvcpu1__DOT__id_reg_addr1;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id_reg_ena1;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id_ctrl_req;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__mem_ctrl_req;
    CData/*4:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1;
    CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1;
    CData/*7:0*/ SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte;
    CData/*7:0*/ SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask;
    CData/*0:0*/ SocTop__DOT__uncache_mmio7__DOT__start_sign;
    CData/*0:0*/ SocTop__DOT__axi_mnq4__DOT__ar_shankhand;
    CData/*0:0*/ SocTop__DOT__clint6__DOT__aw_shakehand;
    CData/*0:0*/ SocTop__DOT__clint6__DOT__w_shakehand;
    CData/*0:0*/ SocTop__DOT__clint6__DOT__mode_right;
    CData/*0:0*/ SocTop__DOT__clint6__DOT__ar_shakehand;
    CData/*6:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx3;
    CData/*6:0*/ __Vtableidx4;
    CData/*4:0*/ __Vtableidx5;
    SData/*11:0*/ SocTop__DOT__add_axi_b_id;
    SData/*11:0*/ SocTop__DOT__add_axi_r_id;
    SData/*11:0*/ SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm;
    SData/*15:0*/ SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte;
    SData/*10:0*/ __Vtableidx1;
    VlWide<6>/*191:0*/ SocTop__DOT__add_axi_r_data;
    IData/*19:0*/ SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm;
    IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word;
    QData/*63:0*/ SocTop__DOT__rvcpu_data_addr;
    QData/*63:0*/ SocTop__DOT__uncache_dc_data;
    QData/*63:0*/ SocTop__DOT__d_cache_data_out;
    QData/*63:0*/ SocTop__DOT__tim_axi_r_data;
    QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res;
    QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data;
    QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu;
    QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang;
    QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data;
    QData/*63:0*/ SocTop__DOT__clint6__DOT__wmask;
    // Body
    if (vlSelf->rst) {
        SocTop__DOT__t_axi_r_resp = 0U;
        SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu = 0ULL;
        SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang = 0ULL;
        SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data = 0ULL;
        SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask = 0U;
        SocTop__DOT__rvcpu_data_addr = 0ULL;
    } else {
        SocTop__DOT__t_axi_r_resp = (3U & ((1U & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                            ? (IData)(vlSelf->SocTop__DOT__add_axi_r_resp)
                                            : ((2U 
                                                & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                ? ((IData)(vlSelf->SocTop__DOT__add_axi_r_resp) 
                                                   >> 2U)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                    ? 
                                                   ((IData)(vlSelf->SocTop__DOT__add_axi_r_resp) 
                                                    >> 4U)
                                                    : 0U))));
        SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu 
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
        SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang 
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
        SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data 
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
        SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask 
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
        SocTop__DOT__rvcpu_data_addr = vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr;
    }
    SocTop__DOT__rvcpu_we = (1U & ((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type)));
    SocTop__DOT__rvcpu_re = (1U & ((~ (IData)(vlSelf->rst)) 
                                   & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type) 
                                      >> 1U)));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc = 0ULL;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst;
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc;
    }
    vlSelf->SocTop__DOT__t_axi_r_valid = (1U & ((~ (IData)(vlSelf->rst)) 
                                                & ((1U 
                                                    & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                    ? (IData)(vlSelf->SocTop__DOT__add_axi_r_valid)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                     ? 
                                                    ((IData)(vlSelf->SocTop__DOT__add_axi_r_valid) 
                                                     >> 1U)
                                                     : 
                                                    (((IData)(vlSelf->SocTop__DOT__prot_chose_read) 
                                                      & (IData)(vlSelf->SocTop__DOT__add_axi_r_valid)) 
                                                     >> 2U)))));
    vlSelf->SocTop__DOT__t_axi_r_last = (1U & ((~ (IData)(vlSelf->rst)) 
                                               & ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                   ? (IData)(vlSelf->SocTop__DOT__add_axi_r_last)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                    ? 
                                                   ((IData)(vlSelf->SocTop__DOT__add_axi_r_last) 
                                                    >> 1U)
                                                    : 
                                                   (((IData)(vlSelf->SocTop__DOT__prot_chose_read) 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_r_last)) 
                                                    >> 2U)))));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc = 0U;
        SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                         >> 2U))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                       >> 2U))));
        SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal 
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
    if ((1U & (~ ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok 
            = ((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
               & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)));
    }
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type = 8U;
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type = 0U;
    }
    if ((1U & (~ ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok 
            = ((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
               & (8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)));
    }
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type = 2U;
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type = 0U;
    }
    vlSelf->SocTop__DOT__add_axi_r_ready = ((IData)(vlSelf->rst)
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                              ? ((6U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready)) 
                                                 | (IData)(vlSelf->SocTop__DOT__t_axi_r_ready))
                                              : ((2U 
                                                  & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                  ? 
                                                 ((5U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__t_axi_r_ready) 
                                                     << 1U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                   ? 
                                                  ((3U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_r_ready) 
                                                      << 2U))
                                                   : 0U))));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_ar_addr[0U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[1U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[2U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[3U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[4U] = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_addr[5U] = 0U;
    } else if ((1U & (IData)(vlSelf->SocTop__DOT__prot_chose_read))) {
        vlSelf->SocTop__DOT__add_axi_ar_addr[0U] = (IData)(vlSelf->SocTop__DOT__t_axi_ar_addr);
        vlSelf->SocTop__DOT__add_axi_ar_addr[1U] = (IData)(
                                                           (vlSelf->SocTop__DOT__t_axi_ar_addr 
                                                            >> 0x20U));
    } else if ((2U & (IData)(vlSelf->SocTop__DOT__prot_chose_read))) {
        vlSelf->SocTop__DOT__add_axi_ar_addr[2U] = (IData)(vlSelf->SocTop__DOT__t_axi_ar_addr);
        vlSelf->SocTop__DOT__add_axi_ar_addr[3U] = (IData)(
                                                           (vlSelf->SocTop__DOT__t_axi_ar_addr 
                                                            >> 0x20U));
    } else if ((4U & (IData)(vlSelf->SocTop__DOT__prot_chose_read))) {
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
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_ar_id = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_cache = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_prot = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_qos = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_len = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_size = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_burst = 0U;
        vlSelf->SocTop__DOT__add_axi_ar_valid = 0U;
    } else {
        vlSelf->SocTop__DOT__add_axi_ar_id = ((1U & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                               ? ((0xff0U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id)) 
                                                  | (IData)(vlSelf->SocTop__DOT__t_axi_ar_id))
                                               : ((2U 
                                                   & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                   ? 
                                                  ((0xf0fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_id) 
                                                      << 4U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                    ? 
                                                   ((0xffU 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_id) 
                                                       << 8U))
                                                    : 0U)));
        vlSelf->SocTop__DOT__add_axi_ar_cache = ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                  ? 
                                                 ((0xff0U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache)) 
                                                  | (IData)(vlSelf->SocTop__DOT__t_axi_ar_cache))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                   ? 
                                                  ((0xf0fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_cache) 
                                                      << 4U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                    ? 
                                                   ((0xffU 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_cache) 
                                                       << 8U))
                                                    : 0U)));
        vlSelf->SocTop__DOT__add_axi_ar_prot = ((1U 
                                                 & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                 ? 
                                                ((0x1f8U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot)) 
                                                 | (IData)(vlSelf->SocTop__DOT__t_axi_ar_prot))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                  ? 
                                                 ((0x1c7U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_prot) 
                                                     << 3U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                   ? 
                                                  ((0x3fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_prot) 
                                                      << 6U))
                                                   : 0U)));
        vlSelf->SocTop__DOT__add_axi_ar_qos = ((1U 
                                                & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                ? (
                                                   (0xff0U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos)) 
                                                   | (IData)(vlSelf->SocTop__DOT__t_axi_ar_qos))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                    ? 
                                                   ((0xf0fU 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_qos) 
                                                       << 4U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                     ? 
                                                    ((0xffU 
                                                      & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos)) 
                                                     | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_qos) 
                                                        << 8U))
                                                     : 0U)));
        vlSelf->SocTop__DOT__add_axi_ar_len = ((1U 
                                                & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                ? (
                                                   (0xffff00U 
                                                    & vlSelf->SocTop__DOT__add_axi_ar_len) 
                                                   | (IData)(vlSelf->SocTop__DOT__t_axi_ar_len))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                    ? 
                                                   ((0xff00ffU 
                                                     & vlSelf->SocTop__DOT__add_axi_ar_len) 
                                                    | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_len) 
                                                       << 8U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                     ? 
                                                    ((0xffffU 
                                                      & vlSelf->SocTop__DOT__add_axi_ar_len) 
                                                     | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_len) 
                                                        << 0x10U))
                                                     : 0U)));
        vlSelf->SocTop__DOT__add_axi_ar_size = ((1U 
                                                 & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                 ? 
                                                ((0x1f8U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size)) 
                                                 | (IData)(vlSelf->SocTop__DOT__t_axi_ar_size))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                  ? 
                                                 ((0x1c7U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_size) 
                                                     << 3U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                   ? 
                                                  ((0x3fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_size) 
                                                      << 6U))
                                                   : 0U)));
        vlSelf->SocTop__DOT__add_axi_ar_burst = ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                  ? 
                                                 ((0x3cU 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst)) 
                                                  | (IData)(vlSelf->SocTop__DOT__t_axi_ar_burst))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                   ? 
                                                  ((0x33U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_burst) 
                                                      << 2U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_burst) 
                                                       << 4U))
                                                    : 0U)));
        vlSelf->SocTop__DOT__add_axi_ar_valid = ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                  ? 
                                                 ((6U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid)) 
                                                  | (IData)(vlSelf->SocTop__DOT__t_axi_ar_valid))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                   ? 
                                                  ((5U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_valid) 
                                                      << 1U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__t_axi_ar_valid) 
                                                       << 2U))
                                                    : 0U)));
    }
    SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data 
        = (((((0x86U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
              | (0x1aU == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
             | (0x25U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0x51U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))
            ? SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang
            : (((((0xc1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                  | (0x85U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
                 | (0x43U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) 
                | (0x13U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))
                ? SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu
                : 0ULL));
    if ((1U & ((IData)(vlSelf->rst) | (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))))) {
        vlSelf->SocTop__DOT__rvcpu_data_o = 0ULL;
        vlSelf->SocTop__DOT__rvcpu_wmask = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu_data_o = SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data;
        vlSelf->SocTop__DOT__rvcpu_wmask = SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask;
    }
    SocTop__DOT__rvcpu1__DOT__mem_ctrl_req = ((~ (IData)(vlSelf->rst)) 
                                              & (((IData)(SocTop__DOT__rvcpu_re) 
                                                  | (IData)(SocTop__DOT__rvcpu_we)) 
                                                 & (~ (IData)(vlSelf->SocTop__DOT__d_cache_mem_finish))));
    SocTop__DOT__uncache_mmio7__DOT__start_sign = (
                                                   ((IData)(SocTop__DOT__rvcpu_we) 
                                                    | (IData)(SocTop__DOT__rvcpu_re)) 
                                                   & (~ (IData)(vlSelf->SocTop__DOT__d_cache_mem_finish)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump 
        = ((IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal) 
           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x5000U == (0x42007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0U == (0x42007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x40000000U == (0x42007000U 
                                          & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x3000U == (0x2007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or = (1U 
                                                   & (IData)(
                                                             ((8U 
                                                               == 
                                                               (8U 
                                                                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                              & (0x6000U 
                                                                 == 
                                                                 (0x2007000U 
                                                                  & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw = 
        (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0U == (0x42007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw = 
        (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x5000U == (0x42007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw = 
        (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x40005000U == (0x42007000U 
                                          & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x1000U == (0x2007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw = 
        (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x40000000U == (0x42007000U 
                                          & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x4000U == (0x2007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x7000U == (0x2007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw = 
        (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x2000U == (0x2007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x40005000U == (0x42007000U 
                                          & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai = 
        (1U & (IData)(((0x10U == (0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x40005000U == (0x40007000U 
                                          & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2002000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x2001000U == (0x2007000U 
                                         & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw = 
        (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x2000000U == (0x2007000U 
                                         & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x2000000U == (0x2007000U 
                                         & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2003000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x2004000U == (0x2007000U 
                                         & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x2007000U == (0x2007000U 
                                         & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x2006000U == (0x2007000U 
                                         & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw = 
        (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x2004000U == (0x2007000U 
                                         & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw = 
        (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                       & (0x2006000U == (0x2007000U 
                                         & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu = 
        (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
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
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x3000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    SocTop__DOT__add_axi_r_id = ((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                    ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                    : 0U) << 8U) | 
                                 ((((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r))
                                     ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                >> 4U))
                                     : 0U) << 4U) | (IData)(vlSelf->SocTop__DOT__io_axi_r_id)));
    SocTop__DOT__axi_mnq4__DOT__ar_shankhand = (((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
                                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                                      >> 2U)) 
                                                  & (0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                         >> 0x10U)))) 
                                                 & (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                                        >> 6U)))) 
                                                & (1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                                       >> 4U))));
    SocTop__DOT__tim_axi_ar_ready = (((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                      >> 1U) & (IData)(
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
    SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res = ((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((0x40U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((0x20U 
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
                                                            ? SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                            : 
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                            << 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))))))
                                                      : 
                                                     ((0x20U 
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
                                                            : SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data)
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                            ? SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
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
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((0x20U 
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
                                                            ? SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
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
                                                            ? SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
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
                                                      : 
                                                     ((0x20U 
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
                                                            ? SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
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
                                                            : SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data)
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
                                                            ? SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
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
    vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache 
        = ((IData)(SocTop__DOT__uncache_mmio7__DOT__start_sign) 
           & (((0xa00003f8ULL <= SocTop__DOT__rvcpu_data_addr) 
               & (0xa00003ffULL >= SocTop__DOT__rvcpu_data_addr)) 
              | ((0xa0000048ULL <= SocTop__DOT__rvcpu_data_addr) 
                 & (0xa000004fULL >= SocTop__DOT__rvcpu_data_addr))));
    SocTop__DOT__mmio_thing = (((IData)(SocTop__DOT__uncache_mmio7__DOT__start_sign) 
                                & ((0xa00003f8ULL <= SocTop__DOT__rvcpu_data_addr) 
                                   & (0xa00003ffULL 
                                      >= SocTop__DOT__rvcpu_data_addr)))
                                ? 1U : (((IData)(SocTop__DOT__uncache_mmio7__DOT__start_sign) 
                                         & ((0xa0000048ULL 
                                             <= SocTop__DOT__rvcpu_data_addr) 
                                            & (0xa000004fULL 
                                               >= SocTop__DOT__rvcpu_data_addr)))
                                         ? 2U : 4U));
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
                                                           | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub)) 
                                                          | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl)) 
                                                         | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or)) 
                                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)) 
                                                       | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw)) 
                                                      | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw)) 
                                                     | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu)) 
                                                    | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu)) 
                                                   | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw)) 
                                                  | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw)))) 
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
                                                           | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add)) 
                                                          | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu)) 
                                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui)) 
                                                        | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw)) 
                                                       | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw)) 
                                                      | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw)) 
                                                     | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul)) 
                                                    | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh)) 
                                                   | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu)) 
                                                  | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu)))) 
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
                                                             | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub)) 
                                                            | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor)) 
                                                           | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra)) 
                                                          | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw)) 
                                                         | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw)) 
                                                        | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw)) 
                                                       | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh)) 
                                                      | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu)) 
                                                     | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu)) 
                                                    | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu)) 
                                                   | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw)) 
                                                  | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw)))) 
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
                                                             | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add)) 
                                                            | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt)) 
                                                           | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and)) 
                                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)) 
                                                         | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw)) 
                                                        | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw)) 
                                                       | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul)) 
                                                      | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh)) 
                                                     | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div)) 
                                                    | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw)) 
                                                   | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))) 
              << 2U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfdU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((((IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi) 
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
                                                             | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai)) 
                                                            | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu)) 
                                                           | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or)) 
                                                          | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal)) 
                                                         | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw)) 
                                                        | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw)) 
                                                       | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul)) 
                                                      | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div)) 
                                                     | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu)) 
                                                    | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw)) 
                                                   | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))) 
              << 1U));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1 = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
                                                ? 0xbU
                                                : (0x1fU 
                                                   & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                      >> 0xfU)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0x7fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((((IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs) 
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
                                                           | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll)) 
                                                          | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl)) 
                                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui)) 
                                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc)) 
                                                       | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw)) 
                                                      | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw)) 
                                                     | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw)) 
                                                    | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div)) 
                                                   | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem)) 
                                                  | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu)))) 
              << 7U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xbfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((((((IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
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
                                                             | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll)) 
                                                            | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor)) 
                                                           | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and)) 
                                                          | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal)) 
                                                         | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw)) 
                                                        | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw)) 
                                                       | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu)) 
                                                      | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw)) 
                                                     | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu)) 
                                                    | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem)) 
                                                   | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw)) 
                                                  | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw)))) 
              << 6U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfeU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | ((IData)(vlSelf->rst) ? 0U : (1U & (((
                                                   (((((((((((((IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc) 
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
                                                             | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai)) 
                                                            | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt)) 
                                                           | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra)) 
                                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc)) 
                                                         | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw)) 
                                                        | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw)) 
                                                       | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw)) 
                                                      | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw)) 
                                                     | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem)) 
                                                    | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu)) 
                                                   | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw)) 
                                                  | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw)) 
                                                 | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))));
    SocTop__DOT__rvcpu1__DOT__id_reg_ena1 = (1U & (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type)))) 
                                                    | (((IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                                        | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                                       | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)));
    vlSelf->SocTop__DOT__t_axi_r_id = ((IData)(vlSelf->rst)
                                        ? 0U : (0xfU 
                                                & ((1U 
                                                    & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                    ? (IData)(SocTop__DOT__add_axi_r_id)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                     ? 
                                                    ((IData)(SocTop__DOT__add_axi_r_id) 
                                                     >> 4U)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                      ? 
                                                     ((IData)(SocTop__DOT__add_axi_r_id) 
                                                      >> 8U)
                                                      : 0U)))));
    vlSelf->read_ena_sign_ = SocTop__DOT__axi_mnq4__DOT__ar_shankhand;
    vlSelf->out_addr_outp = ((IData)(SocTop__DOT__axi_mnq4__DOT__ar_shankhand)
                              ? (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))
                              : 0ULL);
    __Vtableidx3 = ((0xfffffff0U & (((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                     << 2U) & ((2U 
                                                == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                               << 4U))) 
                    | ((8U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                              << 1U)) | (((IData)(SocTop__DOT__axi_mnq4__DOT__ar_shankhand) 
                                          << 2U) | (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
    vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt 
        = VSocTop__ConstPool__TABLE_287fc343_0[__Vtableidx3];
    SocTop__DOT__add_axi_ar_ready = (((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
                                      << 2U) | (((IData)(SocTop__DOT__tim_axi_ar_ready) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_ar_ready)));
    SocTop__DOT__clint6__DOT__ar_shakehand = (((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                               >> 1U) 
                                              & (IData)(SocTop__DOT__tim_axi_ar_ready));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data 
        = ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))
            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2
            : ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type) 
                 >> 7U) & (7U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                : SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res));
    if (vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache) {
        vlSelf->SocTop__DOT__uncache_arb_addr = SocTop__DOT__rvcpu_data_addr;
        SocTop__DOT__uncache_dc_data = 0ULL;
    } else {
        vlSelf->SocTop__DOT__uncache_arb_addr = 0ULL;
        SocTop__DOT__uncache_dc_data = vlSelf->SocTop__DOT__rvcpu_data_o;
    }
    vlSelf->SocTop__DOT__uncache_dc_we = ((~ (IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)) 
                                          & (IData)(SocTop__DOT__rvcpu_we));
    vlSelf->SocTop__DOT__uncache_dc_re = ((~ (IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)) 
                                          & (IData)(SocTop__DOT__rvcpu_re));
    SocTop__DOT__uncache_dc_mask = (0xffU & (IData)(
                                                    ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                                      ? 0ULL
                                                      : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu_wmask)))));
    SocTop__DOT__uncache_arb_we = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache) 
                                   & (IData)(SocTop__DOT__rvcpu_we));
    SocTop__DOT__uncache_arb_re = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache) 
                                   & (IData)(SocTop__DOT__rvcpu_re));
    vlSelf->SocTop__DOT__uncache_dc_addr = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                             ? 0ULL
                                             : SocTop__DOT__rvcpu_data_addr);
    SocTop__DOT__prot_chose_write = SocTop__DOT__mmio_thing;
    SocTop__DOT__rvcpu1__DOT__id_reg_addr1 = ((IData)(SocTop__DOT__rvcpu1__DOT__id_reg_ena1)
                                               ? (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1)
                                               : 0U);
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success 
        = ((((1U == (IData)(vlSelf->SocTop__DOT__t_axi_r_id)) 
             & (IData)(vlSelf->SocTop__DOT__t_axi_r_valid)) 
            & (IData)(vlSelf->SocTop__DOT__t_axi_r_last)) 
           & (0U == (IData)(SocTop__DOT__t_axi_r_resp)));
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success 
        = ((((0U == (IData)(vlSelf->SocTop__DOT__t_axi_r_id)) 
             & (IData)(vlSelf->SocTop__DOT__t_axi_r_valid)) 
            & (IData)(vlSelf->SocTop__DOT__t_axi_r_last)) 
           & (0U == (IData)(SocTop__DOT__t_axi_r_resp)));
    SocTop__DOT__t_axi_ar_ready = (1U & ((~ (IData)(vlSelf->rst)) 
                                         & ((1U & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                             ? (IData)(SocTop__DOT__add_axi_ar_ready)
                                             : ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                 ? 
                                                ((IData)(SocTop__DOT__add_axi_ar_ready) 
                                                 >> 1U)
                                                 : 
                                                (((IData)(vlSelf->SocTop__DOT__prot_chose_read) 
                                                  & (IData)(SocTop__DOT__add_axi_ar_ready)) 
                                                 >> 2U)))));
    __Vtableidx5 = ((0xfffffff0U & (((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r)) 
                                     << 4U) & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                               << 3U))) 
                    | ((8U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                              << 2U)) | (((IData)(SocTop__DOT__clint6__DOT__ar_shakehand) 
                                          << 2U) | (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r))));
    vlSelf->SocTop__DOT__clint6__DOT__state_time_r_nxt 
        = VSocTop__ConstPool__TABLE_287fc343_0[__Vtableidx5];
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
            = SocTop__DOT__uncache_dc_data;
        vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
            = SocTop__DOT__uncache_dc_data;
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1 
            = ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                ? vlSelf->SocTop__DOT__arbitrate_d_data
                : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                    ? vlSelf->SocTop__DOT__arbitrate_d_data
                    : 0ULL));
        vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2 
            = ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                ? vlSelf->SocTop__DOT__arbitrate_d_data
                : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                    ? vlSelf->SocTop__DOT__arbitrate_d_data
                    : 0ULL));
    }
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
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
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
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr 
            = (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__uncache_dc_addr);
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr = 0ULL;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
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
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
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
    if (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr 
            = (0xfffffffffffffff8ULL & vlSelf->SocTop__DOT__uncache_dc_addr);
    } else if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
                & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr = 0ULL;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
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
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
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
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
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
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
        if (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
              == (vlSelf->SocTop__DOT__uncache_dc_addr 
                  >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1 
                = SocTop__DOT__uncache_dc_mask;
        } else if ((1U & (~ ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                              == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                  >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1 = 0U;
        }
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1 = 0U;
    }
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))) {
        if ((1U & (~ ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                       == (vlSelf->SocTop__DOT__uncache_dc_addr 
                           >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))))) {
            vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2 
                = (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                     == (vlSelf->SocTop__DOT__uncache_dc_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))
                    ? (IData)(SocTop__DOT__uncache_dc_mask)
                    : 0U);
        }
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2 = 0U;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
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
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
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
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))) {
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
    if ((1U & (~ ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))))) {
        if (((IData)(vlSelf->SocTop__DOT__arbitrate_d_ok) 
             & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))) {
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
    SocTop__DOT__d_cache_data_out = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                      ? vlSelf->SocTop__DOT__uncache_arb_data_o
                                      : ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                          ? (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                               == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                   >> 9U)) 
                                              & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))
                                              ? vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data
                                              : (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                                   == 
                                                   (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                    >> 9U)) 
                                                  & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))
                                                  ? vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data
                                                  : 0ULL))
                                          : 0ULL));
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
    SocTop__DOT__t_axi_b_resp = ((IData)(vlSelf->rst)
                                  ? 0U : (3U & ((1U 
                                                 & (IData)(SocTop__DOT__prot_chose_write))
                                                 ? (IData)(vlSelf->SocTop__DOT__add_axi_b_resp)
                                                 : 
                                                ((2U 
                                                  & (IData)(SocTop__DOT__prot_chose_write))
                                                  ? 
                                                 ((IData)(vlSelf->SocTop__DOT__add_axi_b_resp) 
                                                  >> 2U)
                                                  : 
                                                 ((4U 
                                                   & (IData)(SocTop__DOT__prot_chose_write))
                                                   ? 
                                                  ((IData)(vlSelf->SocTop__DOT__add_axi_b_resp) 
                                                   >> 4U)
                                                   : 0U)))));
    SocTop__DOT__t_axi_b_valid = (1U & ((~ (IData)(vlSelf->rst)) 
                                        & ((1U & (IData)(SocTop__DOT__prot_chose_write))
                                            ? (IData)(vlSelf->SocTop__DOT__add_axi_b_valid)
                                            : ((2U 
                                                & (IData)(SocTop__DOT__prot_chose_write))
                                                ? ((IData)(vlSelf->SocTop__DOT__add_axi_b_valid) 
                                                   >> 1U)
                                                : (
                                                   ((IData)(SocTop__DOT__prot_chose_write) 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_b_valid)) 
                                                   >> 2U)))));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_aw_addr[0U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[1U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[2U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[3U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[4U] = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_addr[5U] = 0U;
    } else if ((1U & (IData)(SocTop__DOT__prot_chose_write))) {
        vlSelf->SocTop__DOT__add_axi_aw_addr[0U] = (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr);
        vlSelf->SocTop__DOT__add_axi_aw_addr[1U] = (IData)(
                                                           (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr 
                                                            >> 0x20U));
    } else if ((2U & (IData)(SocTop__DOT__prot_chose_write))) {
        vlSelf->SocTop__DOT__add_axi_aw_addr[2U] = (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr);
        vlSelf->SocTop__DOT__add_axi_aw_addr[3U] = (IData)(
                                                           (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr 
                                                            >> 0x20U));
    } else if ((4U & (IData)(SocTop__DOT__prot_chose_write))) {
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
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_w_data[0U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[1U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[2U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[3U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[4U] = 0U;
        vlSelf->SocTop__DOT__add_axi_w_data[5U] = 0U;
    } else if ((1U & (IData)(SocTop__DOT__prot_chose_write))) {
        vlSelf->SocTop__DOT__add_axi_w_data[0U] = (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data);
        vlSelf->SocTop__DOT__add_axi_w_data[1U] = (IData)(
                                                          (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data 
                                                           >> 0x20U));
    } else if ((2U & (IData)(SocTop__DOT__prot_chose_write))) {
        vlSelf->SocTop__DOT__add_axi_w_data[2U] = (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data);
        vlSelf->SocTop__DOT__add_axi_w_data[3U] = (IData)(
                                                          (vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data 
                                                           >> 0x20U));
    } else if ((4U & (IData)(SocTop__DOT__prot_chose_write))) {
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
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__add_axi_b_ready = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_id = 0U;
        vlSelf->SocTop__DOT__add_axi_w_strb = 0U;
        vlSelf->SocTop__DOT__add_axi_w_last = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_qos = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_prot = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_cache = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_burst = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_size = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_len = 0U;
        vlSelf->SocTop__DOT__add_axi_aw_valid = 0U;
        vlSelf->SocTop__DOT__add_axi_w_valid = 0U;
    } else {
        vlSelf->SocTop__DOT__add_axi_b_ready = ((1U 
                                                 & (IData)(SocTop__DOT__prot_chose_write))
                                                 ? 
                                                (1U 
                                                 | (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))
                                                 : 
                                                ((2U 
                                                  & (IData)(SocTop__DOT__prot_chose_write))
                                                  ? 
                                                 (2U 
                                                  | (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))
                                                  : 
                                                 ((4U 
                                                   & (IData)(SocTop__DOT__prot_chose_write))
                                                   ? 
                                                  (4U 
                                                   | (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))
                                                   : 0U)));
        vlSelf->SocTop__DOT__add_axi_aw_id = ((1U & (IData)(SocTop__DOT__prot_chose_write))
                                               ? ((0xff0U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                                  | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id))
                                               : ((2U 
                                                   & (IData)(SocTop__DOT__prot_chose_write))
                                                   ? 
                                                  ((0xf0fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id) 
                                                      << 4U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(SocTop__DOT__prot_chose_write))
                                                    ? 
                                                   ((0xffU 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id) 
                                                       << 8U))
                                                    : 0U)));
        vlSelf->SocTop__DOT__add_axi_w_strb = ((1U 
                                                & (IData)(SocTop__DOT__prot_chose_write))
                                                ? (
                                                   (0xffff00U 
                                                    & vlSelf->SocTop__DOT__add_axi_w_strb) 
                                                   | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb))
                                                : (
                                                   (2U 
                                                    & (IData)(SocTop__DOT__prot_chose_write))
                                                    ? 
                                                   ((0xff00ffU 
                                                     & vlSelf->SocTop__DOT__add_axi_w_strb) 
                                                    | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb) 
                                                       << 8U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(SocTop__DOT__prot_chose_write))
                                                     ? 
                                                    ((0xffffU 
                                                      & vlSelf->SocTop__DOT__add_axi_w_strb) 
                                                     | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb) 
                                                        << 0x10U))
                                                     : 0U)));
        vlSelf->SocTop__DOT__add_axi_w_last = ((1U 
                                                & (IData)(SocTop__DOT__prot_chose_write))
                                                ? (
                                                   (6U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                                   | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last))
                                                : (
                                                   (2U 
                                                    & (IData)(SocTop__DOT__prot_chose_write))
                                                    ? 
                                                   ((5U 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last) 
                                                       << 1U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(SocTop__DOT__prot_chose_write))
                                                     ? 
                                                    ((3U 
                                                      & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                                     | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last) 
                                                        << 2U))
                                                     : 0U)));
        vlSelf->SocTop__DOT__add_axi_aw_qos = ((1U 
                                                & (IData)(SocTop__DOT__prot_chose_write))
                                                ? (
                                                   (0xff0U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos)) 
                                                   | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos))
                                                : (
                                                   (2U 
                                                    & (IData)(SocTop__DOT__prot_chose_write))
                                                    ? 
                                                   ((0xf0fU 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos) 
                                                       << 4U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(SocTop__DOT__prot_chose_write))
                                                     ? 
                                                    ((0xffU 
                                                      & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos)) 
                                                     | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos) 
                                                        << 8U))
                                                     : 0U)));
        vlSelf->SocTop__DOT__add_axi_aw_prot = ((1U 
                                                 & (IData)(SocTop__DOT__prot_chose_write))
                                                 ? 
                                                ((0x1f8U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot)) 
                                                 | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port))
                                                 : 
                                                ((2U 
                                                  & (IData)(SocTop__DOT__prot_chose_write))
                                                  ? 
                                                 ((0x1c7U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port) 
                                                     << 3U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(SocTop__DOT__prot_chose_write))
                                                   ? 
                                                  ((0x3fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port) 
                                                      << 6U))
                                                   : 0U)));
        vlSelf->SocTop__DOT__add_axi_aw_cache = ((1U 
                                                  & (IData)(SocTop__DOT__prot_chose_write))
                                                  ? 
                                                 ((0xff0U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache)) 
                                                  | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache))
                                                  : 
                                                 ((2U 
                                                   & (IData)(SocTop__DOT__prot_chose_write))
                                                   ? 
                                                  ((0xf0fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache) 
                                                      << 4U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(SocTop__DOT__prot_chose_write))
                                                    ? 
                                                   ((0xffU 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache) 
                                                       << 8U))
                                                    : 0U)));
        vlSelf->SocTop__DOT__add_axi_aw_burst = ((1U 
                                                  & (IData)(SocTop__DOT__prot_chose_write))
                                                  ? 
                                                 ((0x3cU 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst)) 
                                                  | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst))
                                                  : 
                                                 ((2U 
                                                   & (IData)(SocTop__DOT__prot_chose_write))
                                                   ? 
                                                  ((0x33U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst) 
                                                      << 2U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(SocTop__DOT__prot_chose_write))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst) 
                                                       << 4U))
                                                    : 0U)));
        vlSelf->SocTop__DOT__add_axi_aw_size = ((1U 
                                                 & (IData)(SocTop__DOT__prot_chose_write))
                                                 ? 
                                                ((0x1f8U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size)) 
                                                 | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size))
                                                 : 
                                                ((2U 
                                                  & (IData)(SocTop__DOT__prot_chose_write))
                                                  ? 
                                                 ((0x1c7U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size) 
                                                     << 3U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(SocTop__DOT__prot_chose_write))
                                                   ? 
                                                  ((0x3fU 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size) 
                                                      << 6U))
                                                   : 0U)));
        vlSelf->SocTop__DOT__add_axi_aw_len = ((1U 
                                                & (IData)(SocTop__DOT__prot_chose_write))
                                                ? (
                                                   (0xffff00U 
                                                    & vlSelf->SocTop__DOT__add_axi_aw_len) 
                                                   | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len))
                                                : (
                                                   (2U 
                                                    & (IData)(SocTop__DOT__prot_chose_write))
                                                    ? 
                                                   ((0xff00ffU 
                                                     & vlSelf->SocTop__DOT__add_axi_aw_len) 
                                                    | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len) 
                                                       << 8U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(SocTop__DOT__prot_chose_write))
                                                     ? 
                                                    ((0xffffU 
                                                      & vlSelf->SocTop__DOT__add_axi_aw_len) 
                                                     | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len) 
                                                        << 0x10U))
                                                     : 0U)));
        vlSelf->SocTop__DOT__add_axi_aw_valid = ((1U 
                                                  & (IData)(SocTop__DOT__prot_chose_write))
                                                  ? 
                                                 ((6U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid)) 
                                                  | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid))
                                                  : 
                                                 ((2U 
                                                   & (IData)(SocTop__DOT__prot_chose_write))
                                                   ? 
                                                  ((5U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid) 
                                                      << 1U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(SocTop__DOT__prot_chose_write))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid)) 
                                                    | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid) 
                                                       << 2U))
                                                    : 0U)));
        vlSelf->SocTop__DOT__add_axi_w_valid = ((1U 
                                                 & (IData)(SocTop__DOT__prot_chose_write))
                                                 ? 
                                                ((6U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                 | (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid))
                                                 : 
                                                ((2U 
                                                  & (IData)(SocTop__DOT__prot_chose_write))
                                                  ? 
                                                 ((5U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                  | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid) 
                                                     << 1U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(SocTop__DOT__prot_chose_write))
                                                   ? 
                                                  ((3U 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid) 
                                                      << 2U))
                                                   : 0U)));
    }
    SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1 = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                                   == (IData)(SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
    SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1 = (
                                                   ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                                    == (IData)(SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
    SocTop__DOT__rvcpu1__DOT__id_ctrl_req = ((IData)(vlSelf->rst)
                                              ? 0U : 
                                             (1U & 
                                              (((IData)(vlSelf->rst)
                                                 ? 0U
                                                 : 
                                                (1U 
                                                 & (((IData)(SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                     & (2U 
                                                        == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                    & ((IData)(SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr))))) 
                                               | ((IData)(vlSelf->rst)
                                                   ? 0U
                                                   : 
                                                  (1U 
                                                   & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                       & (2U 
                                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                      & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                         == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr))))))));
    vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand 
        = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid) 
           & (IData)(SocTop__DOT__t_axi_ar_ready));
    vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand 
        = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid) 
           & (IData)(SocTop__DOT__t_axi_ar_ready));
    if ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))) {
        vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1 
            = vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1;
        vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2 
            = vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2;
        vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1 
            = vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1;
        vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2 
            = vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2;
    } else {
        vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1 
            = ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
               & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1));
        vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2 
            = ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
               & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2));
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
    SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte 
        = (0xffU & ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                   >> 2U))) ? ((1U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? (IData)(
                                                              (SocTop__DOT__d_cache_data_out 
                                                               >> 0x38U))
                                                    : (IData)(
                                                              (SocTop__DOT__d_cache_data_out 
                                                               >> 0x30U)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? (IData)(
                                                              (SocTop__DOT__d_cache_data_out 
                                                               >> 0x28U))
                                                    : (IData)(
                                                              (SocTop__DOT__d_cache_data_out 
                                                               >> 0x20U))))
                     : ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? (IData)(
                                                              (SocTop__DOT__d_cache_data_out 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (SocTop__DOT__d_cache_data_out 
                                                               >> 0x10U)))
                         : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                             ? (IData)((SocTop__DOT__d_cache_data_out 
                                        >> 8U)) : (IData)(SocTop__DOT__d_cache_data_out)))));
    SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte 
        = (0xffffU & ((0U == (3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                            >> 1U))))
                       ? (IData)(SocTop__DOT__d_cache_data_out)
                       : ((1U == (3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                >> 1U))))
                           ? (IData)((SocTop__DOT__d_cache_data_out 
                                      >> 0x10U)) : 
                          ((2U == (3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 1U))))
                            ? (IData)((SocTop__DOT__d_cache_data_out 
                                       >> 0x20U)) : (IData)(
                                                            (SocTop__DOT__d_cache_data_out 
                                                             >> 0x30U))))));
    SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word 
        = ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                          >> 2U))) ? (IData)((SocTop__DOT__d_cache_data_out 
                                              >> 0x20U))
            : (IData)(SocTop__DOT__d_cache_data_out));
    SocTop__DOT__d_cache_out_type = ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                      ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type)
                                      : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                          ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type)
                                          : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                              ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type)
                                              : ((0x10U 
                                                  == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                                  ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type)
                                                  : 0U))));
    SocTop__DOT__add_axi_b_id = ((0xf00U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                 | ((((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_m))
                                       ? (IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_id)
                                       : 0U) << 4U) 
                                    | (IData)(vlSelf->SocTop__DOT__io_axi_b_id)));
    SocTop__DOT__clint6__DOT__wmask = (((QData)((IData)(
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
                                        << 0x20U) | (QData)((IData)(
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
    SocTop__DOT__clint6__DOT__mode_right = (IData)(
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
    SocTop__DOT__soc_axi_w_ready = (1U & ((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                            & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                           & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                          >> 2U));
    SocTop__DOT__soc_axi_aw_ready = (IData)((((((((
                                                   (4U 
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
    SocTop__DOT__tim_axi_w_ready = (1U & ((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                            & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                           & (IData)(vlSelf->SocTop__DOT__add_axi_w_last)) 
                                          >> 1U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena 
        = ((IData)(vlSelf->rst) ? 0U : (1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr) 
                                              & (~ 
                                                 (((~ (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                                   & (~ (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                       == (IData)(SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))))))));
    SocTop__DOT__core_stall_l = (((IData)(SocTop__DOT__rvcpu1__DOT__mem_ctrl_req) 
                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req)) 
                                 | (IData)(SocTop__DOT__rvcpu1__DOT__id_ctrl_req));
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data = 
        ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
          ? ((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
              ? ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                  ? ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                      ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                          ? 0ULL : (QData)((IData)(SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word)))
                      : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                          ? (QData)((IData)(SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte))
                          : (QData)((IData)(SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte))))
                  : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                      ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                          ? SocTop__DOT__d_cache_data_out
                          : (((QData)((IData)((- (IData)(
                                                         (SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word 
                                                          >> 0x1fU))))) 
                              << 0x20U) | (QData)((IData)(SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word))))
                      : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                          ? (((- (QData)((IData)((1U 
                                                  & ((IData)(SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte) 
                                                     >> 0xfU))))) 
                              << 0x10U) | (QData)((IData)(SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte)))
                          : (((- (QData)((IData)((1U 
                                                  & ((IData)(SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte) 
                                                     >> 7U))))) 
                              << 8U) | (QData)((IData)(SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte))))))
              : 0ULL) : vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data);
    vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand 
        = ((((0U == (IData)(SocTop__DOT__d_cache_out_type)) 
             | (~ (IData)(SocTop__DOT__uncache_arb_re))) 
            | (~ (IData)(SocTop__DOT__uncache_arb_we))) 
           & (IData)(vlSelf->SocTop__DOT__i_cache_read_ena));
    SocTop__DOT__t_axi_b_id = ((IData)(vlSelf->rst)
                                ? 0U : (0xfU & ((1U 
                                                 & (IData)(SocTop__DOT__prot_chose_write))
                                                 ? (IData)(SocTop__DOT__add_axi_b_id)
                                                 : 
                                                ((2U 
                                                  & (IData)(SocTop__DOT__prot_chose_write))
                                                  ? 
                                                 ((IData)(SocTop__DOT__add_axi_b_id) 
                                                  >> 4U)
                                                  : 
                                                 ((4U 
                                                   & (IData)(SocTop__DOT__prot_chose_write))
                                                   ? 
                                                  ((IData)(SocTop__DOT__add_axi_b_id) 
                                                   >> 8U)
                                                   : 0U)))));
    SocTop__DOT__tim_axi_r_data = ((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r))
                                    ? ((((IData)(SocTop__DOT__clint6__DOT__mode_right) 
                                         & (IData)(SocTop__DOT__clint6__DOT__ar_shakehand)) 
                                        & (0x2004000ULL 
                                           == (((QData)((IData)(
                                                                vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                        ? vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l
                                        : ((((IData)(SocTop__DOT__clint6__DOT__mode_right) 
                                             & (IData)(SocTop__DOT__clint6__DOT__ar_shakehand)) 
                                            & (0x200bff8ULL 
                                               == (
                                                   ((QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                            ? vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h
                                            : 0ULL))
                                    : 0ULL);
    SocTop__DOT__tim_axi_aw_ready = ((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                       & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid)) 
                                      >> 1U) & (IData)(SocTop__DOT__clint6__DOT__mode_right));
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
                                                   & ((IData)(SocTop__DOT__soc_axi_w_ready) 
                                                      << 3U))) 
                                               | ((0xfffffffcU 
                                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                                      & ((IData)(SocTop__DOT__soc_axi_aw_ready) 
                                                         << 2U))) 
                                                  | (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))))));
    vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt 
        = VSocTop__ConstPool__TABLE_0bdcfe05_0[__Vtableidx2];
    SocTop__DOT__add_axi_w_ready = (((IData)(SocTop__DOT__soc_axi_w_ready) 
                                     << 2U) | (((IData)(SocTop__DOT__tim_axi_w_ready) 
                                                << 1U) 
                                               | (IData)(vlSelf->SocTop__DOT__io_axi_w_ready)));
    SocTop__DOT__clint6__DOT__w_shakehand = (((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                              >> 1U) 
                                             & (IData)(SocTop__DOT__tim_axi_w_ready));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush = 
        ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
    if ((4U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))) {
        if (SocTop__DOT__core_stall_l) {
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
        if (SocTop__DOT__core_stall_l) {
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
        if (SocTop__DOT__core_stall_l) {
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
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op = ((IData)(vlSelf->rst)
                                                   ? 0ULL
                                                   : 
                                                  ((IData)(SocTop__DOT__rvcpu1__DOT__id_reg_ena1)
                                                    ? 
                                                   ((IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)
                                                     ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data
                                                     : 
                                                    ((IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1)
                                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data
                                                      : 
                                                     (((~ (IData)(vlSelf->rst)) 
                                                       & (IData)(SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                                       ? 
                                                      ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                         == (IData)(SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                                        : 
                                                       vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                       [SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                                       : 0ULL)))
                                                    : 
                                                   (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc) 
                                                     | (IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal))
                                                     ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc
                                                     : 
                                                    ((IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi)
                                                      ? (QData)((IData)(SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1))
                                                      : 0ULL))));
    vlSelf->SocTop__DOT__arbitratem4__DOT__read_dcache_shankhand 
        = ((~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & ((2U == (IData)(SocTop__DOT__d_cache_out_type)) 
              | (8U == (IData)(SocTop__DOT__d_cache_out_type))));
    vlSelf->SocTop__DOT__arbitratem4__DOT__write_dcache_shankhand 
        = ((~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & ((1U == (IData)(SocTop__DOT__d_cache_out_type)) 
              | (4U == (IData)(SocTop__DOT__d_cache_out_type))));
    vlSelf->SocTop__DOT__arbitratem4__DOT__read_uncahce_shankhand 
        = ((~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & (IData)(SocTop__DOT__uncache_arb_re));
    vlSelf->SocTop__DOT__arbitratem4__DOT__write_uncahce_shankhand 
        = ((~ (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & (IData)(SocTop__DOT__uncache_arb_we));
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success 
        = (((IData)(SocTop__DOT__t_axi_b_valid) & (1U 
                                                   == (IData)(SocTop__DOT__t_axi_b_id))) 
           & (0U == (IData)(SocTop__DOT__t_axi_b_resp)));
    SocTop__DOT__add_axi_r_data[0U] = (IData)(vlSelf->SocTop__DOT__io_axi_r_data);
    SocTop__DOT__add_axi_r_data[1U] = (IData)((vlSelf->SocTop__DOT__io_axi_r_data 
                                               >> 0x20U));
    SocTop__DOT__add_axi_r_data[2U] = (IData)(SocTop__DOT__tim_axi_r_data);
    SocTop__DOT__add_axi_r_data[3U] = (IData)((SocTop__DOT__tim_axi_r_data 
                                               >> 0x20U));
    SocTop__DOT__add_axi_r_data[4U] = (IData)(((2U 
                                                == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                                ? vlSelf->read_data_sign_
                                                : 0ULL));
    SocTop__DOT__add_axi_r_data[5U] = (IData)((((2U 
                                                 == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                                 ? vlSelf->read_data_sign_
                                                 : 0ULL) 
                                               >> 0x20U));
    SocTop__DOT__add_axi_aw_ready = (((IData)(SocTop__DOT__soc_axi_aw_ready) 
                                      << 2U) | (((IData)(SocTop__DOT__tim_axi_aw_ready) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_aw_ready)));
    SocTop__DOT__clint6__DOT__aw_shakehand = (((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                               >> 1U) 
                                              & (IData)(SocTop__DOT__tim_axi_aw_ready));
    SocTop__DOT__t_axi_w_ready = (1U & ((~ (IData)(vlSelf->rst)) 
                                        & ((1U & (IData)(SocTop__DOT__prot_chose_write))
                                            ? (IData)(SocTop__DOT__add_axi_w_ready)
                                            : ((2U 
                                                & (IData)(SocTop__DOT__prot_chose_write))
                                                ? ((IData)(SocTop__DOT__add_axi_w_ready) 
                                                   >> 1U)
                                                : (
                                                   ((IData)(SocTop__DOT__prot_chose_write) 
                                                    & (IData)(SocTop__DOT__add_axi_w_ready)) 
                                                   >> 2U)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl = 
        ((IData)(vlSelf->rst) ? 0U : ((IData)(SocTop__DOT__rvcpu1__DOT__mem_ctrl_req)
                                       ? 0x1fU : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req)
                                                   ? 0xfU
                                                   : 
                                                  ((IData)(SocTop__DOT__rvcpu1__DOT__id_ctrl_req)
                                                    ? 7U
                                                    : 
                                                   (((~ (IData)(vlSelf->rst)) 
                                                     & (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))
                                                     ? 0U
                                                     : 3U)))));
    vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand 
        = (1U & ((~ (IData)(vlSelf->rst)) & (~ (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))));
    SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
        = ((0x80000U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->SocTop__DOT__i_cache_inst_data 
                                            >> 0x15U)))));
    SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm 
        = ((0x800U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                      >> 0x14U)) | ((0x400U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 8U)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr 
        = (IData)((0x67U == (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)));
    vlSelf->SocTop__DOT__arbitrate_d_ok = (((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                            & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_dcache_shankhand))
                                            ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid)
                                            : (((2U 
                                                 == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_dcache_shankhand)) 
                                               & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid)));
    vlSelf->SocTop__DOT__d_cache_mem_finish = ((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                                ? (
                                                   ((5U 
                                                     == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                    & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_uncahce_shankhand))
                                                    ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid)
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                     & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_uncahce_shankhand)) 
                                                    & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid)))
                                                : (IData)(vlSelf->SocTop__DOT__uncache_dc_finish));
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
    vlSelf->SocTop__DOT__t_axi_r_data = ((IData)(vlSelf->rst)
                                          ? 0ULL : 
                                         ((1U & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                           ? (((QData)((IData)(
                                                               SocTop__DOT__add_axi_r_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                SocTop__DOT__add_axi_r_data[0U])))
                                           : ((2U & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                               ? (((QData)((IData)(
                                                                   SocTop__DOT__add_axi_r_data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    SocTop__DOT__add_axi_r_data[2U])))
                                               : ((4U 
                                                   & (IData)(vlSelf->SocTop__DOT__prot_chose_read))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    SocTop__DOT__add_axi_r_data[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     SocTop__DOT__add_axi_r_data[4U])))
                                                   : 0ULL))));
    SocTop__DOT__t_axi_aw_ready = (1U & ((~ (IData)(vlSelf->rst)) 
                                         & ((1U & (IData)(SocTop__DOT__prot_chose_write))
                                             ? (IData)(SocTop__DOT__add_axi_aw_ready)
                                             : ((2U 
                                                 & (IData)(SocTop__DOT__prot_chose_write))
                                                 ? 
                                                ((IData)(SocTop__DOT__add_axi_aw_ready) 
                                                 >> 1U)
                                                 : 
                                                (((IData)(SocTop__DOT__prot_chose_write) 
                                                  & (IData)(SocTop__DOT__add_axi_aw_ready)) 
                                                 >> 2U)))));
    vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_l_nxt 
        = (((((IData)(SocTop__DOT__clint6__DOT__mode_right) 
              & (IData)(SocTop__DOT__clint6__DOT__w_shakehand)) 
             & (IData)(SocTop__DOT__clint6__DOT__aw_shakehand)) 
            & (0x2004000ULL == (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))
            ? (SocTop__DOT__clint6__DOT__wmask & (((QData)((IData)(
                                                                   vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_w_data[2U]))))
            : (1ULL + vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l));
    vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h_nxt 
        = (((((IData)(SocTop__DOT__clint6__DOT__mode_right) 
              & (IData)(SocTop__DOT__clint6__DOT__w_shakehand)) 
             & (IData)(SocTop__DOT__clint6__DOT__aw_shakehand)) 
            & (0x200bff8ULL == (((QData)((IData)(vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))
            ? (SocTop__DOT__clint6__DOT__wmask & (((QData)((IData)(
                                                                   vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_w_data[2U]))))
            : vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h);
    __Vtableidx4 = ((0xffffffc0U & (((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                     << 6U) & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                               << 5U))) 
                    | ((0x20U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                 << 4U)) | ((0x10U 
                                             & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                                << 3U)) 
                                            | (((IData)(SocTop__DOT__clint6__DOT__aw_shakehand) 
                                                << 3U) 
                                               | (((IData)(SocTop__DOT__clint6__DOT__w_shakehand) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_m))))));
    vlSelf->SocTop__DOT__clint6__DOT__state_time_m_nxt 
        = VSocTop__ConstPool__TABLE_c02984f2_0[__Vtableidx4];
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_wshankhand 
        = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid) 
           & (IData)(SocTop__DOT__t_axi_w_ready));
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
               ? (((- (QData)((IData)((1U & (SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                             >> 0x13U))))) 
                   << 0x14U) | (QData)((IData)((0xfffffU 
                                                & (SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                                   << 1U)))))
               : ((IData)((0x63U == (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))
                   ? (((- (QData)((IData)((1U & ((IData)(SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                 >> 0xbU))))) 
                       << 0xcU) | (QData)((IData)((0xfffU 
                                                   & ((IData)(SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                      << 1U)))))
                   : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                       ? (((- (QData)((IData)((vlSelf->SocTop__DOT__i_cache_inst_data 
                                               >> 0x1fU)))) 
                           << 0xcU) | (QData)((IData)(
                                                      (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                       >> 0x14U))))
                       : ((IData)(vlSelf->rst) ? 0ULL
                           : 4ULL)))));
    vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_awshankhand 
        = ((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid) 
           & (IData)(SocTop__DOT__t_axi_aw_ready));
}
