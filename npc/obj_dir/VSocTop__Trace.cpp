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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSelf->SocTop__DOT__add_axi_b_resp),6);
            tracep->chgCData(oldp+1,(vlSelf->SocTop__DOT__add_axi_r_resp),6);
            tracep->chgCData(oldp+2,(vlSelf->SocTop__DOT__tim_axi_b_resp),2);
            tracep->chgCData(oldp+3,(vlSelf->SocTop__DOT__tim_axi_r_resp),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+4,(vlSelf->SocTop__DOT__rvcpu_data_addr),64);
            tracep->chgCData(oldp+6,(vlSelf->SocTop__DOT__rvcpu_wmask),8);
            tracep->chgQData(oldp+7,(vlSelf->SocTop__DOT__rvcpu_data_o),64);
            tracep->chgBit(oldp+9,(vlSelf->SocTop__DOT__rvcpu_we));
            tracep->chgBit(oldp+10,(vlSelf->SocTop__DOT__rvcpu_re));
            tracep->chgIData(oldp+11,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
            tracep->chgBit(oldp+12,((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_ti_sign)))));
            tracep->chgBit(oldp+13,(vlSelf->SocTop__DOT__i_cache_read_ena));
            tracep->chgBit(oldp+14,((1U & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                              >> 1U)))));
            tracep->chgQData(oldp+15,(vlSelf->SocTop__DOT__d_cache_data_out),64);
            tracep->chgBit(oldp+17,(vlSelf->SocTop__DOT__d_cache_read_ena));
            tracep->chgBit(oldp+18,(vlSelf->SocTop__DOT__arbitrate_ti_sign));
            tracep->chgBit(oldp+19,((vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l 
                                     > vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h)));
            tracep->chgQData(oldp+20,(vlSelf->SocTop__DOT__t_axi_aw_addr),64);
            tracep->chgBit(oldp+22,(vlSelf->SocTop__DOT__t_axi_aw_valid));
            tracep->chgQData(oldp+23,(vlSelf->SocTop__DOT__t_axi_w_data),64);
            tracep->chgCData(oldp+25,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                        ? 1U : 0U)),4);
            tracep->chgQData(oldp+26,(vlSelf->SocTop__DOT__t_axi_ar_addr),64);
            tracep->chgBit(oldp+28,(vlSelf->SocTop__DOT__t_axi_ar_valid));
            tracep->chgSData(oldp+29,(vlSelf->SocTop__DOT__add_axi_b_id),12);
            tracep->chgCData(oldp+30,(vlSelf->SocTop__DOT__add_axi_b_valid),3);
            tracep->chgWData(oldp+31,(vlSelf->SocTop__DOT__add_axi_r_data),192);
            tracep->chgBit(oldp+37,(vlSelf->SocTop__DOT__tim_axi_b_valid));
            tracep->chgQData(oldp+38,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
            tracep->chgCData(oldp+40,(vlSelf->SocTop__DOT__prot_chose_write),3);
            tracep->chgCData(oldp+41,(vlSelf->SocTop__DOT__prot_chose_read),3);
            tracep->chgCData(oldp+42,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                >> 0xfU))),5);
            tracep->chgBit(oldp+43,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req));
            tracep->chgQData(oldp+44,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
            tracep->chgCData(oldp+46,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
            tracep->chgBit(oldp+47,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
            tracep->chgCData(oldp+48,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
            tracep->chgBit(oldp+49,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
            tracep->chgCData(oldp+50,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
            tracep->chgCData(oldp+51,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
            tracep->chgQData(oldp+52,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
            tracep->chgQData(oldp+54,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2),64);
            tracep->chgBit(oldp+56,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
            tracep->chgCData(oldp+57,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr),5);
            tracep->chgQData(oldp+58,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc),64);
            tracep->chgSData(oldp+60,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset),12);
            tracep->chgCData(oldp+61,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel),3);
            tracep->chgBit(oldp+62,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
            tracep->chgBit(oldp+63,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
            tracep->chgCData(oldp+64,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
            tracep->chgQData(oldp+65,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
            tracep->chgQData(oldp+67,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc),64);
            tracep->chgQData(oldp+69,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
            tracep->chgIData(oldp+71,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst),32);
            tracep->chgIData(oldp+72,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst),32);
            tracep->chgIData(oldp+73,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
            tracep->chgIData(oldp+74,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
            tracep->chgSData(oldp+75,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                       >> 0x14U)),12);
            tracep->chgSData(oldp+76,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
            tracep->chgCData(oldp+77,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
            tracep->chgBit(oldp+78,((IData)((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->SocTop__DOT__i_cache_inst_data)))));
            tracep->chgBit(oldp+79,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
            tracep->chgBit(oldp+80,((IData)((0x63U 
                                             == (0x7fU 
                                                 & vlSelf->SocTop__DOT__i_cache_inst_data)))));
            tracep->chgQData(oldp+81,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1),64);
            tracep->chgQData(oldp+83,(((IData)((0x6fU 
                                                == 
                                                (0x7fU 
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
                                        : ((IData)(
                                                   (0x63U 
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
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                                      >> 0x14U))))
                                                : 4ULL)))),64);
            tracep->chgQData(oldp+85,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
            tracep->chgBit(oldp+87,((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))));
            tracep->chgCData(oldp+88,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
            tracep->chgBit(oldp+89,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
            tracep->chgBit(oldp+90,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
            tracep->chgBit(oldp+91,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
            tracep->chgBit(oldp+92,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
            tracep->chgBit(oldp+93,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
            tracep->chgBit(oldp+94,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
            tracep->chgBit(oldp+95,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
            tracep->chgBit(oldp+96,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
            tracep->chgBit(oldp+97,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
            tracep->chgBit(oldp+98,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
            tracep->chgBit(oldp+99,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
            tracep->chgBit(oldp+100,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
            tracep->chgBit(oldp+101,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
            tracep->chgBit(oldp+102,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
            tracep->chgBit(oldp+103,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
            tracep->chgBit(oldp+104,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
            tracep->chgBit(oldp+105,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
            tracep->chgBit(oldp+106,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
            tracep->chgBit(oldp+107,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
            tracep->chgBit(oldp+108,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
            tracep->chgBit(oldp+109,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
            tracep->chgBit(oldp+110,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
            tracep->chgBit(oldp+111,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
            tracep->chgBit(oldp+112,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
            tracep->chgBit(oldp+113,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
            tracep->chgBit(oldp+114,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
            tracep->chgBit(oldp+115,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
            tracep->chgBit(oldp+116,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
            tracep->chgBit(oldp+117,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
            tracep->chgBit(oldp+118,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
            tracep->chgBit(oldp+119,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
            tracep->chgBit(oldp+120,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
            tracep->chgBit(oldp+121,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
            tracep->chgBit(oldp+122,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                            >> 3U))));
            tracep->chgQData(oldp+123,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
            tracep->chgCData(oldp+125,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
            tracep->chgSData(oldp+126,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
            tracep->chgIData(oldp+127,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
            tracep->chgQData(oldp+128,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
            tracep->chgCData(oldp+130,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
            tracep->chgCData(oldp+131,(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst),6);
            tracep->chgBit(oldp+132,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena1));
            tracep->chgBit(oldp+133,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena2));
            tracep->chgCData(oldp+134,(vlSelf->SocTop__DOT__d_cache13__DOT__count_addr),6);
            tracep->chgBit(oldp+135,(vlSelf->SocTop__DOT__d_cache13__DOT__wirte_chose1));
            tracep->chgBit(oldp+136,(vlSelf->SocTop__DOT__d_cache13__DOT__wirte_chose2));
            tracep->chgCData(oldp+137,(vlSelf->SocTop__DOT__d_cache13__DOT__state_store),6);
            tracep->chgQData(oldp+138,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U)),55);
            tracep->chgCData(oldp+140,(vlSelf->SocTop__DOT__d_cache13__DOT__state_load),6);
            tracep->chgCData(oldp+141,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 3U)))),6);
            tracep->chgQData(oldp+142,((0x80000000000000ULL 
                                        | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 9U))),56);
            tracep->chgBit(oldp+144,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena1));
            tracep->chgBit(oldp+145,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena2));
            tracep->chgCData(oldp+146,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                         >> 3U)))),6);
            tracep->chgQData(oldp+147,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data1),64);
            tracep->chgCData(oldp+149,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1),8);
            tracep->chgQData(oldp+150,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data2),64);
            tracep->chgCData(oldp+152,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2),8);
            tracep->chgCData(oldp+153,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex),2);
            tracep->chgBit(oldp+154,(((IData)(vlSelf->SocTop__DOT__i_cache_read_ena) 
                                      & (IData)(vlSelf->SocTop__DOT__d_cache_read_ena))));
            tracep->chgBit(oldp+155,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid));
            tracep->chgBit(oldp+156,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid));
            tracep->chgCData(oldp+157,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt),2);
            tracep->chgCData(oldp+158,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt),2);
            tracep->chgQData(oldp+159,(vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l),64);
            tracep->chgQData(oldp+161,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h),64);
            tracep->chgCData(oldp+163,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgCData(oldp+164,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt))
                                         ? (0xfU & 
                                            ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                             >> 4U))
                                         : 0U)),4);
            tracep->chgBit(oldp+165,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req))));
            tracep->chgQData(oldp+166,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
            tracep->chgBit(oldp+168,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+169,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+170,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+171,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+172,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+173,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+174,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+175,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+176,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+177,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+178,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+179,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+180,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+181,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+182,((1U & (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+183,((1U & (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+184,(((IData)(((0x80U 
                                                == 
                                                (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                      & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+185,(((IData)(((0x80U 
                                                == 
                                                (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                      & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+186,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
            tracep->chgBit(oldp+187,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
            tracep->chgBit(oldp+188,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
            tracep->chgQData(oldp+189,(((((- (QData)((IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
            tracep->chgBit(oldp+191,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                             & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                            & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                   == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
            tracep->chgQData(oldp+192,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
            tracep->chgBit(oldp+194,(((IData)(vlSelf->SocTop__DOT__t_axi_aw_valid) 
                                      & (IData)(vlSelf->SocTop__DOT__t_axi_aw_ready))));
            tracep->chgBit(oldp+195,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid) 
                                      & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
            tracep->chgBit(oldp+196,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                      & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
            tracep->chgBit(oldp+197,(((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 1U))));
            tracep->chgQData(oldp+198,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                          & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                         & (0x2004000ULL 
                                            == (((QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                         ? vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l
                                         : ((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                              & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                             & (0x200bff8ULL 
                                                == 
                                                (((QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                             ? vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h
                                             : 0ULL))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+200,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_data_outp),64);
            tracep->chgIData(oldp+202,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt),32);
            tracep->chgBit(oldp+203,(vlSelf->SocTop__DOT__t_axi_aw_ready));
            tracep->chgCData(oldp+204,(vlSelf->SocTop__DOT__t_axi_w_strb),8);
            tracep->chgBit(oldp+205,(vlSelf->SocTop__DOT__t_axi_w_valid));
            tracep->chgBit(oldp+206,(vlSelf->SocTop__DOT__t_axi_w_ready));
            tracep->chgCData(oldp+207,(vlSelf->SocTop__DOT__t_axi_b_id),4);
            tracep->chgCData(oldp+208,(vlSelf->SocTop__DOT__t_axi_b_resp),2);
            tracep->chgBit(oldp+209,(vlSelf->SocTop__DOT__t_axi_b_valid));
            tracep->chgBit(oldp+210,(vlSelf->SocTop__DOT__t_axi_ar_ready));
            tracep->chgQData(oldp+211,(vlSelf->SocTop__DOT__t_axi_r_data),64);
            tracep->chgBit(oldp+213,(vlSelf->SocTop__DOT__t_axi_r_valid));
            tracep->chgSData(oldp+214,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
            tracep->chgWData(oldp+215,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
            tracep->chgIData(oldp+221,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
            tracep->chgSData(oldp+222,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
            tracep->chgCData(oldp+223,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
            tracep->chgSData(oldp+224,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
            tracep->chgSData(oldp+225,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
            tracep->chgSData(oldp+226,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
            tracep->chgCData(oldp+227,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
            tracep->chgCData(oldp+228,(vlSelf->SocTop__DOT__add_axi_aw_ready),3);
            tracep->chgWData(oldp+229,(vlSelf->SocTop__DOT__add_axi_w_data),192);
            tracep->chgIData(oldp+235,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
            tracep->chgCData(oldp+236,(vlSelf->SocTop__DOT__add_axi_w_last),3);
            tracep->chgCData(oldp+237,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
            tracep->chgCData(oldp+238,(vlSelf->SocTop__DOT__add_axi_w_ready),3);
            tracep->chgCData(oldp+239,(vlSelf->SocTop__DOT__add_axi_b_ready),3);
            tracep->chgSData(oldp+240,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
            tracep->chgWData(oldp+241,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
            tracep->chgIData(oldp+247,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
            tracep->chgSData(oldp+248,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
            tracep->chgCData(oldp+249,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
            tracep->chgSData(oldp+250,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
            tracep->chgSData(oldp+251,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
            tracep->chgSData(oldp+252,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
            tracep->chgCData(oldp+253,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
            tracep->chgCData(oldp+254,(vlSelf->SocTop__DOT__add_axi_ar_ready),3);
            tracep->chgCData(oldp+255,(vlSelf->SocTop__DOT__add_axi_r_valid),3);
            tracep->chgCData(oldp+256,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
            tracep->chgCData(oldp+257,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                >> 8U))),4);
            tracep->chgQData(oldp+258,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
            tracep->chgCData(oldp+260,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+261,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+262,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                              >> 4U))),2);
            tracep->chgCData(oldp+263,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                                >> 8U))),4);
            tracep->chgCData(oldp+264,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+265,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                                >> 8U))),4);
            tracep->chgBit(oldp+266,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
            tracep->chgBit(oldp+267,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                            >> 2U))));
            tracep->chgQData(oldp+268,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
            tracep->chgCData(oldp+270,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                 >> 0x10U))),8);
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                            >> 2U))));
            tracep->chgBit(oldp+272,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                            >> 2U))));
            tracep->chgBit(oldp+273,(vlSelf->SocTop__DOT__soc_axi_w_ready));
            tracep->chgBit(oldp+274,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
            tracep->chgBit(oldp+275,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                            >> 2U))));
            tracep->chgCData(oldp+276,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                >> 8U))),4);
            tracep->chgQData(oldp+277,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
            tracep->chgCData(oldp+279,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+280,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+281,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                              >> 4U))),2);
            tracep->chgCData(oldp+282,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                                >> 8U))),4);
            tracep->chgCData(oldp+283,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+284,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                                >> 8U))),4);
            tracep->chgBit(oldp+285,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                            >> 2U))));
            tracep->chgBit(oldp+286,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
            tracep->chgCData(oldp+287,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                         ? (0xfU & 
                                            ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 8U))
                                         : 0U)),4);
            tracep->chgBit(oldp+288,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
            tracep->chgBit(oldp+289,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
            tracep->chgBit(oldp+290,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                            >> 2U))));
            tracep->chgCData(oldp+291,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                >> 4U))),4);
            tracep->chgQData(oldp+292,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))),64);
            tracep->chgCData(oldp+294,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+295,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+296,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+297,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+298,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+299,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                                >> 4U))),4);
            tracep->chgBit(oldp+300,(vlSelf->SocTop__DOT__tim_axi_aw_ready));
            tracep->chgBit(oldp+301,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                            >> 1U))));
            tracep->chgQData(oldp+302,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_w_data[2U])))),64);
            tracep->chgCData(oldp+304,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                 >> 8U))),8);
            tracep->chgBit(oldp+305,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                            >> 1U))));
            tracep->chgBit(oldp+306,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+307,(vlSelf->SocTop__DOT__tim_axi_w_ready));
            tracep->chgBit(oldp+308,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                            >> 1U))));
            tracep->chgCData(oldp+309,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                >> 4U))),4);
            tracep->chgQData(oldp+310,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
            tracep->chgCData(oldp+312,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+313,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+314,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+315,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+316,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+317,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                                >> 4U))),4);
            tracep->chgBit(oldp+318,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+319,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
            tracep->chgCData(oldp+320,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                         ? (0xfU & 
                                            ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))
                                         : 0U)),4);
            tracep->chgBit(oldp+321,(vlSelf->SocTop__DOT__tim_axi_r_last));
            tracep->chgBit(oldp+322,((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))));
            tracep->chgBit(oldp+323,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                            >> 1U))));
            tracep->chgCData(oldp+324,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
            tracep->chgQData(oldp+325,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
            tracep->chgCData(oldp+327,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
            tracep->chgCData(oldp+328,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
            tracep->chgCData(oldp+329,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
            tracep->chgCData(oldp+330,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
            tracep->chgCData(oldp+331,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
            tracep->chgCData(oldp+332,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
            tracep->chgBit(oldp+333,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
            tracep->chgQData(oldp+334,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
            tracep->chgCData(oldp+336,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
            tracep->chgBit(oldp+337,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
            tracep->chgBit(oldp+338,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
            tracep->chgBit(oldp+339,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
            tracep->chgCData(oldp+340,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
            tracep->chgQData(oldp+341,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
            tracep->chgCData(oldp+343,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
            tracep->chgCData(oldp+344,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
            tracep->chgCData(oldp+345,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
            tracep->chgCData(oldp+346,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
            tracep->chgCData(oldp+347,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
            tracep->chgCData(oldp+348,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
            tracep->chgBit(oldp+349,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
            tracep->chgBit(oldp+350,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
            tracep->chgBit(oldp+351,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                      & (0U == (0xfU 
                                                & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                   >> 8U))))));
            tracep->chgBit(oldp+352,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                      & (1U == (0xfU 
                                                & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                   >> 8U))))));
            tracep->chgQData(oldp+353,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                         ? vlSelf->SocTop__DOT__axi_mnq4__DOT__read_addr_reg
                                         : 0ULL)),64);
            tracep->chgQData(oldp+355,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                         ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                         : 0ULL)),64);
            tracep->chgQData(oldp+357,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                         ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                         : 0ULL)),64);
            tracep->chgQData(oldp+359,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
            tracep->chgIData(oldp+361,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
            tracep->chgBit(oldp+362,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
            tracep->chgCData(oldp+363,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
            tracep->chgBit(oldp+364,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
            tracep->chgCData(oldp+365,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
            tracep->chgCData(oldp+366,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
            tracep->chgQData(oldp+367,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr),64);
            tracep->chgQData(oldp+369,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                             ? (4ULL 
                                                + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                             : 0ULL))),64);
            tracep->chgCData(oldp+371,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
            tracep->chgBit(oldp+372,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
            tracep->chgCData(oldp+373,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
            tracep->chgBit(oldp+374,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
            tracep->chgQData(oldp+375,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
            tracep->chgQData(oldp+377,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
            tracep->chgCData(oldp+379,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
            tracep->chgCData(oldp+380,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
            tracep->chgQData(oldp+381,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+383,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
            tracep->chgBit(oldp+385,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
            tracep->chgSData(oldp+386,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
            tracep->chgCData(oldp+387,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
            tracep->chgQData(oldp+388,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
            tracep->chgCData(oldp+390,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
            tracep->chgQData(oldp+391,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
            tracep->chgQData(oldp+393,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
            tracep->chgIData(oldp+395,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
            tracep->chgIData(oldp+396,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
            tracep->chgCData(oldp+397,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
            tracep->chgCData(oldp+398,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+399,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+400,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+401,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+402,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+403,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+404,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                            >> 7U)))),12);
            tracep->chgQData(oldp+405,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
            tracep->chgQData(oldp+407,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+409,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+411,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+413,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
            tracep->chgQData(oldp+414,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
            tracep->chgIData(oldp+416,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+417,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
            tracep->chgIData(oldp+419,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+420,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
            tracep->chgIData(oldp+422,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+423,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
            tracep->chgIData(oldp+425,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+426,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+428,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
            tracep->chgBit(oldp+430,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
            tracep->chgBit(oldp+431,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
            tracep->chgSData(oldp+432,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
            tracep->chgQData(oldp+433,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
            tracep->chgBit(oldp+435,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
            tracep->chgBit(oldp+436,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
            tracep->chgBit(oldp+437,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
            tracep->chgBit(oldp+438,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
            tracep->chgBit(oldp+439,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
            tracep->chgQData(oldp+440,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
            tracep->chgQData(oldp+442,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
            tracep->chgQData(oldp+444,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                        | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+446,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                        & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
            tracep->chgBit(oldp+448,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+449,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
            tracep->chgBit(oldp+450,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
            tracep->chgQData(oldp+451,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
            tracep->chgBit(oldp+453,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+454,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+455,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
            tracep->chgBit(oldp+456,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
            tracep->chgBit(oldp+457,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                                | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
            tracep->chgBit(oldp+458,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
            tracep->chgBit(oldp+459,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                                | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                            & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                                ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                                : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
            tracep->chgBit(oldp+460,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
            tracep->chgCData(oldp+461,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
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
            tracep->chgCData(oldp+462,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
            tracep->chgCData(oldp+463,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
            tracep->chgBit(oldp+464,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
            tracep->chgQData(oldp+465,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
            tracep->chgBit(oldp+467,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+468,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgBit(oldp+469,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+470,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
            tracep->chgQData(oldp+472,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+474,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+475,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
            tracep->chgBit(oldp+476,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+477,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
            tracep->chgBit(oldp+479,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+480,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+481,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
            tracep->chgBit(oldp+482,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+483,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                             ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
            tracep->chgQData(oldp+485,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
            tracep->chgBit(oldp+487,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+488,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+489,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgBit(oldp+490,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
            tracep->chgQData(oldp+491,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+493,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+494,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+495,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
            tracep->chgQData(oldp+496,((QData)((IData)(
                                                       ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                        << 7U)))),64);
            tracep->chgBit(oldp+498,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+499,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+500,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+501,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
            tracep->chgCData(oldp+503,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
            tracep->chgCData(oldp+504,((3U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+505,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                    >> 2U)))));
            tracep->chgQData(oldp+506,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
            tracep->chgIData(oldp+508,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
            tracep->chgQData(oldp+509,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
            tracep->chgBit(oldp+511,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
            tracep->chgBit(oldp+512,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
            tracep->chgQData(oldp+513,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
            tracep->chgQData(oldp+515,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
            tracep->chgQData(oldp+517,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
            tracep->chgQData(oldp+519,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
            tracep->chgQData(oldp+521,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
            tracep->chgQData(oldp+523,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
            tracep->chgQData(oldp+525,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
            tracep->chgQData(oldp+527,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
            tracep->chgQData(oldp+529,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
            tracep->chgQData(oldp+531,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
            tracep->chgQData(oldp+533,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
            tracep->chgQData(oldp+535,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
            tracep->chgQData(oldp+537,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
            tracep->chgQData(oldp+539,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
            tracep->chgQData(oldp+541,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
            tracep->chgQData(oldp+543,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
            tracep->chgQData(oldp+545,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
            tracep->chgQData(oldp+547,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
            tracep->chgQData(oldp+549,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
            tracep->chgQData(oldp+551,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
            tracep->chgQData(oldp+553,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
            tracep->chgQData(oldp+555,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
            tracep->chgQData(oldp+557,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
            tracep->chgQData(oldp+559,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
            tracep->chgQData(oldp+561,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
            tracep->chgQData(oldp+563,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
            tracep->chgQData(oldp+565,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
            tracep->chgQData(oldp+567,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
            tracep->chgQData(oldp+569,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
            tracep->chgQData(oldp+571,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
            tracep->chgQData(oldp+573,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
            tracep->chgQData(oldp+575,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
            tracep->chgQData(oldp+577,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
            tracep->chgIData(oldp+579,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
            tracep->chgQData(oldp+580,(vlSelf->SocTop__DOT__i_cache12__DOT__addr_lock_reg),64);
            tracep->chgIData(oldp+582,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data),32);
            tracep->chgIData(oldp+583,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data),32);
            tracep->chgIData(oldp+584,(vlSelf->SocTop__DOT__i_cache12__DOT__i),32);
            tracep->chgIData(oldp+585,(vlSelf->SocTop__DOT__d_cache13__DOT__i),32);
            tracep->chgQData(oldp+586,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data),64);
            tracep->chgQData(oldp+588,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data),64);
            tracep->chgBit(oldp+590,(((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
                                      & (IData)(vlSelf->SocTop__DOT__t_axi_w_ready))));
            tracep->chgBit(oldp+591,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
            tracep->chgBit(oldp+592,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand) 
                                      & (0U == (IData)(vlSelf->SocTop__DOT__t_axi_b_resp)))));
            tracep->chgCData(oldp+593,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state),2);
            tracep->chgCData(oldp+594,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state),2);
            tracep->chgCData(oldp+595,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state),2);
            tracep->chgBit(oldp+596,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_okreg));
            tracep->chgBit(oldp+597,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                       >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
            tracep->chgBit(oldp+598,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                       >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
            tracep->chgBit(oldp+599,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 2U))));
            tracep->chgCData(oldp+600,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
            tracep->chgCData(oldp+601,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
            tracep->chgBit(oldp+602,((((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
                                         & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                            >> 2U)) 
                                        & (0U == (0xffU 
                                                  & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                     >> 0x10U)))) 
                                       & (3U == (7U 
                                                 & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                                    >> 6U)))) 
                                      & (1U == (3U 
                                                & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                                   >> 4U))))));
            tracep->chgBit(oldp+603,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                       >> 2U) & (2U 
                                                 == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
            tracep->chgCData(oldp+604,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
            tracep->chgCData(oldp+605,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
            tracep->chgQData(oldp+606,(vlSelf->SocTop__DOT__axi_mnq4__DOT__read_addr_reg),64);
            tracep->chgQData(oldp+608,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
            tracep->chgQData(oldp+610,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
            tracep->chgBit(oldp+612,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+613,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                      & (0x200bff8ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+614,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                        & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgBit(oldp+615,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                        & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                      & (0x200bff8ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgBit(oldp+616,(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand));
            tracep->chgBit(oldp+617,(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand));
            tracep->chgBit(oldp+618,(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right));
            tracep->chgCData(oldp+619,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m),2);
            tracep->chgBit(oldp+620,((IData)(((((((0U 
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
            tracep->chgBit(oldp+621,(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand));
            tracep->chgBit(oldp+622,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 1U))));
            tracep->chgCData(oldp+623,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r),2);
            tracep->chgCData(oldp+624,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+625,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok));
            tracep->chgBit(oldp+626,(vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok));
            tracep->chgBit(oldp+627,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1));
            tracep->chgBit(oldp+628,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2));
            tracep->chgBit(oldp+629,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache));
            tracep->chgBit(oldp+630,(vlSelf->SocTop__DOT__d_cache13__DOT__write_ok));
            tracep->chgBit(oldp+631,(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache));
            tracep->chgBit(oldp+632,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1));
            tracep->chgBit(oldp+633,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2));
            tracep->chgBit(oldp+634,(vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok));
            tracep->chgBit(oldp+635,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1));
            tracep->chgBit(oldp+636,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2));
            tracep->chgBit(oldp+637,(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgQData(oldp+638,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
            tracep->chgBit(oldp+640,(vlSelf->SocTop__DOT__arbitrate_d_ok));
            tracep->chgBit(oldp+641,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg));
            tracep->chgCData(oldp+642,(vlSelf->SocTop__DOT__t_axi_r_id),4);
            tracep->chgCData(oldp+643,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
            tracep->chgBit(oldp+644,(vlSelf->SocTop__DOT__t_axi_r_last));
            tracep->chgSData(oldp+645,(vlSelf->SocTop__DOT__add_axi_r_id),12);
            tracep->chgCData(oldp+646,(vlSelf->SocTop__DOT__add_axi_r_last),3);
            tracep->chgQData(oldp+647,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U)),55);
            tracep->chgBit(oldp+649,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose1));
            tracep->chgBit(oldp+650,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose2));
            tracep->chgCData(oldp+651,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                         >> 3U)))),6);
            tracep->chgQData(oldp+652,((0x80000000000000ULL 
                                        | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                           >> 9U))),56);
            tracep->chgQData(oldp+654,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data),55);
            tracep->chgBit(oldp+656,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild));
            tracep->chgQData(oldp+657,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data),55);
            tracep->chgBit(oldp+659,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild));
            tracep->chgBit(oldp+660,(vlSelf->SocTop__DOT__d_cache13__DOT__wbck_ok));
            tracep->chgBit(oldp+661,(vlSelf->SocTop__DOT__d_cache13__DOT__load_bc_ok));
            tracep->chgQData(oldp+662,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data),55);
            tracep->chgBit(oldp+664,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild));
            tracep->chgQData(oldp+665,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data),55);
            tracep->chgBit(oldp+667,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild));
            tracep->chgBit(oldp+668,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand));
            tracep->chgBit(oldp+669,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand));
        }
        tracep->chgBit(oldp+670,(vlSelf->clk));
        tracep->chgBit(oldp+671,(vlSelf->rst));
        tracep->chgBit(oldp+672,(vlSelf->out_read_ram_ena));
        tracep->chgBit(oldp+673,(vlSelf->out_read_inst_ena));
        tracep->chgQData(oldp+674,(vlSelf->out_addr_outp),64);
        tracep->chgIData(oldp+676,(vlSelf->in_inst_data_in),32);
        tracep->chgQData(oldp+677,(vlSelf->in_ram_data_in),64);
        tracep->chgBit(oldp+679,(vlSelf->out_write_ram_ena));
        tracep->chgQData(oldp+680,(vlSelf->out_write_ram_data),64);
        tracep->chgQData(oldp+682,(vlSelf->out_write_ram_addr),64);
        tracep->chgQData(oldp+684,(((IData)(vlSelf->SocTop__DOT__arbitrate_ti_sign)
                                     ? vlSelf->SocTop__DOT__i_cache12__DOT__addr_lock_reg
                                     : vlSelf->SocTop__DOT__rvcpu_inst_addr)),64);
        tracep->chgBit(oldp+686,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                   & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                  | ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache) 
                                     | (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                         & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) 
                                        | (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache))))));
        tracep->chgQData(oldp+687,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                     & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                     ? ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                         [(0x3fU & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                            >> 3U)))] 
                                         & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 3U)))] 
                                            >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 3U)))]))
                                         ? vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data
                                         : vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data)
                                     : ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                         [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                         & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                            [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                            >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                            [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr]))
                                         ? vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data
                                         : 0ULL))),64);
        tracep->chgBit(oldp+689,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                   & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                  | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                     [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                     & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                        [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                        >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                        [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr])))));
        tracep->chgQData(oldp+690,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                     ? ((0U == (0xfU 
                                                & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                   >> 8U)))
                                         ? vlSelf->in_ram_data_in
                                         : (QData)((IData)(vlSelf->in_inst_data_in)))
                                     : 0ULL)),64);
        tracep->chgQData(oldp+692,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->chgBit(oldp+694,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->chgQData(oldp+695,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                ? (0xfffffffffffffffeULL 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->chgBit(oldp+697,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & ((((IData)(vlSelf->rst)
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
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req)))))));
        tracep->chgQData(oldp+698,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                     ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                     : 0ULL)),64);
        tracep->chgQData(oldp+700,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                     ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                     : 0ULL)),64);
        tracep->chgBit(oldp+702,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu_we)) 
                                     & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                            & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                           | ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache) 
                                              | (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                  & (4U 
                                                     == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) 
                                                 | (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache)))))))));
        tracep->chgBit(oldp+703,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                  & (2U 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->chgBit(oldp+704,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                  & (2U 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->chgQData(oldp+705,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+707,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+709,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 2U)))
                                                ? ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                   << 0x20U)
                                                : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->chgCData(oldp+711,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+712,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+713,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? 0xf0U
                                              : 0xfU))),8);
        tracep->chgBit(oldp+714,((1U & ((~ (IData)(vlSelf->rst)) 
                                        & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                              >> 1U))))));
        tracep->chgIData(oldp+715,(((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                                      & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg)) 
                                     & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose1))
                                     ? vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt
                                     : 0U)),32);
        tracep->chgIData(oldp+716,(((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                                      & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg)) 
                                     & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose2))
                                     ? vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt
                                     : 0U)),32);
        tracep->chgBit(oldp+717,(vlSelf->SocTop__DOT__d_cache13__DOT__store_ok));
        tracep->chgBit(oldp+718,(vlSelf->SocTop__DOT__d_cache13__DOT__load_ok));
        tracep->chgBit(oldp+719,((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                  [(0x3fU & (IData)(
                                                    (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                     >> 3U)))] 
                                  & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                        >> 3U)))] 
                                     >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                        >> 3U)))]))));
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
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    }
}
