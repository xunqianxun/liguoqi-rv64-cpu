// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSocTop__Syms.h"


void VSocTop___024root__traceChgSub0(VSocTop___024root* vlSelf, VerilatedVcd* tracep);

void VSocTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VSocTop___024root* const __restrict vlSelf = static_cast<VSocTop___024root*>(voidSelf);
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VSocTop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VSocTop___024root__traceChgSub0(VSocTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp61;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(((IData)(vlSelf->SocTop__DOT__tim_axi_r_resp) 
                                      << 2U)),6);
            tracep->chgCData(oldp+1,(vlSelf->SocTop__DOT__tim_axi_r_resp),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+2,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
            tracep->chgQData(oldp+4,(vlSelf->SocTop__DOT__uncache_arb_data_o),64);
            tracep->chgBit(oldp+6,(vlSelf->SocTop__DOT__i_cache_read_ena));
            tracep->chgQData(oldp+7,(vlSelf->SocTop__DOT__i_cache_addr),64);
            tracep->chgBit(oldp+9,(vlSelf->SocTop__DOT__i_caceh_resp));
            tracep->chgQData(oldp+10,(vlSelf->SocTop__DOT__arbitrate_d_data),64);
            tracep->chgQData(oldp+12,(vlSelf->SocTop__DOT__arbitrate_i_data),64);
            tracep->chgBit(oldp+14,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid));
            tracep->chgBit(oldp+15,((vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l 
                                     > vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h)));
            tracep->chgCData(oldp+16,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id),4);
            tracep->chgQData(oldp+17,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr),64);
            tracep->chgCData(oldp+19,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len),8);
            tracep->chgCData(oldp+20,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size),3);
            tracep->chgCData(oldp+21,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst),2);
            tracep->chgCData(oldp+22,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache),4);
            tracep->chgCData(oldp+23,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port),3);
            tracep->chgCData(oldp+24,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos),4);
            tracep->chgBit(oldp+25,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid));
            tracep->chgQData(oldp+26,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data),64);
            tracep->chgCData(oldp+28,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb),8);
            tracep->chgBit(oldp+29,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last));
            tracep->chgBit(oldp+30,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid));
            tracep->chgCData(oldp+31,(vlSelf->SocTop__DOT__t_axi_ar_id),4);
            tracep->chgQData(oldp+32,(vlSelf->SocTop__DOT__t_axi_ar_addr),64);
            tracep->chgCData(oldp+34,(vlSelf->SocTop__DOT__t_axi_ar_len),8);
            tracep->chgCData(oldp+35,(vlSelf->SocTop__DOT__t_axi_ar_size),3);
            tracep->chgCData(oldp+36,(vlSelf->SocTop__DOT__t_axi_ar_burst),2);
            tracep->chgCData(oldp+37,(vlSelf->SocTop__DOT__t_axi_ar_cache),4);
            tracep->chgCData(oldp+38,(vlSelf->SocTop__DOT__t_axi_ar_prot),3);
            tracep->chgCData(oldp+39,(vlSelf->SocTop__DOT__t_axi_ar_qos),4);
            tracep->chgBit(oldp+40,(vlSelf->SocTop__DOT__t_axi_ar_valid));
            tracep->chgBit(oldp+41,(vlSelf->SocTop__DOT__t_axi_r_ready));
            tracep->chgCData(oldp+42,(((IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp) 
                                       << 2U)),6);
            tracep->chgCData(oldp+43,(vlSelf->SocTop__DOT__add_axi_b_valid),3);
            tracep->chgCData(oldp+44,(vlSelf->SocTop__DOT__add_axi_r_last),3);
            tracep->chgCData(oldp+45,(vlSelf->SocTop__DOT__add_axi_r_valid),3);
            tracep->chgBit(oldp+46,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
            tracep->chgBit(oldp+47,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
            tracep->chgCData(oldp+48,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                        ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                        : 0U)),4);
            tracep->chgBit(oldp+49,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
            tracep->chgBit(oldp+50,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
            tracep->chgCData(oldp+51,(((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_m))
                                        ? (IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_id)
                                        : 0U)),4);
            tracep->chgCData(oldp+52,(vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp),2);
            tracep->chgBit(oldp+53,(vlSelf->SocTop__DOT__tim_axi_b_valid));
            tracep->chgBit(oldp+54,(vlSelf->SocTop__DOT__tim_axi_r_last));
            tracep->chgBit(oldp+55,((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r))));
            tracep->chgBit(oldp+56,((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state))));
            tracep->chgBit(oldp+57,(vlSelf->SocTop__DOT__io_axi_ar_ready));
            tracep->chgCData(oldp+58,(((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))
                                        ? (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__r_s_axi_ar_id)
                                        : 0U)),4);
            tracep->chgBit(oldp+59,((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))));
            tracep->chgBit(oldp+60,((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))));
            tracep->chgQData(oldp+61,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                        ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                        : 0ULL)),64);
            tracep->chgQData(oldp+63,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                        ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                        : 0ULL)),64);
            tracep->chgQData(oldp+65,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
            tracep->chgIData(oldp+67,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
            tracep->chgBit(oldp+68,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
            tracep->chgCData(oldp+69,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
            tracep->chgBit(oldp+70,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
            tracep->chgCData(oldp+71,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
            tracep->chgCData(oldp+72,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
            tracep->chgQData(oldp+73,(((IData)((0U 
                                                != 
                                                (3U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))))
                                        ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                           + (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset) 
                                                                      >> 0xbU))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset))))
                                        : 0ULL)),64);
            tracep->chgQData(oldp+75,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                        : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                            ? (4ULL 
                                               + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                            : 0ULL))),64);
            tracep->chgBit(oldp+77,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req));
            tracep->chgCData(oldp+78,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
            tracep->chgBit(oldp+79,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
            tracep->chgCData(oldp+80,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
            tracep->chgBit(oldp+81,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
            tracep->chgQData(oldp+82,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
            tracep->chgQData(oldp+84,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
            tracep->chgCData(oldp+86,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
            tracep->chgCData(oldp+87,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
            tracep->chgQData(oldp+88,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+90,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
            tracep->chgBit(oldp+92,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
            tracep->chgSData(oldp+93,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
            tracep->chgCData(oldp+94,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
            tracep->chgQData(oldp+95,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
            tracep->chgCData(oldp+97,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
            tracep->chgQData(oldp+98,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
            tracep->chgQData(oldp+100,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
            tracep->chgIData(oldp+102,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
            tracep->chgIData(oldp+103,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
            tracep->chgBit(oldp+104,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__ex_pc_change));
            tracep->chgBit(oldp+105,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__id_pc_change));
            tracep->chgQData(oldp+106,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_ex),64);
            tracep->chgQData(oldp+108,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_id),64);
            tracep->chgBit(oldp+110,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp));
            tracep->chgCData(oldp+111,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
            tracep->chgCData(oldp+112,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+113,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+114,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+115,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+116,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+117,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+118,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                            >> 7U)))),12);
            tracep->chgQData(oldp+119,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
            tracep->chgQData(oldp+121,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+123,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+125,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+127,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
            tracep->chgQData(oldp+128,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
            tracep->chgIData(oldp+130,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+131,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
            tracep->chgIData(oldp+133,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+134,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
            tracep->chgIData(oldp+136,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+137,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
            tracep->chgIData(oldp+139,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+140,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+142,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
            tracep->chgQData(oldp+144,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data),64);
            tracep->chgBit(oldp+146,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign));
            tracep->chgBit(oldp+147,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready));
            tracep->chgBit(oldp+148,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish));
            tracep->chgBit(oldp+149,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready));
            tracep->chgQData(oldp+150,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata),64);
            tracep->chgQData(oldp+152,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata),64);
            tracep->chgBit(oldp+154,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
            tracep->chgBit(oldp+155,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
            tracep->chgSData(oldp+156,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
            tracep->chgQData(oldp+157,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
            tracep->chgBit(oldp+159,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
            tracep->chgBit(oldp+160,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
            tracep->chgBit(oldp+161,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
            tracep->chgBit(oldp+162,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
            tracep->chgBit(oldp+163,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
            tracep->chgQData(oldp+164,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
            tracep->chgQData(oldp+166,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
            tracep->chgQData(oldp+168,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                        | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+170,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                        & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
            tracep->chgBit(oldp+172,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid));
            tracep->chgBit(oldp+173,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+174,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+175,(((1U & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+177,(((1U & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)),64);
            tracep->chgWData(oldp+179,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand),128);
            tracep->chgQData(oldp+183,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler),64);
            if ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))) {
                __Vtemp61[0U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U];
                __Vtemp61[1U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U];
                __Vtemp61[2U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U];
                __Vtemp61[3U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U];
            } else {
                __Vtemp61[0U] = 0U;
                __Vtemp61[1U] = 0U;
                __Vtemp61[2U] = 0U;
                __Vtemp61[3U] = 0U;
            }
            tracep->chgWData(oldp+185,(__Vtemp61),128);
            tracep->chgWData(oldp+189,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp),128);
            tracep->chgBit(oldp+193,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit));
            tracep->chgCData(oldp+194,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter),7);
            tracep->chgBit(oldp+195,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign));
            tracep->chgQData(oldp+196,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__dividend_t),64);
            tracep->chgQData(oldp+198,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__divider_t),64);
            tracep->chgWData(oldp+200,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a),129);
            tracep->chgWData(oldp+205,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b),65);
            tracep->chgBit(oldp+208,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sigin_inst));
            tracep->chgBit(oldp+209,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+210,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
            tracep->chgBit(oldp+211,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
            tracep->chgQData(oldp+212,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
            tracep->chgBit(oldp+214,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+215,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+216,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
            tracep->chgBit(oldp+217,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
            tracep->chgBit(oldp+218,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                                | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
            tracep->chgBit(oldp+219,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
            tracep->chgBit(oldp+220,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                                | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                            & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                                ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                                : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
            tracep->chgBit(oldp+221,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
            tracep->chgCData(oldp+222,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                         ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
            tracep->chgCData(oldp+223,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
            tracep->chgCData(oldp+224,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
            tracep->chgBit(oldp+225,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
            tracep->chgQData(oldp+226,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
            tracep->chgBit(oldp+228,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+229,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgBit(oldp+230,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
            tracep->chgQData(oldp+233,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+235,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+236,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
            tracep->chgBit(oldp+237,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+238,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
            tracep->chgBit(oldp+240,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+241,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+242,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
            tracep->chgBit(oldp+243,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+244,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                             ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
            tracep->chgQData(oldp+246,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
            tracep->chgBit(oldp+248,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+249,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+250,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgBit(oldp+251,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
            tracep->chgQData(oldp+252,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+254,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+255,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+256,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
            tracep->chgQData(oldp+257,((QData)((IData)(
                                                       ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                        << 7U)))),64);
            tracep->chgBit(oldp+259,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+260,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+261,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+262,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
            tracep->chgCData(oldp+264,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
            tracep->chgCData(oldp+265,((3U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+266,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                    >> 2U)))));
            tracep->chgQData(oldp+267,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
            tracep->chgIData(oldp+269,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
            tracep->chgQData(oldp+270,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
            tracep->chgBit(oldp+272,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
            tracep->chgBit(oldp+273,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
            tracep->chgQData(oldp+274,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
            tracep->chgQData(oldp+276,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
            tracep->chgQData(oldp+278,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
            tracep->chgQData(oldp+280,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
            tracep->chgQData(oldp+282,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
            tracep->chgQData(oldp+284,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
            tracep->chgQData(oldp+286,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
            tracep->chgQData(oldp+288,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
            tracep->chgQData(oldp+290,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
            tracep->chgQData(oldp+292,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
            tracep->chgQData(oldp+294,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
            tracep->chgQData(oldp+296,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
            tracep->chgQData(oldp+298,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
            tracep->chgQData(oldp+300,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
            tracep->chgQData(oldp+302,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
            tracep->chgQData(oldp+304,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
            tracep->chgQData(oldp+306,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
            tracep->chgQData(oldp+308,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
            tracep->chgQData(oldp+310,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
            tracep->chgQData(oldp+312,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
            tracep->chgQData(oldp+314,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
            tracep->chgQData(oldp+316,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
            tracep->chgQData(oldp+318,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
            tracep->chgQData(oldp+320,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
            tracep->chgQData(oldp+322,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
            tracep->chgQData(oldp+324,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
            tracep->chgQData(oldp+326,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
            tracep->chgQData(oldp+328,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
            tracep->chgQData(oldp+330,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
            tracep->chgQData(oldp+332,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
            tracep->chgQData(oldp+334,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
            tracep->chgQData(oldp+336,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
            tracep->chgQData(oldp+338,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
            tracep->chgIData(oldp+340,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
            tracep->chgQData(oldp+341,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U)),55);
            tracep->chgCData(oldp+343,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+344,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst),6);
            tracep->chgBit(oldp+345,((0x20U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))));
            tracep->chgBit(oldp+346,(vlSelf->SocTop__DOT__i_cache2__DOT__read_ok));
            tracep->chgQData(oldp+347,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_data),64);
            tracep->chgBit(oldp+349,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o));
            tracep->chgBit(oldp+350,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t));
            tracep->chgBit(oldp+351,(vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok));
            tracep->chgQData(oldp+352,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data),55);
            tracep->chgBit(oldp+354,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild));
            tracep->chgQData(oldp+355,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data),55);
            tracep->chgBit(oldp+357,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild));
            tracep->chgQData(oldp+358,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data),64);
            tracep->chgQData(oldp+360,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data),64);
            tracep->chgIData(oldp+362,(vlSelf->SocTop__DOT__i_cache2__DOT__i),32);
            tracep->chgQData(oldp+363,((0x80000000000000ULL 
                                        | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                           >> 9U))),56);
            tracep->chgBit(oldp+365,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
            tracep->chgBit(oldp+366,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
            tracep->chgCData(oldp+367,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread),6);
            tracep->chgBit(oldp+368,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
            tracep->chgBit(oldp+369,(vlSelf->SocTop__DOT__d_cache3__DOT__read_ok));
            tracep->chgCData(oldp+370,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite),6);
            tracep->chgBit(oldp+371,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
            tracep->chgBit(oldp+372,(vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok));
            tracep->chgBit(oldp+373,((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
            tracep->chgIData(oldp+374,(vlSelf->SocTop__DOT__d_cache3__DOT__i),32);
            tracep->chgIData(oldp+375,(vlSelf->SocTop__DOT__d_cache3__DOT__j),32);
            tracep->chgQData(oldp+376,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data),55);
            tracep->chgBit(oldp+378,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild));
            tracep->chgQData(oldp+379,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data),55);
            tracep->chgBit(oldp+381,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild));
            tracep->chgQData(oldp+382,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data),64);
            tracep->chgQData(oldp+384,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data),64);
            tracep->chgCData(oldp+386,(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state),3);
            tracep->chgCData(oldp+387,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_id),4);
            tracep->chgQData(oldp+388,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_addr),64);
            tracep->chgCData(oldp+390,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_len),8);
            tracep->chgCData(oldp+391,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_size),3);
            tracep->chgCData(oldp+392,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_burst),2);
            tracep->chgCData(oldp+393,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_cache),4);
            tracep->chgCData(oldp+394,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_prot),3);
            tracep->chgCData(oldp+395,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_qos),4);
            tracep->chgBit(oldp+396,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid));
            tracep->chgBit(oldp+397,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid));
            tracep->chgBit(oldp+398,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ok));
            tracep->chgCData(oldp+399,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_id),4);
            tracep->chgQData(oldp+400,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_addr),64);
            tracep->chgCData(oldp+402,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_len),8);
            tracep->chgCData(oldp+403,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_size),3);
            tracep->chgCData(oldp+404,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_burst),2);
            tracep->chgCData(oldp+405,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_cache),4);
            tracep->chgCData(oldp+406,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_prot),3);
            tracep->chgCData(oldp+407,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_qos),4);
            tracep->chgBit(oldp+408,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid));
            tracep->chgBit(oldp+409,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid));
            tracep->chgBit(oldp+410,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_ok));
            tracep->chgCData(oldp+411,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
            tracep->chgCData(oldp+412,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
            tracep->chgQData(oldp+413,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
            tracep->chgQData(oldp+415,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
            tracep->chgCData(oldp+417,(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id),4);
            tracep->chgQData(oldp+418,(vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l),64);
            tracep->chgQData(oldp+420,(vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h),64);
            tracep->chgCData(oldp+422,(vlSelf->SocTop__DOT__clint6__DOT__state_time_m),2);
            tracep->chgCData(oldp+423,(vlSelf->SocTop__DOT__clint6__DOT__time_reg_id),4);
            tracep->chgCData(oldp+424,(vlSelf->SocTop__DOT__clint6__DOT__state_time_r),2);
            tracep->chgCData(oldp+425,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state),2);
            tracep->chgCData(oldp+426,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state),2);
            tracep->chgQData(oldp+427,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__write_data_reg),64);
            tracep->chgQData(oldp+429,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__write_addr_reg),64);
            tracep->chgCData(oldp+431,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__r_s_axi_ar_id),4);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+432,((((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                       & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_uncahce_shankhand))
                                       ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid)
                                       : (((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                           & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_uncahce_shankhand)) 
                                          & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid)))));
            tracep->chgQData(oldp+433,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
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
                                         : 0ULL)),64);
            tracep->chgBit(oldp+435,(((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                       ? (((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                           & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_uncahce_shankhand))
                                           ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid)
                                           : (((2U 
                                                == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                               & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_uncahce_shankhand)) 
                                              & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid)))
                                       : (IData)(vlSelf->SocTop__DOT__uncache_dc_finish))));
            tracep->chgQData(oldp+436,(((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                         ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                                         : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                             ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                                             : 0ULL))),64);
            tracep->chgBit(oldp+438,(((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                       ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp)
                                       : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                          & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp)))));
            tracep->chgCData(oldp+439,(((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r))
                                         ? (0xfU & 
                                            ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))
                                         : 0U)),4);
            tracep->chgCData(oldp+440,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena)
                                         ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
                                             ? 0xbU
                                             : (0x1fU 
                                                & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 7U)))
                                         : 0U)),5);
            tracep->chgSData(oldp+441,((0xfffU & ((2U 
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
                                                    : 0U)))),12);
            tracep->chgQData(oldp+442,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
                                         ? (0xfffffffffffffffeULL 
                                            & ((((- (QData)((IData)(
                                                                    (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                               + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op))
                                         : 0ULL)),64);
            tracep->chgBit(oldp+444,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+445,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+446,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+447,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+448,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+449,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+450,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+451,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+452,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+453,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+454,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+455,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+456,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+457,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+458,((1U & (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+459,((1U & (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+460,(((IData)(((0x80U 
                                                == 
                                                (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                      & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+461,(((IData)(((0x80U 
                                                == 
                                                (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                      & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+462,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
            tracep->chgBit(oldp+463,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
            tracep->chgBit(oldp+464,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
            tracep->chgQData(oldp+465,(((((- (QData)((IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
            tracep->chgBit(oldp+467,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                             & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                            & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                   == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
            tracep->chgQData(oldp+468,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
                                         ? ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                             ? ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                  ? 0ULL
                                                  : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                  ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte))
                                                  : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte))))
                                             : ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                  ? vlSelf->SocTop__DOT__d_cache_data_out
                                                  : 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte) 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte)))
                                                  : 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte) 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte))))))
                                         : 0ULL)),64);
            tracep->chgBit(oldp+470,(((IData)(vlSelf->SocTop__DOT__uncache_dc_re) 
                                      & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))));
            tracep->chgBit(oldp+471,(((IData)(vlSelf->SocTop__DOT__uncache_dc_we) 
                                      & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))));
            tracep->chgBit(oldp+472,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                      & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                           == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                               >> 9U)) 
                                          & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                         | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                             == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                 >> 9U)) 
                                            & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
            tracep->chgBit(oldp+473,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                      & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                           == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                               >> 9U)) 
                                          & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                         | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                             == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                 >> 9U)) 
                                            & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
            tracep->chgBit(oldp+474,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 2U))));
            tracep->chgBit(oldp+475,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                       >> 2U) & (2U 
                                                 == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
            tracep->chgQData(oldp+476,((((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                           & (IData)(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand)) 
                                          & (IData)(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand)) 
                                         & (0x2004000ULL 
                                            == (((QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))
                                         ? (vlSelf->SocTop__DOT__clint6__DOT__wmask 
                                            & (((QData)((IData)(
                                                                vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_w_data[2U]))))
                                         : (1ULL + vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l))),64);
            tracep->chgQData(oldp+478,((((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                           & (IData)(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand)) 
                                          & (IData)(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand)) 
                                         & (0x200bff8ULL 
                                            == (((QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))
                                         ? (vlSelf->SocTop__DOT__clint6__DOT__wmask 
                                            & (((QData)((IData)(
                                                                vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_w_data[2U]))))
                                         : vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h)),64);
            tracep->chgBit(oldp+480,(((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 1U))));
            tracep->chgBit(oldp+481,(((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r)) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 1U))));
            tracep->chgQData(oldp+482,(((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                          & (IData)(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand)) 
                                         & (0x2004000ULL 
                                            == (((QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                         ? vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l
                                         : ((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                              & (IData)(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand)) 
                                             & (0x200bff8ULL 
                                                == 
                                                (((QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                             ? vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h
                                             : 0ULL))),64);
            tracep->chgBit(oldp+484,(((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state)) 
                                      & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
            tracep->chgBit(oldp+485,(((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                      & (2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+486,(vlSelf->SocTop__DOT__rvcpu_data_addr),64);
            tracep->chgCData(oldp+488,(vlSelf->SocTop__DOT__rvcpu_wmask),8);
            tracep->chgQData(oldp+489,(vlSelf->SocTop__DOT__rvcpu_data_o),64);
            tracep->chgBit(oldp+491,(vlSelf->SocTop__DOT__rvcpu_we));
            tracep->chgBit(oldp+492,(vlSelf->SocTop__DOT__rvcpu_re));
            tracep->chgBit(oldp+493,(vlSelf->SocTop__DOT__core_stall_l));
            tracep->chgQData(oldp+494,(((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                         ? (vlSelf->SocTop__DOT__rvcpu_data_o 
                                            & (((QData)((IData)(
                                                                (((- (IData)(
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
                                                << 0x20U) 
                                               | (QData)((IData)(
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
                                         : 0ULL)),64);
            tracep->chgQData(oldp+496,(vlSelf->SocTop__DOT__uncache_arb_addr),64);
            tracep->chgCData(oldp+498,(((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                         ? (IData)(vlSelf->SocTop__DOT__rvcpu_wmask)
                                         : 0U)),8);
            tracep->chgBit(oldp+499,(vlSelf->SocTop__DOT__uncache_arb_we));
            tracep->chgBit(oldp+500,(vlSelf->SocTop__DOT__uncache_arb_re));
            tracep->chgQData(oldp+501,(vlSelf->SocTop__DOT__uncache_dc_data),64);
            tracep->chgQData(oldp+503,(vlSelf->SocTop__DOT__uncache_dc_addr),64);
            tracep->chgCData(oldp+505,(vlSelf->SocTop__DOT__uncache_dc_mask),8);
            tracep->chgBit(oldp+506,(vlSelf->SocTop__DOT__uncache_dc_we));
            tracep->chgBit(oldp+507,(vlSelf->SocTop__DOT__uncache_dc_re));
            tracep->chgBit(oldp+508,(vlSelf->SocTop__DOT__uncache_dc_finish));
            tracep->chgIData(oldp+509,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
            tracep->chgBit(oldp+510,(vlSelf->SocTop__DOT__i_cache_inst_valid));
            tracep->chgQData(oldp+511,(vlSelf->SocTop__DOT__d_cache_data_out),64);
            tracep->chgQData(oldp+513,(vlSelf->SocTop__DOT__d_cache_out_addr),64);
            tracep->chgCData(oldp+515,(vlSelf->SocTop__DOT__d_cache_out_type),4);
            tracep->chgBit(oldp+516,(vlSelf->SocTop__DOT__arbitrate_d_ok));
            tracep->chgBit(oldp+517,(vlSelf->SocTop__DOT__t_axi_ar_ready));
            tracep->chgCData(oldp+518,(vlSelf->SocTop__DOT__t_axi_r_id),4);
            tracep->chgQData(oldp+519,(vlSelf->SocTop__DOT__t_axi_r_data),64);
            tracep->chgCData(oldp+521,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
            tracep->chgBit(oldp+522,(vlSelf->SocTop__DOT__t_axi_r_last));
            tracep->chgBit(oldp+523,(vlSelf->SocTop__DOT__t_axi_r_valid));
            tracep->chgSData(oldp+524,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
            tracep->chgWData(oldp+525,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
            tracep->chgIData(oldp+531,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
            tracep->chgSData(oldp+532,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
            tracep->chgCData(oldp+533,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
            tracep->chgSData(oldp+534,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
            tracep->chgSData(oldp+535,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
            tracep->chgSData(oldp+536,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
            tracep->chgCData(oldp+537,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
            tracep->chgCData(oldp+538,(vlSelf->SocTop__DOT__add_axi_aw_ready),3);
            tracep->chgWData(oldp+539,(vlSelf->SocTop__DOT__add_axi_w_data),192);
            tracep->chgIData(oldp+545,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
            tracep->chgCData(oldp+546,(vlSelf->SocTop__DOT__add_axi_w_last),3);
            tracep->chgCData(oldp+547,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
            tracep->chgCData(oldp+548,(vlSelf->SocTop__DOT__add_axi_w_ready),3);
            tracep->chgSData(oldp+549,(vlSelf->SocTop__DOT__add_axi_b_id),12);
            tracep->chgCData(oldp+550,(vlSelf->SocTop__DOT__add_axi_b_ready),3);
            tracep->chgSData(oldp+551,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
            tracep->chgWData(oldp+552,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
            tracep->chgIData(oldp+558,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
            tracep->chgSData(oldp+559,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
            tracep->chgCData(oldp+560,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
            tracep->chgSData(oldp+561,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
            tracep->chgSData(oldp+562,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
            tracep->chgSData(oldp+563,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
            tracep->chgCData(oldp+564,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
            tracep->chgCData(oldp+565,(vlSelf->SocTop__DOT__add_axi_ar_ready),3);
            tracep->chgSData(oldp+566,(vlSelf->SocTop__DOT__add_axi_r_id),12);
            tracep->chgWData(oldp+567,(vlSelf->SocTop__DOT__add_axi_r_data),192);
            tracep->chgCData(oldp+573,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
            tracep->chgCData(oldp+574,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                >> 8U))),4);
            tracep->chgQData(oldp+575,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
            tracep->chgCData(oldp+577,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+578,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+579,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                              >> 4U))),2);
            tracep->chgCData(oldp+580,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                                >> 8U))),4);
            tracep->chgCData(oldp+581,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+582,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                                >> 8U))),4);
            tracep->chgBit(oldp+583,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
            tracep->chgBit(oldp+584,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                            >> 2U))));
            tracep->chgQData(oldp+585,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
            tracep->chgCData(oldp+587,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                 >> 0x10U))),8);
            tracep->chgBit(oldp+588,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                            >> 2U))));
            tracep->chgBit(oldp+589,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                            >> 2U))));
            tracep->chgBit(oldp+590,(vlSelf->SocTop__DOT__soc_axi_w_ready));
            tracep->chgBit(oldp+591,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                            >> 2U))));
            tracep->chgCData(oldp+592,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                >> 8U))),4);
            tracep->chgQData(oldp+593,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
            tracep->chgCData(oldp+595,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+596,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+597,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                              >> 4U))),2);
            tracep->chgCData(oldp+598,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                                >> 8U))),4);
            tracep->chgCData(oldp+599,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+600,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                                >> 8U))),4);
            tracep->chgBit(oldp+601,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                            >> 2U))));
            tracep->chgBit(oldp+602,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                            >> 2U))));
            tracep->chgCData(oldp+603,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                >> 4U))),4);
            tracep->chgQData(oldp+604,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))),64);
            tracep->chgCData(oldp+606,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+607,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+608,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+609,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+610,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+611,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                                >> 4U))),4);
            tracep->chgBit(oldp+612,(vlSelf->SocTop__DOT__tim_axi_aw_ready));
            tracep->chgBit(oldp+613,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                            >> 1U))));
            tracep->chgQData(oldp+614,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_w_data[2U])))),64);
            tracep->chgCData(oldp+616,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                 >> 8U))),8);
            tracep->chgBit(oldp+617,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                            >> 1U))));
            tracep->chgBit(oldp+618,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+619,(vlSelf->SocTop__DOT__tim_axi_w_ready));
            tracep->chgBit(oldp+620,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                            >> 1U))));
            tracep->chgCData(oldp+621,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                >> 4U))),4);
            tracep->chgQData(oldp+622,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
            tracep->chgCData(oldp+624,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+625,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+626,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+627,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+628,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+629,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                                >> 4U))),4);
            tracep->chgBit(oldp+630,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+631,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
            tracep->chgQData(oldp+632,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
            tracep->chgBit(oldp+634,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                            >> 1U))));
            tracep->chgCData(oldp+635,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
            tracep->chgQData(oldp+636,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
            tracep->chgCData(oldp+638,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
            tracep->chgCData(oldp+639,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
            tracep->chgCData(oldp+640,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
            tracep->chgCData(oldp+641,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
            tracep->chgCData(oldp+642,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
            tracep->chgCData(oldp+643,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
            tracep->chgBit(oldp+644,(vlSelf->SocTop__DOT__io_axi_aw_ready));
            tracep->chgBit(oldp+645,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
            tracep->chgQData(oldp+646,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
            tracep->chgCData(oldp+648,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
            tracep->chgBit(oldp+649,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
            tracep->chgBit(oldp+650,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
            tracep->chgBit(oldp+651,(vlSelf->SocTop__DOT__io_axi_w_ready));
            tracep->chgBit(oldp+652,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
            tracep->chgCData(oldp+653,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
            tracep->chgQData(oldp+654,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
            tracep->chgCData(oldp+656,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
            tracep->chgCData(oldp+657,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
            tracep->chgCData(oldp+658,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
            tracep->chgCData(oldp+659,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
            tracep->chgCData(oldp+660,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
            tracep->chgCData(oldp+661,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
            tracep->chgBit(oldp+662,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
            tracep->chgBit(oldp+663,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
            tracep->chgCData(oldp+664,(vlSelf->SocTop__DOT__mmio_thing),3);
            tracep->chgBit(oldp+665,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
            tracep->chgQData(oldp+666,(((IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand)
                                         ? (((QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+668,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+669,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
            tracep->chgCData(oldp+671,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
            tracep->chgBit(oldp+672,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
            tracep->chgCData(oldp+673,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
            tracep->chgBit(oldp+674,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
            tracep->chgBit(oldp+675,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req));
            tracep->chgCData(oldp+676,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
            tracep->chgCData(oldp+677,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
            tracep->chgQData(oldp+678,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
            tracep->chgBit(oldp+680,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
            tracep->chgBit(oldp+681,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
            tracep->chgBit(oldp+682,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
            tracep->chgCData(oldp+683,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
            tracep->chgQData(oldp+684,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
            tracep->chgBit(oldp+686,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_ctrl_req));
            tracep->chgQData(oldp+687,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
            tracep->chgIData(oldp+689,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
            tracep->chgIData(oldp+690,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
            tracep->chgSData(oldp+691,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+692,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
            tracep->chgCData(oldp+693,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
            tracep->chgBit(oldp+694,((IData)((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->SocTop__DOT__i_cache_inst_data)))));
            tracep->chgBit(oldp+695,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
            tracep->chgBit(oldp+696,((IData)((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->SocTop__DOT__i_cache_inst_data)))));
            tracep->chgQData(oldp+697,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
            tracep->chgCData(oldp+699,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
            tracep->chgBit(oldp+700,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
            tracep->chgBit(oldp+701,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
            tracep->chgBit(oldp+702,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
            tracep->chgBit(oldp+703,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
            tracep->chgBit(oldp+704,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
            tracep->chgBit(oldp+705,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
            tracep->chgBit(oldp+706,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
            tracep->chgBit(oldp+707,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
            tracep->chgBit(oldp+708,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
            tracep->chgBit(oldp+709,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
            tracep->chgBit(oldp+710,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
            tracep->chgBit(oldp+711,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
            tracep->chgBit(oldp+712,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
            tracep->chgBit(oldp+713,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
            tracep->chgBit(oldp+714,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
            tracep->chgBit(oldp+715,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
            tracep->chgBit(oldp+716,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
            tracep->chgBit(oldp+717,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
            tracep->chgBit(oldp+718,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
            tracep->chgBit(oldp+719,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
            tracep->chgBit(oldp+720,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div));
            tracep->chgBit(oldp+721,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu));
            tracep->chgBit(oldp+722,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul));
            tracep->chgBit(oldp+723,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh));
            tracep->chgBit(oldp+724,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu));
            tracep->chgBit(oldp+725,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu));
            tracep->chgBit(oldp+726,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem));
            tracep->chgBit(oldp+727,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu));
            tracep->chgBit(oldp+728,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
            tracep->chgBit(oldp+729,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
            tracep->chgBit(oldp+730,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
            tracep->chgBit(oldp+731,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
            tracep->chgBit(oldp+732,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
            tracep->chgBit(oldp+733,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw));
            tracep->chgBit(oldp+734,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw));
            tracep->chgBit(oldp+735,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw));
            tracep->chgBit(oldp+736,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw));
            tracep->chgBit(oldp+737,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw));
            tracep->chgBit(oldp+738,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
            tracep->chgBit(oldp+739,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
            tracep->chgBit(oldp+740,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
            tracep->chgBit(oldp+741,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
            tracep->chgBit(oldp+742,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
            tracep->chgBit(oldp+743,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
            tracep->chgBit(oldp+744,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
            tracep->chgBit(oldp+745,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
            tracep->chgBit(oldp+746,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                            >> 3U))));
            tracep->chgQData(oldp+747,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
            tracep->chgQData(oldp+749,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data),64);
            tracep->chgQData(oldp+751,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu),64);
            tracep->chgQData(oldp+753,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang),64);
            tracep->chgCData(oldp+755,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
            tracep->chgSData(oldp+756,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
            tracep->chgIData(oldp+757,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
            tracep->chgQData(oldp+758,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
            tracep->chgCData(oldp+760,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
            tracep->chgBit(oldp+761,(vlSelf->SocTop__DOT__uncache_mmio7__DOT__start_sign));
            tracep->chgBit(oldp+762,(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache));
            tracep->chgQData(oldp+763,((((QData)((IData)(
                                                         (((- (IData)(
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
                                         << 0x20U) 
                                        | (QData)((IData)(
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
                                                                                & (IData)(vlSelf->SocTop__DOT__rvcpu_wmask)))))))))))),64);
            tracep->chgBit(oldp+765,(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand));
            tracep->chgCData(oldp+766,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst_nxt),6);
            tracep->chgBit(oldp+767,(vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok));
            tracep->chgQData(oldp+768,((vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 9U)),55);
            tracep->chgCData(oldp+770,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+771,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt),6);
            tracep->chgBit(oldp+772,(vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok));
            tracep->chgBit(oldp+773,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok));
            tracep->chgQData(oldp+774,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr),64);
            tracep->chgQData(oldp+776,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data),64);
            tracep->chgCData(oldp+778,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type),4);
            tracep->chgBit(oldp+779,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_o));
            tracep->chgBit(oldp+780,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_t));
            tracep->chgBit(oldp+781,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok));
            tracep->chgCData(oldp+782,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type),4);
            tracep->chgQData(oldp+783,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr),64);
            tracep->chgCData(oldp+785,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1),8);
            tracep->chgBit(oldp+786,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1));
            tracep->chgCData(oldp+787,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2),8);
            tracep->chgBit(oldp+788,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2));
            tracep->chgBit(oldp+789,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp));
            tracep->chgCData(oldp+790,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt),6);
            tracep->chgCData(oldp+791,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1),8);
            tracep->chgCData(oldp+792,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2),8);
            tracep->chgBit(oldp+793,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok));
            tracep->chgQData(oldp+794,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr),64);
            tracep->chgQData(oldp+796,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data),64);
            tracep->chgCData(oldp+798,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type),4);
            tracep->chgBit(oldp+799,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_o));
            tracep->chgBit(oldp+800,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_t));
            tracep->chgBit(oldp+801,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok));
            tracep->chgCData(oldp+802,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type),4);
            tracep->chgQData(oldp+803,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr),64);
            tracep->chgCData(oldp+805,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1),8);
            tracep->chgBit(oldp+806,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1));
            tracep->chgCData(oldp+807,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2),8);
            tracep->chgBit(oldp+808,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2));
            tracep->chgBit(oldp+809,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp));
            tracep->chgBit(oldp+810,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1));
            tracep->chgBit(oldp+811,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2));
            tracep->chgCData(oldp+812,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1),8);
            tracep->chgQData(oldp+813,(vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1),64);
            tracep->chgCData(oldp+815,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2),8);
            tracep->chgQData(oldp+816,(vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2),64);
            tracep->chgQData(oldp+818,((0x80000000000000ULL 
                                        | (vlSelf->SocTop__DOT__uncache_dc_addr 
                                           >> 9U))),56);
            tracep->chgBit(oldp+820,(vlSelf->SocTop__DOT__arbitratem4__DOT__read_dcache_shankhand));
            tracep->chgBit(oldp+821,(vlSelf->SocTop__DOT__arbitratem4__DOT__write_dcache_shankhand));
            tracep->chgBit(oldp+822,(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand));
            tracep->chgBit(oldp+823,(vlSelf->SocTop__DOT__arbitratem4__DOT__read_uncahce_shankhand));
            tracep->chgBit(oldp+824,(vlSelf->SocTop__DOT__arbitratem4__DOT__write_uncahce_shankhand));
            tracep->chgCData(oldp+825,(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state_nxt),3);
            tracep->chgBit(oldp+826,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success));
            tracep->chgBit(oldp+827,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success));
            tracep->chgBit(oldp+828,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success));
            tracep->chgBit(oldp+829,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand));
            tracep->chgBit(oldp+830,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand));
            tracep->chgBit(oldp+831,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                       >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
            tracep->chgBit(oldp+832,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                       >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
            tracep->chgCData(oldp+833,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
            tracep->chgBit(oldp+834,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
            tracep->chgCData(oldp+835,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
            tracep->chgBit(oldp+836,((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                       & (IData)(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand)) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+837,((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                       & (IData)(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand)) 
                                      & (0x200bff8ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+838,(((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                        & (IData)(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand)) 
                                       & (IData)(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand)) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgBit(oldp+839,(((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                        & (IData)(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand)) 
                                       & (IData)(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand)) 
                                      & (0x200bff8ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgQData(oldp+840,(vlSelf->SocTop__DOT__clint6__DOT__wmask),64);
            tracep->chgBit(oldp+842,(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand));
            tracep->chgBit(oldp+843,(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand));
            tracep->chgBit(oldp+844,(vlSelf->SocTop__DOT__clint6__DOT__mode_right));
            tracep->chgCData(oldp+845,(vlSelf->SocTop__DOT__clint6__DOT__state_time_m_nxt),2);
            tracep->chgBit(oldp+846,((IData)(((((((0U 
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
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos)))))));
            tracep->chgBit(oldp+847,(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand));
            tracep->chgCData(oldp+848,(vlSelf->SocTop__DOT__clint6__DOT__state_time_r_nxt),2);
            tracep->chgBit(oldp+849,(((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                      & (IData)(vlSelf->SocTop__DOT__io_axi_aw_ready))));
            tracep->chgBit(oldp+850,(((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                      & (IData)(vlSelf->SocTop__DOT__io_axi_w_ready))));
            tracep->chgCData(oldp+851,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state_nxt),2);
            tracep->chgBit(oldp+852,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__ar_shankhand));
            tracep->chgCData(oldp+853,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state_nxt),2);
        }
        tracep->chgBit(oldp+854,(vlSelf->clk));
        tracep->chgBit(oldp+855,(vlSelf->rst));
        tracep->chgBit(oldp+856,(vlSelf->read_ena_sign_));
        tracep->chgQData(oldp+857,(vlSelf->out_addr_outp),64);
        tracep->chgQData(oldp+859,(vlSelf->read_data_sign_),64);
        tracep->chgBit(oldp+861,(vlSelf->out_write_ram_ena));
        tracep->chgQData(oldp+862,(vlSelf->out_write_ram_data),64);
        tracep->chgQData(oldp+864,(vlSelf->out_write_ram_addr),64);
        tracep->chgQData(oldp+866,(vlSelf->out_slave_addr_),64);
        tracep->chgQData(oldp+868,(vlSelf->out_serial_data_),64);
        tracep->chgQData(oldp+870,(vlSelf->in_rtc_data_),64);
        tracep->chgBit(oldp+872,(vlSelf->out_serial_write_));
        tracep->chgBit(oldp+873,(vlSelf->out_rtc_read_));
        tracep->chgBit(oldp+874,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->chgBit(oldp+875,((1U & ((~ (IData)(vlSelf->rst)) 
                                        & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                            ? (IData)(vlSelf->SocTop__DOT__add_axi_aw_ready)
                                            : ((2U 
                                                & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                ? ((IData)(vlSelf->SocTop__DOT__add_axi_aw_ready) 
                                                   >> 1U)
                                                : (
                                                   ((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_aw_ready)) 
                                                   >> 2U)))))));
        tracep->chgBit(oldp+876,((1U & ((~ (IData)(vlSelf->rst)) 
                                        & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                            ? (IData)(vlSelf->SocTop__DOT__add_axi_w_ready)
                                            : ((2U 
                                                & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                ? ((IData)(vlSelf->SocTop__DOT__add_axi_w_ready) 
                                                   >> 1U)
                                                : (
                                                   ((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_w_ready)) 
                                                   >> 2U)))))));
        tracep->chgCData(oldp+877,(((IData)(vlSelf->rst)
                                     ? 0U : (0xfU & 
                                             ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                               ? (IData)(vlSelf->SocTop__DOT__add_axi_b_id)
                                               : ((2U 
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
                                                    : 0U)))))),4);
        tracep->chgCData(oldp+878,(((IData)(vlSelf->rst)
                                     ? 0U : (3U & (
                                                   (1U 
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
                                                      : 0U)))))),2);
        tracep->chgBit(oldp+879,((1U & ((~ (IData)(vlSelf->rst)) 
                                        & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                            ? (IData)(vlSelf->SocTop__DOT__add_axi_b_valid)
                                            : ((2U 
                                                & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                ? ((IData)(vlSelf->SocTop__DOT__add_axi_b_valid) 
                                                   >> 1U)
                                                : (
                                                   ((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                    & (IData)(vlSelf->SocTop__DOT__add_axi_b_valid)) 
                                                   >> 2U)))))));
        tracep->chgQData(oldp+880,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                     ? vlSelf->read_data_sign_
                                     : 0ULL)),64);
        tracep->chgQData(oldp+882,(((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))
                                     ? vlSelf->in_rtc_data_
                                     : 0ULL)),64);
        tracep->chgQData(oldp+884,(((1U & ((~ (IData)(vlSelf->rst)) 
                                           & ((IData)(vlSelf->rst)
                                               ? 0U
                                               : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr))))
                                     ? ((((0x1fU & 
                                           (vlSelf->SocTop__DOT__i_cache_inst_data 
                                            >> 0xfU)) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [(0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                   >> 0xfU))])
                                     : 0ULL)),64);
        tracep->chgBit(oldp+886,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->chgQData(oldp+887,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                ? (0xfffffffffffffffeULL 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->chgBit(oldp+889,(((~ (IData)(vlSelf->rst)) 
                                  & (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))));
        tracep->chgQData(oldp+890,(((IData)(vlSelf->rst)
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
                                                      : 0ULL)))))),64);
        tracep->chgQData(oldp+892,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc)),64);
        tracep->chgCData(oldp+894,(((IData)(vlSelf->rst)
                                     ? 0U : (7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0xcU)))),3);
        tracep->chgQData(oldp+895,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                     ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                     : 0ULL)),64);
        tracep->chgQData(oldp+897,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                     ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                     : 0ULL)),64);
        tracep->chgQData(oldp+899,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)),64);
        tracep->chgIData(oldp+901,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),32);
        tracep->chgIData(oldp+902,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst)),32);
        tracep->chgQData(oldp+903,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                     ? ((1U & ((~ (IData)(vlSelf->rst)) 
                                               & ((IData)(vlSelf->rst)
                                                   ? 0U
                                                   : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr))))
                                         ? ((((0x1fU 
                                               & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr)) 
                                             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                             ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                            [(0x1fU 
                                              & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                 >> 0xfU))])
                                         : 0ULL) : vlSelf->SocTop__DOT__rvcpu_inst_addr)),64);
        tracep->chgQData(oldp+905,(((IData)((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->SocTop__DOT__i_cache_inst_data)))
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                                                >> 0x13U))))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          (0xfffffU 
                                                           & (vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                                              << 1U)))))
                                     : ((IData)((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->SocTop__DOT__i_cache_inst_data)))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                                    >> 0xbU))))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (0xfffU 
                                                               & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                                  << 1U)))))
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                             ? (((- (QData)((IData)(
                                                                    (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                                   >> 0x14U))))
                                             : ((IData)(vlSelf->rst)
                                                 ? 0ULL
                                                 : 4ULL))))),64);
        tracep->chgBit(oldp+907,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                  & (2U 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->chgBit(oldp+908,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                  & (2U 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->chgQData(oldp+909,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 2U)))
                                                ? (
                                                   (1U 
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
                                                : (
                                                   (1U 
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
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))))))),64);
        tracep->chgQData(oldp+911,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 1U))))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))
                                                : (
                                                   (1U 
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
                                                     << 0x30U)))))),64);
        tracep->chgQData(oldp+913,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 2U)))
                                                ? ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                   << 0x20U)
                                                : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->chgCData(oldp+915,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? ((1U 
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
                                              : ((1U 
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
                                                   : 1U))))),8);
        tracep->chgCData(oldp+916,(((IData)(vlSelf->rst)
                                     ? 0U : ((0U == 
                                              (3U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 1U))))
                                              ? 3U : 
                                             ((1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 1U))))
                                               ? 0xcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                               >> 1U))))
                                                   ? 0x30U
                                                   : 0xc0U))))),8);
        tracep->chgCData(oldp+917,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? 0xf0U
                                              : 0xfU))),8);
        tracep->chgBit(oldp+918,(((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid) 
                                  & ((~ (IData)(vlSelf->rst)) 
                                     & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                         ? (IData)(vlSelf->SocTop__DOT__add_axi_aw_ready)
                                         : ((2U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                             ? ((IData)(vlSelf->SocTop__DOT__add_axi_aw_ready) 
                                                >> 1U)
                                             : (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_aw_ready)) 
                                                >> 2U)))))));
        tracep->chgBit(oldp+919,(((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid) 
                                  & ((~ (IData)(vlSelf->rst)) 
                                     & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                         ? (IData)(vlSelf->SocTop__DOT__add_axi_w_ready)
                                         : ((2U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                             ? ((IData)(vlSelf->SocTop__DOT__add_axi_w_ready) 
                                                >> 1U)
                                             : (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_w_ready)) 
                                                >> 2U)))))));
    }
}

void VSocTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VSocTop___024root* const __restrict vlSelf = static_cast<VSocTop___024root*>(voidSelf);
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
