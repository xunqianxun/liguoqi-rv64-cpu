// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvcpu.h for the primary calling header

#ifndef VERILATED_VRVCPU___024ROOT_H_
#define VERILATED_VRVCPU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vrvcpu__Syms;
class Vrvcpu_VerilatedVcd;


//----------

VL_MODULE(Vrvcpu___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(inst_ena,0,0);
    VL_OUT8(inst_ready,0,0);
    VL_IN8(bui_inst_valid,0,0);
    VL_OUT8(wmask,7,0);
    VL_OUT8(we,0,0);
    VL_OUT8(re,0,0);
    VL_IN8(mem_finish,0,0);
    VL_IN8(timer_intr,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(inst_addr,63,0);
    VL_OUT64(data_addr,63,0);
    VL_OUT64(data_o,63,0);
    VL_IN64(data_i,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ rvcpu__DOT__if_stall_req;
        CData/*0:0*/ rvcpu__DOT__ex_id_rd_ena;
        CData/*7:0*/ rvcpu__DOT__ex_id_rd_type;
        CData/*0:0*/ rvcpu__DOT__ex_pc_branchena;
        CData/*4:0*/ rvcpu__DOT__id_reg_addr1;
        CData/*0:0*/ rvcpu__DOT__id_reg_ena1;
        CData/*4:0*/ rvcpu__DOT__id_reg_addr2;
        CData/*0:0*/ rvcpu__DOT__id_reg_ena2;
        CData/*7:0*/ rvcpu__DOT__id_ex_type;
        CData/*7:0*/ rvcpu__DOT__id_ex_opcode;
        CData/*0:0*/ rvcpu__DOT__id_ex_rd_ena;
        CData/*4:0*/ rvcpu__DOT__id_ex_rd_addr;
        CData/*2:0*/ rvcpu__DOT__id_ex_memsel;
        CData/*0:0*/ rvcpu__DOT__id_pip_jalrena;
        CData/*0:0*/ rvcpu__DOT__id_if_flush;
        CData/*4:0*/ rvcpu__DOT__stall_ctrl;
        CData/*4:0*/ rvcpu__DOT__wb_id_addr;
        CData/*0:0*/ rvcpu__DOT__wb_id_ena;
        CData/*7:0*/ rvcpu__DOT__idex_ex_type;
        CData/*7:0*/ rvcpu__DOT__idex_ex_opcode;
        CData/*0:0*/ rvcpu__DOT__idex_ex_rdena;
        CData/*4:0*/ rvcpu__DOT__idex_ex_rdaddr;
        CData/*2:0*/ rvcpu__DOT__idex_ex_sel;
        CData/*7:0*/ rvcpu__DOT__exmem_mem_type;
        CData/*0:0*/ rvcpu__DOT__exmem_mem_ena;
        CData/*4:0*/ rvcpu__DOT__exmem_mem_addr;
        CData/*2:0*/ rvcpu__DOT__exmem_mem_sel;
        CData/*0:0*/ rvcpu__DOT__pip_fore0__DOT__inst_jalr;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_lui;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_auipc;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_jal;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_jalr;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_jump;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_srai;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_addiw;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_slliw;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_srliw;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_sraiw;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_add;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_sub;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_sll;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_slt;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_sltu;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_xor;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_srl;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_sra;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_or;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_and;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_addw;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_subw;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_sllw;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_srlw;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_sraw;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_csrrw;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_csrrs;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_csrrc;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__inst_csrrwi;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__ex_op1;
        CData/*0:0*/ rvcpu__DOT__id3__DOT__mem_op1;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__op1_ls_op2;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__ex_flush_branch;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__tmr_trap_ena;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__trap_ena;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__ecall_trap_ena;
    };
    struct {
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__cmt_mret_ena;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__csr_wr_en;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__csr_rd_en;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mie_nxt;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie;
        CData/*1:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt;
        CData/*1:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp;
        CData/*1:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie;
        CData/*0:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip;
        CData/*7:0*/ rvcpu__DOT__mem7__DOT__data_byte;
        CData/*7:0*/ rvcpu__DOT__mem7__DOT__store_mask;
        CData/*0:0*/ rvcpu__DOT__mem_wb8__DOT__data_ena1;
        SData/*11:0*/ rvcpu__DOT__id_ex_s_offset;
        SData/*11:0*/ rvcpu__DOT__idex_ex_offset;
        SData/*11:0*/ rvcpu__DOT__pip_fore0__DOT__b_imm;
        SData/*11:0*/ rvcpu__DOT__ex5__DOT__csr_idx;
        SData/*15:0*/ rvcpu__DOT__mem7__DOT__data_half_byte;
        IData/*31:0*/ rvcpu__DOT__if_id_inst;
        IData/*19:0*/ rvcpu__DOT__pip_fore0__DOT__j_imm;
        IData/*31:0*/ rvcpu__DOT__ex5__DOT__op1_sllw_op2;
        IData/*31:0*/ rvcpu__DOT__ex5__DOT__op1_srlw_op2;
        IData/*31:0*/ rvcpu__DOT__ex5__DOT__op1_sraw_op2;
        IData/*31:0*/ rvcpu__DOT__ex5__DOT__op1_subw_op2;
        IData/*31:0*/ rvcpu__DOT__mem7__DOT__data_word;
        IData/*31:0*/ rvcpu__DOT__regfile10__DOT__i;
        QData/*63:0*/ rvcpu__DOT__pc;
        QData/*63:0*/ rvcpu__DOT__pip_pc;
        QData/*63:0*/ rvcpu__DOT__if_id_pc;
        QData/*63:0*/ rvcpu__DOT__ex_id_rd_data;
        QData/*63:0*/ rvcpu__DOT__ex_mem_addr;
        QData/*63:0*/ rvcpu__DOT__id_ex_op;
        QData/*63:0*/ rvcpu__DOT__id_ex_op2;
        QData/*63:0*/ rvcpu__DOT__id_ex_pc;
        QData/*63:0*/ rvcpu__DOT__mem_id_data;
        QData/*63:0*/ rvcpu__DOT__wb_regfile_data;
        QData/*63:0*/ rvcpu__DOT__idex_ex_pc;
        QData/*63:0*/ rvcpu__DOT__idex_ex_op1;
        QData/*63:0*/ rvcpu__DOT__idex_ex_op2;
        QData/*63:0*/ rvcpu__DOT__exmem_mem_data;
        QData/*63:0*/ rvcpu__DOT__exmem_mem_lsaddr;
        QData/*63:0*/ rvcpu__DOT__ex_ex_mem_pc;
        QData/*63:0*/ rvcpu__DOT__ex_mem_mem_pc;
        QData/*63:0*/ rvcpu__DOT__mem_mem_wb_pc;
        QData/*63:0*/ rvcpu__DOT__pip_fore0__DOT__j_pc;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__exe_res;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__op1_sub_op2;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__op1_add_op2;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__op1_addw_op2;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__shift_res;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__sllw_res;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__srlw_res;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__sraw_res;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__upper_imm;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__read_csr_data;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__wbck_csr_data;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__trap_mcause_value;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcycle;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus;
    };
    struct {
        QData/*61:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mepc;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause;
        QData/*63:0*/ rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mscrstch;
        QData/*63:0*/ rvcpu__DOT__mem7__DOT__store_data;
        QData/*63:0*/ rvcpu__DOT__mem_wb8__DOT__wb_pc_o;
        QData/*63:0*/ rvcpu__DOT__mem_wb8__DOT__pc_data1;
        VlUnpacked<QData/*63:0*/, 32> rvcpu__DOT__regfile10__DOT__regs;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vrvcpu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvcpu___024root);  ///< Copying not allowed
  public:
    Vrvcpu___024root(const char* name);
    ~Vrvcpu___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vrvcpu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
