// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc//csr.v:30:30
    extern void difftest_dut_csrs(long long mcycle_val, long long mstatus_val, long long mtvec_val, long long mepc_val, long long mcause_val, long long mie_val, long long mip_val, long long mscratch_val);
    // DPI import at vsrc//mem_wb.v:23:30
    extern void difftest_dut_pc(long long pc_data, long long exit_code, svBit endyn, svBit exe);
    // DPI import at vsrc//regfile.v:32:30
    extern void difftest_dut_regs(long long Z0, long long ra, long long sp, long long gp, long long tp, long long t0, long long t1, long long t2, long long fp, long long s1, long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long a7, long long s2, long long s3, long long s4, long long s5, long long s6, long long s7, long long s8, long long s9, long long s10, long long a11, long long t3, long long t4, long long t5, long long t6);
    // DPI import at vsrc//mem_wb.v:24:30
    extern void difftest_dut_thepc(long long thepc_data);
    // DPI import at vsrc//spiFlash.v:87:30
    extern void flash_read(long long addr, long long* data);

#ifdef __cplusplus
}
#endif
