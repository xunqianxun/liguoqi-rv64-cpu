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
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->SocTop__DOT__rvcpu_data_addr),64);
            tracep->chgCData(oldp+2,(vlSelf->SocTop__DOT__rvcpu_wmask),8);
            tracep->chgQData(oldp+3,(vlSelf->SocTop__DOT__rvcpu_data_o),64);
            tracep->chgBit(oldp+5,(vlSelf->SocTop__DOT__rvcpu_we));
            tracep->chgBit(oldp+6,(vlSelf->SocTop__DOT__rvcpu_re));
            tracep->chgIData(oldp+7,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
            tracep->chgQData(oldp+8,(vlSelf->SocTop__DOT__d_cache_data_out),64);
            tracep->chgBit(oldp+10,(vlSelf->SocTop__DOT__d_cache_read_ena));
            tracep->chgBit(oldp+11,(vlSelf->SocTop__DOT__d_cache_write_ena));
            tracep->chgQData(oldp+12,(vlSelf->SocTop__DOT__arbitrate_d_data),64);
            tracep->chgBit(oldp+14,(vlSelf->SocTop__DOT__arbitrate_d_ok));
            tracep->chgIData(oldp+15,((IData)(vlSelf->SocTop__DOT____Vcellout__arbitrate4__i_cache_data_o)),32);
            tracep->chgBit(oldp+16,(vlSelf->SocTop__DOT__arbitrate_i_ok));
            tracep->chgQData(oldp+17,(vlSelf->SocTop__DOT__t_axi_aw_addr),64);
            tracep->chgBit(oldp+19,(vlSelf->SocTop__DOT__t_axi_w_valid));
            tracep->chgCData(oldp+20,((((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__aw_shankhand) 
                                        & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__w_shankhand))
                                        ? 0xffU : 0U)),8);
            tracep->chgBit(oldp+21,((3U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state))));
            tracep->chgBit(oldp+22,(vlSelf->SocTop__DOT__t_axi_ar_valid));
            tracep->chgBit(oldp+23,((1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state))));
            tracep->chgBit(oldp+24,((1U & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                              >> 1U)))));
            tracep->chgCData(oldp+25,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                >> 0xfU))),5);
            tracep->chgBit(oldp+26,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req));
            tracep->chgQData(oldp+27,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
            tracep->chgCData(oldp+29,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
            tracep->chgBit(oldp+30,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
            tracep->chgCData(oldp+31,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
            tracep->chgBit(oldp+32,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
            tracep->chgCData(oldp+33,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
            tracep->chgCData(oldp+34,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
            tracep->chgQData(oldp+35,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
            tracep->chgQData(oldp+37,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2),64);
            tracep->chgBit(oldp+39,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
            tracep->chgCData(oldp+40,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr),5);
            tracep->chgQData(oldp+41,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc),64);
            tracep->chgSData(oldp+43,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset),12);
            tracep->chgCData(oldp+44,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel),3);
            tracep->chgBit(oldp+45,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
            tracep->chgBit(oldp+46,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
            tracep->chgCData(oldp+47,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
            tracep->chgQData(oldp+48,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
            tracep->chgQData(oldp+50,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc),64);
            tracep->chgQData(oldp+52,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
            tracep->chgIData(oldp+54,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst),32);
            tracep->chgIData(oldp+55,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst),32);
            tracep->chgIData(oldp+56,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
            tracep->chgIData(oldp+57,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
            tracep->chgSData(oldp+58,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                       >> 0x14U)),12);
            tracep->chgSData(oldp+59,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
            tracep->chgCData(oldp+60,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
            tracep->chgBit(oldp+61,((IData)((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->SocTop__DOT__i_cache_inst_data)))));
            tracep->chgBit(oldp+62,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
            tracep->chgBit(oldp+63,((IData)((0x63U 
                                             == (0x7fU 
                                                 & vlSelf->SocTop__DOT__i_cache_inst_data)))));
            tracep->chgQData(oldp+64,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1),64);
            tracep->chgQData(oldp+66,(((IData)((0x6fU 
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
            tracep->chgQData(oldp+68,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
            tracep->chgBit(oldp+70,((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))));
            tracep->chgCData(oldp+71,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
            tracep->chgBit(oldp+72,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
            tracep->chgBit(oldp+73,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
            tracep->chgBit(oldp+74,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
            tracep->chgBit(oldp+75,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
            tracep->chgBit(oldp+76,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
            tracep->chgBit(oldp+77,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
            tracep->chgBit(oldp+78,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
            tracep->chgBit(oldp+79,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
            tracep->chgBit(oldp+80,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
            tracep->chgBit(oldp+81,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
            tracep->chgBit(oldp+82,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
            tracep->chgBit(oldp+83,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
            tracep->chgBit(oldp+84,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
            tracep->chgBit(oldp+85,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
            tracep->chgBit(oldp+86,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
            tracep->chgBit(oldp+87,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
            tracep->chgBit(oldp+88,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
            tracep->chgBit(oldp+89,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
            tracep->chgBit(oldp+90,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
            tracep->chgBit(oldp+91,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
            tracep->chgBit(oldp+92,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
            tracep->chgBit(oldp+93,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
            tracep->chgBit(oldp+94,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
            tracep->chgBit(oldp+95,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
            tracep->chgBit(oldp+96,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
            tracep->chgBit(oldp+97,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
            tracep->chgBit(oldp+98,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
            tracep->chgBit(oldp+99,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
            tracep->chgBit(oldp+100,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
            tracep->chgBit(oldp+101,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
            tracep->chgBit(oldp+102,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
            tracep->chgBit(oldp+103,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
            tracep->chgBit(oldp+104,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
            tracep->chgBit(oldp+105,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                            >> 3U))));
            tracep->chgQData(oldp+106,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
            tracep->chgCData(oldp+108,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
            tracep->chgSData(oldp+109,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
            tracep->chgIData(oldp+110,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
            tracep->chgQData(oldp+111,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
            tracep->chgCData(oldp+113,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
            tracep->chgBit(oldp+114,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena1));
            tracep->chgIData(oldp+115,(vlSelf->SocTop__DOT__i_cache12__DOT__i_in_data1),32);
            tracep->chgCData(oldp+116,(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst),6);
            tracep->chgCData(oldp+117,(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt),6);
            tracep->chgCData(oldp+118,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 3U)))),6);
            tracep->chgQData(oldp+119,((0x80000000000000ULL 
                                        | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 9U))),56);
            tracep->chgBit(oldp+121,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena1));
            tracep->chgCData(oldp+122,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                         >> 3U)))),6);
            tracep->chgQData(oldp+123,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data1),64);
            tracep->chgCData(oldp+125,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1),8);
            tracep->chgQData(oldp+126,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data2),64);
            tracep->chgCData(oldp+128,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2),8);
            tracep->chgQData(oldp+129,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U)),55);
            tracep->chgCData(oldp+131,(vlSelf->SocTop__DOT__d_cache13__DOT__state_store),6);
            tracep->chgCData(oldp+132,(vlSelf->SocTop__DOT__d_cache13__DOT__state_load),6);
            tracep->chgCData(oldp+133,(vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt),6);
            tracep->chgQData(oldp+134,(vlSelf->SocTop__DOT____Vcellout__arbitrate4__i_cache_data_o),64);
            tracep->chgBit(oldp+136,(vlSelf->SocTop__DOT__arbitrate4__DOT__aw_shankhand));
            tracep->chgBit(oldp+137,(vlSelf->SocTop__DOT__arbitrate4__DOT__w_shankhand));
            tracep->chgBit(oldp+138,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
            tracep->chgCData(oldp+139,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state),2);
            tracep->chgCData(oldp+140,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex),2);
            tracep->chgCData(oldp+141,(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state),2);
            tracep->chgCData(oldp+142,(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state_nxt),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+143,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req))));
            tracep->chgQData(oldp+144,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
            tracep->chgBit(oldp+146,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+147,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+148,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+149,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+150,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+151,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+152,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+153,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+154,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+155,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+156,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+157,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+158,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+159,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+160,((1U & (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+161,((1U & (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+162,(((IData)(((0x80U 
                                                == 
                                                (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                      & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+163,(((IData)(((0x80U 
                                                == 
                                                (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                      & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+164,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
            tracep->chgBit(oldp+165,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
            tracep->chgBit(oldp+166,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
            tracep->chgQData(oldp+167,(((((- (QData)((IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
            tracep->chgBit(oldp+169,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                             & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                            & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                   == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
            tracep->chgQData(oldp+170,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+172,(((4U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))
                                       ? (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_o)
                                       : ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache) 
                                          & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_write)))));
            tracep->chgBit(oldp+173,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                       & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                       ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_finish_h)
                                       : (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                           & ((0x10U 
                                               == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                                              & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))
                                           ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem_l)
                                           : (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                               & (4U 
                                                  == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))
                                               ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__store_finish)
                                               : (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                   & ((0x10U 
                                                       == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                                                      & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) 
                                                  & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem)))))));
            tracep->chgQData(oldp+174,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                         & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                         ? vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb_l
                                         : (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                             & (0x20U 
                                                == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))
                                             ? vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb
                                             : 0ULL))),64);
            tracep->chgQData(oldp+176,((((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__aw_shankhand) 
                                         & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__w_shankhand))
                                         ? (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                             & (0x20U 
                                                == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                             ? vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb_l
                                             : (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                 & (0x20U 
                                                    == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))
                                                 ? vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb
                                                 : 0ULL))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+178,(((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena)
                                         ? 1U : ((IData)(vlSelf->SocTop__DOT__d_cache_read_ena)
                                                  ? 2U
                                                  : 0U))),4);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+179,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
            tracep->chgIData(oldp+181,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
            tracep->chgBit(oldp+182,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
            tracep->chgCData(oldp+183,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
            tracep->chgBit(oldp+184,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
            tracep->chgCData(oldp+185,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
            tracep->chgCData(oldp+186,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
            tracep->chgQData(oldp+187,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr),64);
            tracep->chgQData(oldp+189,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                             ? (4ULL 
                                                + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                             : 0ULL))),64);
            tracep->chgCData(oldp+191,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
            tracep->chgBit(oldp+192,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
            tracep->chgCData(oldp+193,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
            tracep->chgBit(oldp+194,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
            tracep->chgQData(oldp+195,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
            tracep->chgQData(oldp+197,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
            tracep->chgCData(oldp+199,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
            tracep->chgCData(oldp+200,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
            tracep->chgQData(oldp+201,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+203,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
            tracep->chgBit(oldp+205,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
            tracep->chgSData(oldp+206,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
            tracep->chgCData(oldp+207,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
            tracep->chgQData(oldp+208,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
            tracep->chgCData(oldp+210,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
            tracep->chgQData(oldp+211,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
            tracep->chgQData(oldp+213,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
            tracep->chgIData(oldp+215,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
            tracep->chgIData(oldp+216,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
            tracep->chgCData(oldp+217,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
            tracep->chgCData(oldp+218,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+219,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+220,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+221,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+222,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+223,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+224,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                            >> 7U)))),12);
            tracep->chgQData(oldp+225,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
            tracep->chgQData(oldp+227,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+229,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+233,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
            tracep->chgQData(oldp+234,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
            tracep->chgIData(oldp+236,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+237,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
            tracep->chgIData(oldp+239,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+240,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
            tracep->chgIData(oldp+242,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+243,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
            tracep->chgIData(oldp+245,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+246,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+248,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
            tracep->chgBit(oldp+250,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
            tracep->chgBit(oldp+251,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
            tracep->chgSData(oldp+252,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
            tracep->chgQData(oldp+253,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
            tracep->chgBit(oldp+255,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
            tracep->chgBit(oldp+256,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
            tracep->chgBit(oldp+257,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
            tracep->chgBit(oldp+258,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
            tracep->chgBit(oldp+259,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
            tracep->chgQData(oldp+260,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
            tracep->chgQData(oldp+262,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
            tracep->chgQData(oldp+264,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                        | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+266,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                        & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
            tracep->chgBit(oldp+268,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+269,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
            tracep->chgBit(oldp+270,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
            tracep->chgQData(oldp+271,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
            tracep->chgBit(oldp+273,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+274,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+275,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
            tracep->chgBit(oldp+276,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
            tracep->chgBit(oldp+277,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                                | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
            tracep->chgBit(oldp+278,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
            tracep->chgBit(oldp+279,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                                | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                            & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                                ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                                : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
            tracep->chgBit(oldp+280,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
            tracep->chgCData(oldp+281,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
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
            tracep->chgCData(oldp+282,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
            tracep->chgCData(oldp+283,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
            tracep->chgBit(oldp+284,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
            tracep->chgQData(oldp+285,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
            tracep->chgBit(oldp+287,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+288,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgBit(oldp+289,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+290,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
            tracep->chgQData(oldp+292,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+294,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+295,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
            tracep->chgBit(oldp+296,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+297,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
            tracep->chgBit(oldp+299,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+300,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+301,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
            tracep->chgBit(oldp+302,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+303,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                             ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
            tracep->chgQData(oldp+305,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
            tracep->chgBit(oldp+307,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+308,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+309,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgBit(oldp+310,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
            tracep->chgQData(oldp+311,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+313,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+314,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+315,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
            tracep->chgQData(oldp+316,((QData)((IData)(
                                                       ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                        << 7U)))),64);
            tracep->chgBit(oldp+318,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+319,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+320,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+321,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
            tracep->chgCData(oldp+323,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
            tracep->chgCData(oldp+324,((3U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+325,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                    >> 2U)))));
            tracep->chgQData(oldp+326,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
            tracep->chgIData(oldp+328,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
            tracep->chgQData(oldp+329,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
            tracep->chgBit(oldp+331,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
            tracep->chgBit(oldp+332,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
            tracep->chgQData(oldp+333,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
            tracep->chgQData(oldp+335,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
            tracep->chgQData(oldp+337,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
            tracep->chgQData(oldp+339,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
            tracep->chgQData(oldp+341,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
            tracep->chgQData(oldp+343,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
            tracep->chgQData(oldp+345,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
            tracep->chgQData(oldp+347,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
            tracep->chgQData(oldp+349,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
            tracep->chgQData(oldp+351,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
            tracep->chgQData(oldp+353,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
            tracep->chgQData(oldp+355,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
            tracep->chgQData(oldp+357,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
            tracep->chgQData(oldp+359,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
            tracep->chgQData(oldp+361,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
            tracep->chgQData(oldp+363,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
            tracep->chgQData(oldp+365,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
            tracep->chgQData(oldp+367,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
            tracep->chgQData(oldp+369,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
            tracep->chgQData(oldp+371,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
            tracep->chgQData(oldp+373,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
            tracep->chgQData(oldp+375,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
            tracep->chgQData(oldp+377,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
            tracep->chgQData(oldp+379,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
            tracep->chgQData(oldp+381,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
            tracep->chgQData(oldp+383,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
            tracep->chgQData(oldp+385,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
            tracep->chgQData(oldp+387,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
            tracep->chgQData(oldp+389,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
            tracep->chgQData(oldp+391,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
            tracep->chgQData(oldp+393,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
            tracep->chgQData(oldp+395,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
            tracep->chgQData(oldp+397,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
            tracep->chgIData(oldp+399,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
            tracep->chgQData(oldp+400,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data),55);
            tracep->chgBit(oldp+402,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild));
            tracep->chgQData(oldp+403,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data),55);
            tracep->chgBit(oldp+405,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild));
            tracep->chgIData(oldp+406,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data),32);
            tracep->chgIData(oldp+407,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data),32);
            tracep->chgIData(oldp+408,(vlSelf->SocTop__DOT__i_cache12__DOT__i),32);
            tracep->chgQData(oldp+409,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data),55);
            tracep->chgBit(oldp+411,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild));
            tracep->chgQData(oldp+412,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data),55);
            tracep->chgBit(oldp+414,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild));
            tracep->chgQData(oldp+415,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data),64);
            tracep->chgQData(oldp+417,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data),64);
            tracep->chgIData(oldp+419,(vlSelf->SocTop__DOT__d_cache13__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+420,(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena));
            tracep->chgCData(oldp+421,(((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena)
                                         ? 2U : 3U)),3);
            tracep->chgBit(oldp+422,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok));
            tracep->chgBit(oldp+423,(vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok));
            tracep->chgIData(oldp+424,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_data_o),32);
            tracep->chgBit(oldp+425,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_o));
            tracep->chgCData(oldp+426,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_count1),3);
            tracep->chgCData(oldp+427,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_count2),3);
            tracep->chgIData(oldp+428,(vlSelf->SocTop__DOT__i_cache12__DOT__data_inst),32);
            tracep->chgBit(oldp+429,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1));
            tracep->chgBit(oldp+430,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2));
            tracep->chgBit(oldp+431,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache));
            tracep->chgBit(oldp+432,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_write));
            tracep->chgBit(oldp+433,(vlSelf->SocTop__DOT__d_cache13__DOT__store_ok));
            tracep->chgBit(oldp+434,(vlSelf->SocTop__DOT__d_cache13__DOT__write_ok));
            tracep->chgBit(oldp+435,(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem));
            tracep->chgBit(oldp+436,(vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w));
            tracep->chgBit(oldp+437,(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache));
            tracep->chgQData(oldp+438,(vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data),64);
            tracep->chgBit(oldp+440,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1));
            tracep->chgBit(oldp+441,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2));
            tracep->chgCData(oldp+442,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_mask),8);
            tracep->chgBit(oldp+443,(vlSelf->SocTop__DOT__d_cache13__DOT__dirty_make));
            tracep->chgCData(oldp+444,(vlSelf->SocTop__DOT__d_cache13__DOT__count_write1),3);
            tracep->chgCData(oldp+445,(vlSelf->SocTop__DOT__d_cache13__DOT__count_write2),3);
            tracep->chgQData(oldp+446,(vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb),64);
            tracep->chgBit(oldp+448,(vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena));
            tracep->chgQData(oldp+449,(vlSelf->SocTop__DOT__d_cache13__DOT__out_addr_wb),64);
            tracep->chgCData(oldp+451,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_mask),8);
            tracep->chgCData(oldp+452,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_mask),8);
            tracep->chgQData(oldp+453,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_data),64);
            tracep->chgQData(oldp+455,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_data),64);
            tracep->chgBit(oldp+457,(vlSelf->SocTop__DOT__d_cache13__DOT__store_finish));
            tracep->chgBit(oldp+458,(vlSelf->SocTop__DOT__d_cache13__DOT__dirty_hit));
            tracep->chgCData(oldp+459,(vlSelf->SocTop__DOT__d_cache13__DOT__count_hit1),3);
            tracep->chgCData(oldp+460,(vlSelf->SocTop__DOT__d_cache13__DOT__count_hit2),3);
            tracep->chgBit(oldp+461,(vlSelf->SocTop__DOT__d_cache13__DOT__load_ok));
            tracep->chgBit(oldp+462,(vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok));
            tracep->chgQData(oldp+463,(vlSelf->SocTop__DOT__d_cache13__DOT__load_data_o),64);
            tracep->chgBit(oldp+465,(vlSelf->SocTop__DOT__d_cache13__DOT__load_finish_h));
            tracep->chgCData(oldp+466,(vlSelf->SocTop__DOT__d_cache13__DOT__load_hit_count1),3);
            tracep->chgCData(oldp+467,(vlSelf->SocTop__DOT__d_cache13__DOT__load_hit_count2),3);
            tracep->chgQData(oldp+468,(vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb_l),64);
            tracep->chgBit(oldp+470,(vlSelf->SocTop__DOT__d_cache13__DOT__outw_data_ena_l));
            tracep->chgBit(oldp+471,(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem_l));
            tracep->chgQData(oldp+472,(vlSelf->SocTop__DOT__d_cache13__DOT__data_load),64);
            tracep->chgBit(oldp+474,(vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w_l));
            tracep->chgCData(oldp+475,(vlSelf->SocTop__DOT__d_cache13__DOT__load_write_count1),3);
            tracep->chgCData(oldp+476,(vlSelf->SocTop__DOT__d_cache13__DOT__load_write_count2),3);
            tracep->chgBit(oldp+477,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1));
            tracep->chgBit(oldp+478,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2));
            tracep->chgQData(oldp+479,(vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data_l),64);
            tracep->chgBit(oldp+481,(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgQData(oldp+482,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
            tracep->chgCData(oldp+484,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                         >> 3U)))),6);
            tracep->chgQData(oldp+485,((0x80000000000000ULL 
                                        | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                           >> 9U))),56);
            tracep->chgQData(oldp+487,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U)),55);
        }
        tracep->chgBit(oldp+489,(vlSelf->clk));
        tracep->chgBit(oldp+490,(vlSelf->rst));
        tracep->chgCData(oldp+491,(vlSelf->out_axi_aw_id),4);
        tracep->chgQData(oldp+492,(vlSelf->out_axi_aw_addr),64);
        tracep->chgCData(oldp+494,(vlSelf->out_axi_aw_len),8);
        tracep->chgCData(oldp+495,(vlSelf->out_axi_aw_size),3);
        tracep->chgCData(oldp+496,(vlSelf->out_axi_aw_burst),2);
        tracep->chgCData(oldp+497,(vlSelf->out_axi_aw_cache),4);
        tracep->chgCData(oldp+498,(vlSelf->out_axi_aw_port),3);
        tracep->chgCData(oldp+499,(vlSelf->out_axi_aw_qos),4);
        tracep->chgBit(oldp+500,(vlSelf->out_axi_aw_valid));
        tracep->chgBit(oldp+501,(vlSelf->out_axi_aw_ready));
        tracep->chgQData(oldp+502,(vlSelf->out_axi_w_data),64);
        tracep->chgCData(oldp+504,(vlSelf->out_axi_w_strb),8);
        tracep->chgBit(oldp+505,(vlSelf->out_axi_w_last));
        tracep->chgBit(oldp+506,(vlSelf->out_axi_w_valid));
        tracep->chgBit(oldp+507,(vlSelf->out_axi_w_ready));
        tracep->chgCData(oldp+508,(vlSelf->out_axi_b_id),4);
        tracep->chgCData(oldp+509,(vlSelf->out_axi_b_resp),2);
        tracep->chgBit(oldp+510,(vlSelf->out_axi_b_valid));
        tracep->chgBit(oldp+511,(vlSelf->out_axi_b_ready));
        tracep->chgCData(oldp+512,(vlSelf->out_axi_ar_id),4);
        tracep->chgQData(oldp+513,(vlSelf->out_axi_ar_addr),64);
        tracep->chgCData(oldp+515,(vlSelf->out_axi_ar_len),8);
        tracep->chgCData(oldp+516,(vlSelf->out_axi_ar_size),3);
        tracep->chgCData(oldp+517,(vlSelf->out_axi_ar_burst),2);
        tracep->chgCData(oldp+518,(vlSelf->out_axi_ar_cache),4);
        tracep->chgCData(oldp+519,(vlSelf->out_axi_ar_prot),3);
        tracep->chgCData(oldp+520,(vlSelf->out_axi_ar_qos),4);
        tracep->chgBit(oldp+521,(vlSelf->out_axi_ar_valid));
        tracep->chgBit(oldp+522,(vlSelf->out_axi_ar_ready));
        tracep->chgCData(oldp+523,(vlSelf->out_axi_r_id),4);
        tracep->chgQData(oldp+524,(vlSelf->out_axi_r_data),64);
        tracep->chgCData(oldp+526,(vlSelf->out_axi_r_resp),2);
        tracep->chgBit(oldp+527,(vlSelf->out_axi_r_last));
        tracep->chgBit(oldp+528,(vlSelf->out_axi_r_valid));
        tracep->chgBit(oldp+529,(vlSelf->out_axi_r_ready));
        tracep->chgQData(oldp+530,(((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena)
                                     ? vlSelf->SocTop__DOT__rvcpu_data_addr
                                     : ((IData)(vlSelf->SocTop__DOT__d_cache_read_ena)
                                         ? vlSelf->SocTop__DOT__rvcpu_inst_addr
                                         : 0ULL))),64);
        tracep->chgQData(oldp+532,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->chgBit(oldp+534,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->chgQData(oldp+535,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                ? (0xfffffffffffffffeULL 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->chgBit(oldp+537,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+538,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                     ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                     : 0ULL)),64);
        tracep->chgQData(oldp+540,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                     ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                     : 0ULL)),64);
        tracep->chgBit(oldp+542,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu_we)) 
                                     & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                            & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                            ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_finish_h)
                                            : (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                                & ((0x10U 
                                                    == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                                                   & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))
                                                ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem_l)
                                                : (
                                                   ((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                    & (4U 
                                                       == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))
                                                    ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__store_finish)
                                                    : 
                                                   (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                     & ((0x10U 
                                                         == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                                                        & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) 
                                                    & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem))))))))));
        tracep->chgBit(oldp+543,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                  & (2U 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->chgBit(oldp+544,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                  & (2U 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->chgQData(oldp+545,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+547,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+549,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 2U)))
                                                ? ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                   << 0x20U)
                                                : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->chgCData(oldp+551,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+552,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+553,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? 0xf0U
                                              : 0xfU))),8);
        tracep->chgBit(oldp+554,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand) 
                                  & (0U == (IData)(vlSelf->out_axi_b_resp)))));
        tracep->chgBit(oldp+555,(((IData)(vlSelf->SocTop__DOT__t_axi_ar_valid) 
                                  & (IData)(vlSelf->out_axi_ar_ready))));
        tracep->chgBit(oldp+556,(((IData)(vlSelf->out_axi_r_valid) 
                                  & (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state)))));
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
