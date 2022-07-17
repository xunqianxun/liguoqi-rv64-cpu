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
    // DPI import at vsrc//spiFlash.v:87:30
    extern void flash_read(long long addr, long long* data);
    // DPI import at vsrc//if_id.v:33:31
    extern void if_id_thepc(long long thepc_data, long long the_inst);

#ifdef __cplusplus
}
#endif
