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
    VL_OUT8(out_read_ram_ena,0,0);
    VL_OUT8(out_read_inst_ena,0,0);
    VL_OUT8(out_write_ram_ena,0,0);
    VL_OUT64(out_addr_outp,63,0);
    VL_INOUT64(in_inst_data_in,63,0);
    VL_IN64(in_ram_data_in,63,0);
    VL_OUT64(out_write_ram_data,63,0);
    VL_OUT64(out_write_ram_addr,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ SocTop__DOT__rvcpu_wmask;
        CData/*0:0*/ SocTop__DOT__rvcpu_we;
        CData/*0:0*/ SocTop__DOT__rvcpu_re;
        CData/*0:0*/ SocTop__DOT__i_cache_inst_valid;
        CData/*0:0*/ SocTop__DOT__i_cache_read_ena;
        CData/*0:0*/ SocTop__DOT__i_caceh_resp;
        CData/*3:0*/ SocTop__DOT__d_cache_out_type;
        CData/*0:0*/ SocTop__DOT__arbitrate_d_ok;
        CData/*0:0*/ SocTop__DOT__arbitrate_i_ok;
        CData/*0:0*/ SocTop__DOT__arbitrate_ti_sign;
        CData/*0:0*/ SocTop__DOT__t_axi_aw_ready;
        CData/*0:0*/ SocTop__DOT__t_axi_aw_valid;
        CData/*0:0*/ SocTop__DOT__t_axi_w_valid;
        CData/*0:0*/ SocTop__DOT__t_axi_w_ready;
        CData/*3:0*/ SocTop__DOT__t_axi_b_id;
        CData/*1:0*/ SocTop__DOT__t_axi_b_resp;
        CData/*0:0*/ SocTop__DOT__t_axi_b_valid;
        CData/*0:0*/ SocTop__DOT__t_axi_ar_valid;
        CData/*0:0*/ SocTop__DOT__t_axi_ar_ready;
        CData/*3:0*/ SocTop__DOT__t_axi_r_id;
        CData/*1:0*/ SocTop__DOT__t_axi_r_resp;
        CData/*0:0*/ SocTop__DOT__t_axi_r_last;
        CData/*0:0*/ SocTop__DOT__t_axi_r_valid;
        CData/*5:0*/ SocTop__DOT__add_axi_aw_burst;
        CData/*2:0*/ SocTop__DOT__add_axi_aw_valid;
        CData/*2:0*/ SocTop__DOT__add_axi_aw_ready;
        CData/*2:0*/ SocTop__DOT__add_axi_w_last;
        CData/*2:0*/ SocTop__DOT__add_axi_w_valid;
        CData/*2:0*/ SocTop__DOT__add_axi_w_ready;
        CData/*5:0*/ SocTop__DOT__add_axi_b_resp;
        CData/*2:0*/ SocTop__DOT__add_axi_b_valid;
        CData/*2:0*/ SocTop__DOT__add_axi_b_ready;
        CData/*5:0*/ SocTop__DOT__add_axi_ar_burst;
        CData/*2:0*/ SocTop__DOT__add_axi_ar_valid;
        CData/*2:0*/ SocTop__DOT__add_axi_ar_ready;
        CData/*5:0*/ SocTop__DOT__add_axi_r_resp;
        CData/*2:0*/ SocTop__DOT__add_axi_r_last;
        CData/*2:0*/ SocTop__DOT__add_axi_r_valid;
        CData/*2:0*/ SocTop__DOT__add_axi_r_ready;
        CData/*0:0*/ SocTop__DOT__soc_axi_aw_ready;
        CData/*0:0*/ SocTop__DOT__soc_axi_w_ready;
        CData/*0:0*/ SocTop__DOT__soc_axi_ar_ready;
        CData/*0:0*/ SocTop__DOT__tim_axi_aw_ready;
        CData/*0:0*/ SocTop__DOT__tim_axi_w_ready;
        CData/*1:0*/ SocTop__DOT__tim_axi_b_resp;
        CData/*0:0*/ SocTop__DOT__tim_axi_b_valid;
        CData/*0:0*/ SocTop__DOT__tim_axi_ar_ready;
        CData/*1:0*/ SocTop__DOT__tim_axi_r_resp;
        CData/*0:0*/ SocTop__DOT__tim_axi_r_last;
        CData/*0:0*/ SocTop__DOT__io_axi_aw_ready;
        CData/*0:0*/ SocTop__DOT__io_axi_w_ready;
        CData/*3:0*/ SocTop__DOT__io_axi_b_id;
        CData/*1:0*/ SocTop__DOT__io_axi_b_resp;
        CData/*0:0*/ SocTop__DOT__io_axi_b_valid;
        CData/*0:0*/ SocTop__DOT__io_axi_ar_ready;
        CData/*3:0*/ SocTop__DOT__io_axi_r_id;
        CData/*1:0*/ SocTop__DOT__io_axi_r_resp;
        CData/*0:0*/ SocTop__DOT__io_axi_r_last;
        CData/*0:0*/ SocTop__DOT__io_axi_r_valid;
        CData/*2:0*/ SocTop__DOT__prot_chose_write;
        CData/*2:0*/ SocTop__DOT__prot_chose_read;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__if_stall_req;
        CData/*0:0*/ SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena;
        CData/*7:0*/ SocTop__DOT__rvcpu1__DOT__ex_id_rd_type;
    };
    struct {
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
    };
    struct {
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
        CData/*0:0*/ SocTop__DOT__i_cache2__DOT__icache_if_shankhand;
        CData/*5:0*/ SocTop__DOT__i_cache2__DOT__state_inst;
        CData/*5:0*/ SocTop__DOT__i_cache2__DOT__state_inst_nxt;
        CData/*0:0*/ SocTop__DOT__i_cache2__DOT__inst_hit_ok;
        CData/*0:0*/ SocTop__DOT__i_cache2__DOT__miss_ena_o;
        CData/*0:0*/ SocTop__DOT__i_cache2__DOT__miss_ena_t;
        CData/*0:0*/ SocTop__DOT__i_cache2__DOT__write_i_ok;
        CData/*0:0*/ SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild;
        CData/*0:0*/ SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild;
        CData/*5:0*/ SocTop__DOT__d_cache3__DOT__state_dread;
        CData/*5:0*/ SocTop__DOT__d_cache3__DOT__state_dread_nxt;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__mem_hit_ok;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__dirty_ok;
        CData/*3:0*/ SocTop__DOT__d_cache3__DOT__dirty_out_type;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__missr_i_ok;
        CData/*3:0*/ SocTop__DOT__d_cache3__DOT__missr_out_type;
        CData/*7:0*/ SocTop__DOT__d_cache3__DOT__missr_data_ena1;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__missr_tag_ena1;
        CData/*7:0*/ SocTop__DOT__d_cache3__DOT__missr_data_ena2;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__missr_tag_ena2;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__missr_out_resp;
        CData/*5:0*/ SocTop__DOT__d_cache3__DOT__state_dwrite;
        CData/*5:0*/ SocTop__DOT__d_cache3__DOT__state_dwrite_nxt;
        CData/*7:0*/ SocTop__DOT__d_cache3__DOT__hitw_data_strb1;
        CData/*7:0*/ SocTop__DOT__d_cache3__DOT__hitw_data_strb2;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__dirtyw_ok;
        CData/*3:0*/ SocTop__DOT__d_cache3__DOT__dirtyw_out_type;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__missw_i_ok;
        CData/*3:0*/ SocTop__DOT__d_cache3__DOT__missw_out_type;
        CData/*7:0*/ SocTop__DOT__d_cache3__DOT__missw_data_ena1;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__missw_tag_ena1;
        CData/*7:0*/ SocTop__DOT__d_cache3__DOT__missw_data_ena2;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__missw_tag_ena2;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__missw_out_resp;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__tag_ena1;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__tag_ena2;
        CData/*7:0*/ SocTop__DOT__d_cache3__DOT__data_ena1;
        CData/*7:0*/ SocTop__DOT__d_cache3__DOT__data_ena2;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild;
        CData/*0:0*/ SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild;
        CData/*0:0*/ SocTop__DOT__arbitrate4__DOT__b_shankhand;
        CData/*1:0*/ SocTop__DOT__arbitrate4__DOT__transfor_state;
        CData/*1:0*/ SocTop__DOT__arbitrate4__DOT__transfor_state_nex;
        CData/*0:0*/ SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand;
        CData/*0:0*/ SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand;
        CData/*0:0*/ SocTop__DOT__arbitrate4__DOT__i_cache_valid;
    };
    struct {
        CData/*0:0*/ SocTop__DOT__arbitrate4__DOT__d_cache_valid;
        CData/*1:0*/ SocTop__DOT__arbitrate4__DOT__i_cache_state;
        CData/*1:0*/ SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt;
        CData/*1:0*/ SocTop__DOT__arbitrate4__DOT__d_cache_state;
        CData/*1:0*/ SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt;
        CData/*0:0*/ SocTop__DOT__arbitrate4__DOT__r_dcache_valid;
        CData/*1:0*/ SocTop__DOT__axi_mnq4__DOT__s_write_state;
        CData/*1:0*/ SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt;
        CData/*1:0*/ SocTop__DOT__axi_mnq4__DOT__s_read_state;
        CData/*1:0*/ SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt;
        CData/*0:0*/ SocTop__DOT__time_axi6__DOT__aw_shakehand;
        CData/*0:0*/ SocTop__DOT__time_axi6__DOT__w_shakehand;
        CData/*0:0*/ SocTop__DOT__time_axi6__DOT__mode_right;
        CData/*1:0*/ SocTop__DOT__time_axi6__DOT__state_time_m;
        CData/*1:0*/ SocTop__DOT__time_axi6__DOT__state_time_m_nxt;
        CData/*0:0*/ SocTop__DOT__time_axi6__DOT__ar_shakehand;
        CData/*1:0*/ SocTop__DOT__time_axi6__DOT__state_time_r;
        CData/*1:0*/ SocTop__DOT__time_axi6__DOT__state_time_r_nxt;
        SData/*11:0*/ SocTop__DOT__add_axi_aw_id;
        SData/*8:0*/ SocTop__DOT__add_axi_aw_size;
        SData/*11:0*/ SocTop__DOT__add_axi_aw_cache;
        SData/*8:0*/ SocTop__DOT__add_axi_aw_prot;
        SData/*11:0*/ SocTop__DOT__add_axi_aw_qos;
        SData/*11:0*/ SocTop__DOT__add_axi_b_id;
        SData/*11:0*/ SocTop__DOT__add_axi_ar_id;
        SData/*8:0*/ SocTop__DOT__add_axi_ar_size;
        SData/*11:0*/ SocTop__DOT__add_axi_ar_cache;
        SData/*8:0*/ SocTop__DOT__add_axi_ar_prot;
        SData/*11:0*/ SocTop__DOT__add_axi_ar_qos;
        SData/*11:0*/ SocTop__DOT__add_axi_r_id;
        SData/*11:0*/ SocTop__DOT__rvcpu1__DOT__id_ex_s_offset;
        SData/*11:0*/ SocTop__DOT__rvcpu1__DOT__idex_ex_offset;
        SData/*11:0*/ SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm;
        SData/*11:0*/ SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx;
        SData/*15:0*/ SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte;
        IData/*31:0*/ SocTop__DOT__i_cache_inst_data;
        VlWide<6>/*191:0*/ SocTop__DOT__add_axi_aw_addr;
        IData/*23:0*/ SocTop__DOT__add_axi_aw_len;
        VlWide<6>/*191:0*/ SocTop__DOT__add_axi_w_data;
        IData/*23:0*/ SocTop__DOT__add_axi_w_strb;
        VlWide<6>/*191:0*/ SocTop__DOT__add_axi_ar_addr;
        IData/*23:0*/ SocTop__DOT__add_axi_ar_len;
        VlWide<6>/*191:0*/ SocTop__DOT__add_axi_r_data;
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
        IData/*31:0*/ SocTop__DOT__i_cache2__DOT__i;
        IData/*31:0*/ SocTop__DOT__d_cache3__DOT__i;
        QData/*63:0*/ SocTop__DOT__rvcpu_inst_addr;
        QData/*63:0*/ SocTop__DOT__rvcpu_data_addr;
        QData/*63:0*/ SocTop__DOT__rvcpu_data_o;
        QData/*63:0*/ SocTop__DOT__i_cache_addr;
        QData/*63:0*/ SocTop__DOT__d_cache_data_out;
    };
    struct {
        QData/*63:0*/ SocTop__DOT__d_cache_out_addr;
        QData/*63:0*/ SocTop__DOT__arbitrate_d_data;
        QData/*63:0*/ SocTop__DOT__arbitrate_i_data;
        QData/*63:0*/ SocTop__DOT__t_axi_aw_addr;
        QData/*63:0*/ SocTop__DOT__t_axi_w_data;
        QData/*63:0*/ SocTop__DOT__t_axi_ar_addr;
        QData/*63:0*/ SocTop__DOT__t_axi_r_data;
        QData/*63:0*/ SocTop__DOT__tim_axi_r_data;
        QData/*63:0*/ SocTop__DOT__io_axi_r_data;
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
        QData/*63:0*/ SocTop__DOT__i_cache2__DOT__addr_lock;
        QData/*63:0*/ SocTop__DOT__i_cache2__DOT__miss_data;
        QData/*54:0*/ SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data;
        QData/*54:0*/ SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data;
        QData/*63:0*/ SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data;
        QData/*63:0*/ SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data;
        QData/*63:0*/ SocTop__DOT__d_cache3__DOT__dirty_out_addr;
        QData/*63:0*/ SocTop__DOT__d_cache3__DOT__dirty_out_data;
        QData/*63:0*/ SocTop__DOT__d_cache3__DOT__missr_out_addr;
        QData/*63:0*/ SocTop__DOT__d_cache3__DOT__dirtyw_out_addr;
        QData/*63:0*/ SocTop__DOT__d_cache3__DOT__dirtyw_out_data;
        QData/*63:0*/ SocTop__DOT__d_cache3__DOT__missw_out_addr;
        QData/*63:0*/ SocTop__DOT__d_cache3__DOT__in_rem_data1;
        QData/*63:0*/ SocTop__DOT__d_cache3__DOT__in_ram_data2;
        QData/*54:0*/ SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data;
    };
    struct {
        QData/*54:0*/ SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data;
        QData/*63:0*/ SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data;
        QData/*63:0*/ SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data;
        QData/*63:0*/ SocTop__DOT__axi_mnq4__DOT__read_addr_reg;
        QData/*63:0*/ SocTop__DOT__axi_mnq4__DOT__write_data_reg;
        QData/*63:0*/ SocTop__DOT__axi_mnq4__DOT__write_addr_reg;
        QData/*63:0*/ SocTop__DOT__time_axi6__DOT__car_mtime_l;
        QData/*63:0*/ SocTop__DOT__time_axi6__DOT__csr_mtime_h;
        QData/*63:0*/ SocTop__DOT__time_axi6__DOT__csr_mtime_l_nxt;
        QData/*63:0*/ SocTop__DOT__time_axi6__DOT__csr_mtime_h_nxt;
        QData/*63:0*/ SocTop__DOT__time_axi6__DOT__wmask;
        VlUnpacked<QData/*63:0*/, 32> SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs;
        VlUnpacked<CData/*2:0*/, 64> SocTop__DOT__i_cache2__DOT__i_counter1;
        VlUnpacked<CData/*2:0*/, 64> SocTop__DOT__i_cache2__DOT__i_counter2;
        VlUnpacked<QData/*55:0*/, 64> SocTop__DOT__i_cache2__DOT__u_tag01__DOT__ram;
        VlUnpacked<QData/*55:0*/, 64> SocTop__DOT__i_cache2__DOT__u_tag02__DOT__ram;
        VlUnpacked<QData/*63:0*/, 64> SocTop__DOT__i_cache2__DOT__u_data01__DOT__ram;
        VlUnpacked<QData/*63:0*/, 64> SocTop__DOT__i_cache2__DOT__u_data02__DOT__ram;
        VlUnpacked<CData/*2:0*/, 64> SocTop__DOT__d_cache3__DOT__counter1;
        VlUnpacked<CData/*2:0*/, 64> SocTop__DOT__d_cache3__DOT__counter2;
        VlUnpacked<CData/*0:0*/, 64> SocTop__DOT__d_cache3__DOT__dirty1;
        VlUnpacked<CData/*0:0*/, 64> SocTop__DOT__d_cache3__DOT__dirty2;
        VlUnpacked<QData/*55:0*/, 64> SocTop__DOT__d_cache3__DOT__u_tag0__DOT__ram;
        VlUnpacked<QData/*55:0*/, 64> SocTop__DOT__d_cache3__DOT__u_tag1__DOT__ram;
        VlUnpacked<QData/*63:0*/, 64> SocTop__DOT__d_cache3__DOT__u_data0__DOT__ram;
        VlUnpacked<QData/*63:0*/, 64> SocTop__DOT__d_cache3__DOT__u_data1__DOT__ram;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*3:0*/ __Vchglast__TOP__SocTop__DOT__t_axi_b_id;
    CData/*0:0*/ __Vchglast__TOP__SocTop__DOT__t_axi_b_valid;
    CData/*3:0*/ __Vchglast__TOP__SocTop__DOT__t_axi_r_id;
    CData/*1:0*/ __Vchglast__TOP__SocTop__DOT__time_axi6__DOT__state_time_m_nxt;
    QData/*63:0*/ __Vchglast__TOP__SocTop__DOT__t_axi_ar_addr;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
