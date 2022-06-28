// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSocTop.h for the primary calling header

#ifndef VERILATED_VSOCTOP___024ROOT_H_
#define VERILATED_VSOCTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VSocTop__Syms;
class VSocTop_VerilatedVcd;


//----------

VL_MODULE(VSocTop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(out_axi_aw_id,3,0);
    VL_OUT8(out_axi_aw_len,7,0);
    VL_OUT8(out_axi_aw_size,2,0);
    VL_OUT8(out_axi_aw_burst,1,0);
    VL_OUT8(out_axi_aw_cache,3,0);
    VL_OUT8(out_axi_aw_port,2,0);
    VL_OUT8(out_axi_aw_qos,3,0);
    VL_OUT8(out_axi_aw_valid,0,0);
    VL_IN8(out_axi_aw_ready,0,0);
    VL_OUT8(out_axi_w_strb,7,0);
    VL_OUT8(out_axi_w_last,0,0);
    VL_OUT8(out_axi_w_valid,0,0);
    VL_IN8(out_axi_w_ready,0,0);
    VL_IN8(out_axi_b_id,3,0);
    VL_IN8(out_axi_b_resp,1,0);
    VL_IN8(out_axi_b_valid,0,0);
    VL_OUT8(out_axi_b_ready,0,0);
    VL_OUT8(out_axi_ar_id,3,0);
    VL_OUT8(out_axi_ar_len,7,0);
    VL_OUT8(out_axi_ar_size,2,0);
    VL_OUT8(out_axi_ar_burst,1,0);
    VL_OUT8(out_axi_ar_cache,3,0);
    VL_OUT8(out_axi_ar_prot,2,0);
    VL_OUT8(out_axi_ar_qos,3,0);
    VL_OUT8(out_axi_ar_valid,0,0);
    VL_IN8(out_axi_ar_ready,0,0);
    VL_IN8(out_axi_r_id,3,0);
    VL_IN8(out_axi_r_resp,1,0);
    VL_IN8(out_axi_r_last,0,0);
    VL_IN8(out_axi_r_valid,0,0);
    VL_OUT8(out_axi_r_ready,0,0);
    VL_OUT64(out_axi_aw_addr,63,0);
    VL_OUT64(out_axi_w_data,63,0);
    VL_OUT64(out_axi_ar_addr,63,0);
    VL_IN64(out_axi_r_data,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ SocTop__DOT__rvcpu_wmask;
        CData/*0:0*/ SocTop__DOT__rvcpu_we;
        CData/*0:0*/ SocTop__DOT__rvcpu_re;
        CData/*0:0*/ SocTop__DOT__d_cache_read_ena;
        CData/*0:0*/ SocTop__DOT__d_cache_write_ena;
        CData/*0:0*/ SocTop__DOT__arbitrate_d_ok;
        CData/*0:0*/ SocTop__DOT__arbitrate_i_ok;
        CData/*0:0*/ SocTop__DOT__t_axi_w_valid;
        CData/*0:0*/ SocTop__DOT__t_axi_ar_valid;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__if_stall_req;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena;
        CData/*7:0*/ SocTop__DOT__rvcpu1__DOT__ex_id_rd_type;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex_pc_branchena;
        CData/*4:0*/ SocTop__DOT__rvcpu1__DOT__id_reg_addr1;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id_reg_ena1;
        CData/*4:0*/ SocTop__DOT__rvcpu1__DOT__id_reg_addr2;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id_reg_ena2;
        CData/*7:0*/ SocTop__DOT__rvcpu1__DOT__id_ex_type;
        CData/*7:0*/ SocTop__DOT__rvcpu1__DOT__id_ex_opcode;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena;
        CData/*4:0*/ SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr;
        CData/*2:0*/ SocTop__DOT__rvcpu1__DOT__id_ex_memsel;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id_pip_jalrena;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id_if_flush;
        CData/*4:0*/ SocTop__DOT__rvcpu1__DOT__stall_ctrl;
        CData/*4:0*/ SocTop__DOT__rvcpu1__DOT__wb_id_addr;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__wb_id_ena;
        CData/*7:0*/ SocTop__DOT__rvcpu1__DOT__idex_ex_type;
        CData/*7:0*/ SocTop__DOT__rvcpu1__DOT__idex_ex_opcode;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__idex_ex_rdena;
        CData/*4:0*/ SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr;
        CData/*2:0*/ SocTop__DOT__rvcpu1__DOT__idex_ex_sel;
        CData/*7:0*/ SocTop__DOT__rvcpu1__DOT__exmem_mem_type;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__exmem_mem_ena;
        CData/*4:0*/ SocTop__DOT__rvcpu1__DOT__exmem_mem_addr;
        CData/*2:0*/ SocTop__DOT__rvcpu1__DOT__exmem_mem_sel;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr;
        CData/*4:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump;
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
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw;
    };
    struct {
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mie_nxt;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie;
        CData/*1:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt;
        CData/*1:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp;
        CData/*1:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip;
        CData/*7:0*/ SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte;
        CData/*7:0*/ SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__i_tag_ena1;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__i_tag_ena2;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__i_data_ena2;
        CData/*5:0*/ SocTop__DOT__i_cache12__DOT__state_inst;
        CData/*5:0*/ SocTop__DOT__i_cache12__DOT__state_inst_nxt;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__inst_hit_ok;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__write_i_ok;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__inst_valid_o;
        CData/*2:0*/ SocTop__DOT__i_cache12__DOT__inst_hit_count1;
        CData/*2:0*/ SocTop__DOT__i_cache12__DOT__inst_hit_count2;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__finish_the_mem_l;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__ord_data_ena;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__inst_in_cache1;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__inst_in_cache2;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__inst_write_cache;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__inst_valid_write;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild;
        CData/*0:0*/ SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__tag_ena1;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__tag_ena2;
        CData/*7:0*/ SocTop__DOT__d_cache13__DOT__data_ena1;
        CData/*7:0*/ SocTop__DOT__d_cache13__DOT__data_ena2;
        CData/*5:0*/ SocTop__DOT__d_cache13__DOT__state_store;
        CData/*5:0*/ SocTop__DOT__d_cache13__DOT__state_store_nxt;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__store_ok;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__write_ok;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__finish_the_mem;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__outr_data_ena_w;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__write_incache;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__w_incache_ena1;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__w_incache_ena2;
        CData/*7:0*/ SocTop__DOT__d_cache13__DOT__w_incache_mask;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__dirty_make;
        CData/*2:0*/ SocTop__DOT__d_cache13__DOT__count_write1;
    };
    struct {
        CData/*2:0*/ SocTop__DOT__d_cache13__DOT__count_write2;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__outr_data_ena;
        CData/*7:0*/ SocTop__DOT__d_cache13__DOT__data_ram1_mask;
        CData/*7:0*/ SocTop__DOT__d_cache13__DOT__data_ram2_mask;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__store_finish;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__dirty_hit;
        CData/*2:0*/ SocTop__DOT__d_cache13__DOT__count_hit1;
        CData/*2:0*/ SocTop__DOT__d_cache13__DOT__count_hit2;
        CData/*5:0*/ SocTop__DOT__d_cache13__DOT__state_load;
        CData/*5:0*/ SocTop__DOT__d_cache13__DOT__state_load_nxt;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__load_ok;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__load_bc_ok;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__write_l_ok;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__load_finish_h;
        CData/*2:0*/ SocTop__DOT__d_cache13__DOT__load_hit_count1;
        CData/*2:0*/ SocTop__DOT__d_cache13__DOT__load_hit_count2;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__outw_data_ena_l;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__finish_the_mem_l;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__outr_data_ena_w_l;
        CData/*2:0*/ SocTop__DOT__d_cache13__DOT__load_write_count1;
        CData/*2:0*/ SocTop__DOT__d_cache13__DOT__load_write_count2;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__load_in_cache1;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__load_in_cache2;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__read_cache;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild;
        CData/*0:0*/ SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild;
        CData/*0:0*/ SocTop__DOT__arbitrate4__DOT__aw_shankhand;
        CData/*0:0*/ SocTop__DOT__arbitrate4__DOT__w_shankhand;
        CData/*0:0*/ SocTop__DOT__arbitrate4__DOT__b_shankhand;
        CData/*1:0*/ SocTop__DOT__arbitrate4__DOT__transfor_state;
        CData/*1:0*/ SocTop__DOT__arbitrate4__DOT__transfor_state_nex;
        CData/*0:0*/ SocTop__DOT__arbitrate4__DOT__r_shankhand;
        CData/*1:0*/ SocTop__DOT__arbitrate4__DOT__cache_state;
        CData/*1:0*/ SocTop__DOT__arbitrate4__DOT__cache_state_nxt;
        SData/*11:0*/ SocTop__DOT__rvcpu1__DOT__id_ex_s_offset;
        SData/*11:0*/ SocTop__DOT__rvcpu1__DOT__idex_ex_offset;
        SData/*11:0*/ SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm;
        SData/*11:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx;
        SData/*15:0*/ SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte;
        IData/*31:0*/ SocTop__DOT__i_cache_inst_data;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__if_id_inst;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__id_id_ex_inst;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst;
        IData/*19:0*/ SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o;
        IData/*31:0*/ SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i;
        IData/*31:0*/ SocTop__DOT__i_cache12__DOT__i_in_data1;
        IData/*31:0*/ SocTop__DOT__i_cache12__DOT__i_in_data2;
        IData/*31:0*/ SocTop__DOT__i_cache12__DOT__i;
        IData/*31:0*/ SocTop__DOT__i_cache12__DOT__inst_data_o;
        IData/*31:0*/ SocTop__DOT__i_cache12__DOT__data_inst;
        IData/*31:0*/ SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data;
        IData/*31:0*/ SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data;
        IData/*31:0*/ SocTop__DOT__d_cache13__DOT__i;
        QData/*63:0*/ SocTop__DOT__rvcpu_inst_addr;
        QData/*63:0*/ SocTop__DOT__rvcpu_data_addr;
    };
    struct {
        QData/*63:0*/ SocTop__DOT__rvcpu_data_o;
        QData/*63:0*/ SocTop__DOT__d_cache_data_out;
        QData/*63:0*/ SocTop__DOT__arbitrate_d_data;
        QData/*63:0*/ SocTop__DOT__t_axi_aw_addr;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__if_id_pc;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex_id_rd_data;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex_mem_addr;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__id_ex_op;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__id_ex_op2;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__id_ex_pc;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__mem_id_data;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__wb_regfile_data;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__idex_ex_pc;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__idex_ex_op1;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__idex_ex_op2;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__exmem_mem_data;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus;
        QData/*61:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1;
        QData/*63:0*/ SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code;
        QData/*54:0*/ SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data;
        QData/*54:0*/ SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__in_data1;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__in_data2;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__ram_iw_data;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__out_data_wb;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__out_addr_wb;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__data_ram1_data;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__data_ram2_data;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__load_data_o;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__out_data_wb_l;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__data_load;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__ram_iw_data_l;
        QData/*54:0*/ SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data;
        QData/*54:0*/ SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data;
        QData/*63:0*/ SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data;
        VlUnpacked<QData/*63:0*/, 32> SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs;
        VlUnpacked<CData/*2:0*/, 64> SocTop__DOT__i_cache12__DOT__i_counter1;
    };
    struct {
        VlUnpacked<CData/*2:0*/, 64> SocTop__DOT__i_cache12__DOT__i_counter2;
        VlUnpacked<QData/*55:0*/, 64> SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram;
        VlUnpacked<QData/*55:0*/, 64> SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram;
        VlUnpacked<IData/*31:0*/, 64> SocTop__DOT__i_cache12__DOT__u_data01__DOT__ram;
        VlUnpacked<IData/*31:0*/, 64> SocTop__DOT__i_cache12__DOT__u_data02__DOT__ram;
        VlUnpacked<CData/*2:0*/, 64> SocTop__DOT__d_cache13__DOT__counter1;
        VlUnpacked<CData/*2:0*/, 64> SocTop__DOT__d_cache13__DOT__counter2;
        VlUnpacked<CData/*0:0*/, 64> SocTop__DOT__d_cache13__DOT__dirty1;
        VlUnpacked<CData/*0:0*/, 64> SocTop__DOT__d_cache13__DOT__dirty2;
        VlUnpacked<QData/*55:0*/, 64> SocTop__DOT__d_cache13__DOT__u_tag0__DOT__ram;
        VlUnpacked<QData/*55:0*/, 64> SocTop__DOT__d_cache13__DOT__u_tag1__DOT__ram;
        VlUnpacked<QData/*63:0*/, 64> SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram;
        VlUnpacked<QData/*63:0*/, 64> SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    CData/*5:0*/ __Vchglast__TOP__SocTop__DOT__d_cache13__DOT__state_store;
    CData/*5:0*/ __Vchglast__TOP__SocTop__DOT__d_cache13__DOT__state_store_nxt;
    CData/*1:0*/ __Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__transfor_state;
    CData/*1:0*/ __Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__transfor_state_nex;
    CData/*1:0*/ __Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__cache_state;
    CData/*1:0*/ __Vchglast__TOP__SocTop__DOT__arbitrate4__DOT__cache_state_nxt;
    QData/*63:0*/ SocTop__DOT____Vcellout__arbitrate4__i_cache_data_o;
    QData/*63:0*/ __Vdly__SocTop__DOT__rvcpu_inst_addr;
    QData/*63:0*/ __Vchglast__TOP__SocTop__DOT__t_axi_aw_addr;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VSocTop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSocTop___024root);  ///< Copying not allowed
  public:
    VSocTop___024root(const char* name);
    ~VSocTop___024root();

    // INTERNAL METHODS
    void __Vconfigure(VSocTop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
