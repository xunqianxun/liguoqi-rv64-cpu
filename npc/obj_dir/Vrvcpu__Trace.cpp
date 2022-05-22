// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvcpu__Syms.h"


void Vrvcpu___024root__traceChgSub0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep);

void Vrvcpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vrvcpu___024root* const __restrict vlSelf = static_cast<Vrvcpu___024root*>(voidSelf);
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vrvcpu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vrvcpu___024root__traceChgSub0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->rvcpu__DOT__if_stall_req));
            tracep->chgQData(oldp+1,(vlSelf->rvcpu__DOT__ex_id_rd_data),64);
            tracep->chgCData(oldp+3,(vlSelf->rvcpu__DOT__id_reg_addr1),5);
            tracep->chgBit(oldp+4,(vlSelf->rvcpu__DOT__id_reg_ena1));
            tracep->chgCData(oldp+5,(vlSelf->rvcpu__DOT__id_reg_addr2),5);
            tracep->chgBit(oldp+6,(vlSelf->rvcpu__DOT__id_reg_ena2));
            tracep->chgCData(oldp+7,(vlSelf->rvcpu__DOT__id_ex_type),8);
            tracep->chgCData(oldp+8,(vlSelf->rvcpu__DOT__id_ex_opcode),8);
            tracep->chgQData(oldp+9,(vlSelf->rvcpu__DOT__id_ex_op),64);
            tracep->chgQData(oldp+11,(vlSelf->rvcpu__DOT__id_ex_op2),64);
            tracep->chgBit(oldp+13,(vlSelf->rvcpu__DOT__id_ex_rd_ena));
            tracep->chgCData(oldp+14,(vlSelf->rvcpu__DOT__id_ex_rd_addr),5);
            tracep->chgQData(oldp+15,(vlSelf->rvcpu__DOT__id_ex_pc),64);
            tracep->chgSData(oldp+17,(vlSelf->rvcpu__DOT__id_ex_s_offset),12);
            tracep->chgCData(oldp+18,(vlSelf->rvcpu__DOT__id_ex_memsel),3);
            tracep->chgBit(oldp+19,(vlSelf->rvcpu__DOT__id_pip_jalrena));
            tracep->chgBit(oldp+20,(vlSelf->rvcpu__DOT__id_if_flush));
            tracep->chgCData(oldp+21,(vlSelf->rvcpu__DOT__stall_ctrl),5);
            tracep->chgQData(oldp+22,(vlSelf->rvcpu__DOT__mem_id_data),64);
            tracep->chgQData(oldp+24,(vlSelf->rvcpu__DOT__ex_ex_mem_pc),64);
            tracep->chgQData(oldp+26,(vlSelf->rvcpu__DOT__mem_mem_wb_pc),64);
            tracep->chgIData(oldp+28,(vlSelf->rvcpu__DOT__id_id_ex_inst),32);
            tracep->chgIData(oldp+29,(vlSelf->rvcpu__DOT__ex_ex_mem_inst),32);
            tracep->chgIData(oldp+30,(vlSelf->rvcpu__DOT__mem_mem_wb_inst),32);
            tracep->chgIData(oldp+31,(vlSelf->rvcpu__DOT__pip_fore0__DOT__j_imm),20);
            tracep->chgSData(oldp+32,(vlSelf->rvcpu__DOT__pip_fore0__DOT__b_imm),12);
            tracep->chgBit(oldp+33,(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr));
            tracep->chgQData(oldp+34,(vlSelf->rvcpu__DOT__pip_fore0__DOT__j_pc),64);
            tracep->chgBit(oldp+36,((1U & (IData)(vlSelf->rvcpu__DOT__stall_ctrl))));
            tracep->chgBit(oldp+37,(vlSelf->rvcpu__DOT__id3__DOT__inst_lui));
            tracep->chgBit(oldp+38,(vlSelf->rvcpu__DOT__id3__DOT__inst_auipc));
            tracep->chgBit(oldp+39,(vlSelf->rvcpu__DOT__id3__DOT__inst_jal));
            tracep->chgBit(oldp+40,(vlSelf->rvcpu__DOT__id3__DOT__inst_jalr));
            tracep->chgBit(oldp+41,(vlSelf->rvcpu__DOT__id3__DOT__inst_jump));
            tracep->chgBit(oldp+42,(vlSelf->rvcpu__DOT__id3__DOT__inst_srai));
            tracep->chgBit(oldp+43,(vlSelf->rvcpu__DOT__id3__DOT__inst_addiw));
            tracep->chgBit(oldp+44,(vlSelf->rvcpu__DOT__id3__DOT__inst_slliw));
            tracep->chgBit(oldp+45,(vlSelf->rvcpu__DOT__id3__DOT__inst_srliw));
            tracep->chgBit(oldp+46,(vlSelf->rvcpu__DOT__id3__DOT__inst_sraiw));
            tracep->chgBit(oldp+47,(vlSelf->rvcpu__DOT__id3__DOT__inst_add));
            tracep->chgBit(oldp+48,(vlSelf->rvcpu__DOT__id3__DOT__inst_sub));
            tracep->chgBit(oldp+49,(vlSelf->rvcpu__DOT__id3__DOT__inst_sll));
            tracep->chgBit(oldp+50,(vlSelf->rvcpu__DOT__id3__DOT__inst_slt));
            tracep->chgBit(oldp+51,(vlSelf->rvcpu__DOT__id3__DOT__inst_sltu));
            tracep->chgBit(oldp+52,(vlSelf->rvcpu__DOT__id3__DOT__inst_xor));
            tracep->chgBit(oldp+53,(vlSelf->rvcpu__DOT__id3__DOT__inst_srl));
            tracep->chgBit(oldp+54,(vlSelf->rvcpu__DOT__id3__DOT__inst_sra));
            tracep->chgBit(oldp+55,(vlSelf->rvcpu__DOT__id3__DOT__inst_or));
            tracep->chgBit(oldp+56,(vlSelf->rvcpu__DOT__id3__DOT__inst_and));
            tracep->chgBit(oldp+57,(vlSelf->rvcpu__DOT__id3__DOT__inst_addw));
            tracep->chgBit(oldp+58,(vlSelf->rvcpu__DOT__id3__DOT__inst_subw));
            tracep->chgBit(oldp+59,(vlSelf->rvcpu__DOT__id3__DOT__inst_sllw));
            tracep->chgBit(oldp+60,(vlSelf->rvcpu__DOT__id3__DOT__inst_srlw));
            tracep->chgBit(oldp+61,(vlSelf->rvcpu__DOT__id3__DOT__inst_sraw));
            tracep->chgBit(oldp+62,(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrw));
            tracep->chgBit(oldp+63,(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrs));
            tracep->chgBit(oldp+64,(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrc));
            tracep->chgBit(oldp+65,(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrwi));
            tracep->chgBit(oldp+66,((((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrw) 
                                      | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrs)) 
                                     | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrc))));
            tracep->chgBit(oldp+67,(vlSelf->rvcpu__DOT__id3__DOT__inst_ebreak));
            tracep->chgBit(oldp+68,(vlSelf->rvcpu__DOT__id3__DOT__ex_op1));
            tracep->chgBit(oldp+69,(vlSelf->rvcpu__DOT__id3__DOT__mem_op1));
            tracep->chgBit(oldp+70,((1U & ((IData)(vlSelf->rvcpu__DOT__stall_ctrl) 
                                           >> 3U))));
            tracep->chgQData(oldp+71,(vlSelf->rvcpu__DOT__ex5__DOT__exe_res),64);
            tracep->chgCData(oldp+73,(vlSelf->rvcpu__DOT__mem7__DOT__data_byte),8);
            tracep->chgSData(oldp+74,(vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte),16);
            tracep->chgIData(oldp+75,(vlSelf->rvcpu__DOT__mem7__DOT__data_word),32);
            tracep->chgQData(oldp+76,(vlSelf->rvcpu__DOT__mem7__DOT__store_data),64);
            tracep->chgCData(oldp+78,(vlSelf->rvcpu__DOT__mem7__DOT__store_mask),8);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+79,(((IData)(vlSelf->rvcpu__DOT__ex_pc_branchena) 
                                     & (IData)(vlSelf->rvcpu__DOT__if_stall_req))));
            tracep->chgQData(oldp+80,(((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jalr)
                                        ? (0xfffffffffffffffeULL 
                                           & ((((- (QData)((IData)(
                                                                   (vlSelf->rvcpu__DOT__if_id_inst 
                                                                    >> 0x1fU)))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 (vlSelf->rvcpu__DOT__if_id_inst 
                                                                  >> 0x14U)))) 
                                              + vlSelf->rvcpu__DOT__id_ex_op))
                                        : 0ULL)),64);
            tracep->chgBit(oldp+82,((1U & (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+83,((1U & (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x2000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+84,((1U & (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x3000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+85,((1U & (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x4000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+86,((1U & (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x6000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+87,((1U & (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x7000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+88,((1U & (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x1000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+89,((1U & (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x5000U 
                                                      == 
                                                      (0x40007000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+90,((1U & (IData)((
                                                   (4U 
                                                    == 
                                                    (4U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+91,((1U & (IData)((
                                                   (4U 
                                                    == 
                                                    (4U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x1000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+92,((1U & (IData)((
                                                   (4U 
                                                    == 
                                                    (4U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x4000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+93,((1U & (IData)((
                                                   (4U 
                                                    == 
                                                    (4U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x5000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+94,((1U & (IData)((
                                                   (4U 
                                                    == 
                                                    (4U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x6000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+95,((1U & (IData)((
                                                   (4U 
                                                    == 
                                                    (4U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x7000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+96,((1U & (IData)((
                                                   (0x80U 
                                                    == 
                                                    (0x80U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x6000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+97,((1U & (IData)((
                                                   (0x80U 
                                                    == 
                                                    (0x80U 
                                                     & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                   & (0x7000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->rvcpu__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+98,(((IData)(((0x80U 
                                               == (0x80U 
                                                   & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                              & (0U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelf->rvcpu__DOT__if_id_inst)))) 
                                     & (0U == (vlSelf->rvcpu__DOT__if_id_inst 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+99,(((IData)(((0x80U 
                                               == (0x80U 
                                                   & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                              & (0U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelf->rvcpu__DOT__if_id_inst)))) 
                                     & (0x18U == (vlSelf->rvcpu__DOT__if_id_inst 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+100,((((IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr) 
                                       == (IData)(vlSelf->rvcpu__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->rvcpu__DOT__ex_id_rd_ena))));
            tracep->chgBit(oldp+101,((((IData)(vlSelf->rvcpu__DOT__exmem_mem_addr) 
                                       == (IData)(vlSelf->rvcpu__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_ena))));
            tracep->chgBit(oldp+102,((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                       == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                      & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))));
            tracep->chgQData(oldp+103,(((((- (QData)((IData)(
                                                             (vlSelf->rvcpu__DOT__if_id_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->rvcpu__DOT__if_id_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->rvcpu__DOT__id_ex_op)),64);
            tracep->chgBit(oldp+105,((1U & (((~ (IData)(vlSelf->rvcpu__DOT__id3__DOT__ex_op1)) 
                                             & (~ (IData)(vlSelf->rvcpu__DOT__id3__DOT__mem_op1))) 
                                            & (~ (((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                                   == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                                  & (IData)(vlSelf->rvcpu__DOT__wb_id_ena)))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+106,(vlSelf->rvcpu__DOT__if_id_pc),64);
            tracep->chgIData(oldp+108,(vlSelf->rvcpu__DOT__if_id_inst),32);
            tracep->chgBit(oldp+109,(vlSelf->rvcpu__DOT__ex_pc_branchena));
            tracep->chgCData(oldp+110,(vlSelf->rvcpu__DOT__idex_ex_rdaddr),5);
            tracep->chgBit(oldp+111,(vlSelf->rvcpu__DOT__ex_id_rd_ena));
            tracep->chgCData(oldp+112,(vlSelf->rvcpu__DOT__ex_id_rd_type),8);
            tracep->chgCData(oldp+113,(vlSelf->rvcpu__DOT__idex_ex_sel),3);
            tracep->chgQData(oldp+114,(vlSelf->rvcpu__DOT__ex_mem_addr),64);
            tracep->chgQData(oldp+116,((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__trap_ena) 
                                         | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena))
                                         ? vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data
                                         : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ex_flush_branch)
                                             ? (4ULL 
                                                + vlSelf->rvcpu__DOT__idex_ex_pc)
                                             : 0ULL))),64);
            tracep->chgCData(oldp+118,(vlSelf->rvcpu__DOT__exmem_mem_addr),5);
            tracep->chgBit(oldp+119,(vlSelf->rvcpu__DOT__exmem_mem_ena));
            tracep->chgCData(oldp+120,(vlSelf->rvcpu__DOT__wb_id_addr),5);
            tracep->chgBit(oldp+121,(vlSelf->rvcpu__DOT__wb_id_ena));
            tracep->chgQData(oldp+122,(vlSelf->rvcpu__DOT__wb_regfile_data),64);
            tracep->chgQData(oldp+124,(vlSelf->rvcpu__DOT__idex_ex_pc),64);
            tracep->chgCData(oldp+126,(vlSelf->rvcpu__DOT__idex_ex_type),8);
            tracep->chgCData(oldp+127,(vlSelf->rvcpu__DOT__idex_ex_opcode),8);
            tracep->chgQData(oldp+128,(vlSelf->rvcpu__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+130,(vlSelf->rvcpu__DOT__idex_ex_op2),64);
            tracep->chgBit(oldp+132,(vlSelf->rvcpu__DOT__idex_ex_rdena));
            tracep->chgSData(oldp+133,(vlSelf->rvcpu__DOT__idex_ex_offset),12);
            tracep->chgCData(oldp+134,(vlSelf->rvcpu__DOT__exmem_mem_type),8);
            tracep->chgQData(oldp+135,(vlSelf->rvcpu__DOT__exmem_mem_data),64);
            tracep->chgCData(oldp+137,(vlSelf->rvcpu__DOT__exmem_mem_sel),3);
            tracep->chgQData(oldp+138,(vlSelf->rvcpu__DOT__exmem_mem_lsaddr),64);
            tracep->chgQData(oldp+140,(vlSelf->rvcpu__DOT__ex_mem_mem_pc),64);
            tracep->chgIData(oldp+142,(vlSelf->rvcpu__DOT__id_ex_ex_inst),32);
            tracep->chgIData(oldp+143,(vlSelf->rvcpu__DOT__ex_mem_mem_inst),32);
            tracep->chgCData(oldp+144,((0x7fU & vlSelf->rvcpu__DOT__if_id_inst)),7);
            tracep->chgCData(oldp+145,((0x1fU & (vlSelf->rvcpu__DOT__if_id_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+146,((7U & (vlSelf->rvcpu__DOT__if_id_inst 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+147,((0x1fU & (vlSelf->rvcpu__DOT__if_id_inst 
                                                 >> 0xfU))),5);
            tracep->chgSData(oldp+148,((vlSelf->rvcpu__DOT__if_id_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+149,((vlSelf->rvcpu__DOT__if_id_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+150,((0x1fU & (vlSelf->rvcpu__DOT__if_id_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+151,((vlSelf->rvcpu__DOT__if_id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+152,(((0xfe0U & (vlSelf->rvcpu__DOT__if_id_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->rvcpu__DOT__if_id_inst 
                                            >> 7U)))),12);
            tracep->chgQData(oldp+153,((1ULL + (~ vlSelf->rvcpu__DOT__idex_ex_op2))),64);
            tracep->chgQData(oldp+155,(vlSelf->rvcpu__DOT__ex5__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+157,(vlSelf->rvcpu__DOT__ex5__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+159,(vlSelf->rvcpu__DOT__ex5__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+161,(vlSelf->rvcpu__DOT__ex5__DOT__op1_ls_op2));
            tracep->chgQData(oldp+162,(vlSelf->rvcpu__DOT__ex5__DOT__shift_res),64);
            tracep->chgIData(oldp+164,(vlSelf->rvcpu__DOT__ex5__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+165,(vlSelf->rvcpu__DOT__ex5__DOT__sllw_res),64);
            tracep->chgIData(oldp+167,(vlSelf->rvcpu__DOT__ex5__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+168,(vlSelf->rvcpu__DOT__ex5__DOT__srlw_res),64);
            tracep->chgIData(oldp+170,(vlSelf->rvcpu__DOT__ex5__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+171,(vlSelf->rvcpu__DOT__ex5__DOT__sraw_res),64);
            tracep->chgIData(oldp+173,(vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+174,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+176,(vlSelf->rvcpu__DOT__ex5__DOT__upper_imm),64);
            tracep->chgBit(oldp+178,(vlSelf->rvcpu__DOT__ex5__DOT__ex_flush_branch));
            tracep->chgBit(oldp+179,(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena));
            tracep->chgSData(oldp+180,(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx),12);
            tracep->chgQData(oldp+181,(vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data),64);
            tracep->chgBit(oldp+183,(vlSelf->rvcpu__DOT__ex5__DOT__trap_ena));
            tracep->chgBit(oldp+184,(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena));
            tracep->chgBit(oldp+185,(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena));
            tracep->chgBit(oldp+186,(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en));
            tracep->chgBit(oldp+187,(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en));
            tracep->chgQData(oldp+188,(vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data),64);
            tracep->chgQData(oldp+190,(vlSelf->rvcpu__DOT__ex5__DOT__trap_mcause_value),64);
            tracep->chgQData(oldp+192,((vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data 
                                        | vlSelf->rvcpu__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+194,((vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data 
                                        & (~ vlSelf->rvcpu__DOT__idex_ex_op1))),64);
            tracep->chgBit(oldp+196,((0xb00U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+197,(((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)))));
            tracep->chgBit(oldp+198,(((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en) 
                                      & (0xb00U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)))));
            tracep->chgQData(oldp+199,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
            tracep->chgBit(oldp+201,((0x300U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+202,(((0x300U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+203,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
            tracep->chgBit(oldp+204,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
            tracep->chgBit(oldp+205,((1U & (((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))
                                             ? (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                             : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena) 
                                                | ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
            tracep->chgBit(oldp+206,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
            tracep->chgBit(oldp+207,((1U & ((~ ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                                | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))) 
                                            & ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena)
                                                ? (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                                : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
            tracep->chgBit(oldp+208,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
            tracep->chgCData(oldp+209,((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))
                                         ? 3U : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena)
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
            tracep->chgCData(oldp+210,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
            tracep->chgCData(oldp+211,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
            tracep->chgBit(oldp+212,((3U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
            tracep->chgQData(oldp+213,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
            tracep->chgBit(oldp+215,((0x305U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+216,(((((0x305U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en)) 
                                       | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgBit(oldp+217,(((0x305U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+218,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
            tracep->chgQData(oldp+220,((vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+222,((0x341U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+223,((((0x341U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                       & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en)) 
                                      | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena))));
            tracep->chgBit(oldp+224,(((((0x341U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en)) 
                                       | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+225,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
            tracep->chgBit(oldp+227,((0x342U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+228,(((0x342U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+229,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause));
            tracep->chgBit(oldp+230,((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                       | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+231,((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))
                                         ? vlSelf->rvcpu__DOT__ex5__DOT__trap_mcause_value
                                         : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                             ? vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data
                                             : vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
            tracep->chgQData(oldp+233,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
            tracep->chgBit(oldp+235,((0x304U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+236,(((0x304U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+237,(((0x304U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgBit(oldp+238,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
            tracep->chgQData(oldp+239,(((QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+241,((0x344U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+242,(((0x344U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+243,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
            tracep->chgQData(oldp+244,((QData)((IData)(
                                                       ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                        << 7U)))),64);
            tracep->chgBit(oldp+246,((0x340U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+247,(((0x340U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+248,(((0x340U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+249,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
            tracep->chgCData(oldp+251,((7U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))),3);
            tracep->chgCData(oldp+252,((3U & (IData)(
                                                     (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+253,((1U & (IData)(
                                                   (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                    >> 2U)))));
            tracep->chgQData(oldp+254,(vlSelf->rvcpu__DOT__mem_wb8__DOT__wb_pc_o),64);
            tracep->chgIData(oldp+256,(vlSelf->rvcpu__DOT__mem_wb8__DOT__wb_inst_o),32);
            tracep->chgQData(oldp+257,(vlSelf->rvcpu__DOT__mem_wb8__DOT__pc_data1),64);
            tracep->chgBit(oldp+259,(vlSelf->rvcpu__DOT__mem_wb8__DOT__difftest_exyn));
            tracep->chgBit(oldp+260,(vlSelf->rvcpu__DOT__mem_wb8__DOT__teap_yn));
            tracep->chgQData(oldp+261,(vlSelf->rvcpu__DOT__mem_wb8__DOT__trap_code),64);
            tracep->chgQData(oldp+263,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[0]),64);
            tracep->chgQData(oldp+265,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[1]),64);
            tracep->chgQData(oldp+267,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[2]),64);
            tracep->chgQData(oldp+269,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[3]),64);
            tracep->chgQData(oldp+271,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[4]),64);
            tracep->chgQData(oldp+273,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[5]),64);
            tracep->chgQData(oldp+275,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[6]),64);
            tracep->chgQData(oldp+277,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[7]),64);
            tracep->chgQData(oldp+279,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[8]),64);
            tracep->chgQData(oldp+281,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[9]),64);
            tracep->chgQData(oldp+283,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[10]),64);
            tracep->chgQData(oldp+285,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[11]),64);
            tracep->chgQData(oldp+287,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[12]),64);
            tracep->chgQData(oldp+289,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[13]),64);
            tracep->chgQData(oldp+291,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[14]),64);
            tracep->chgQData(oldp+293,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[15]),64);
            tracep->chgQData(oldp+295,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[16]),64);
            tracep->chgQData(oldp+297,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[17]),64);
            tracep->chgQData(oldp+299,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[18]),64);
            tracep->chgQData(oldp+301,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[19]),64);
            tracep->chgQData(oldp+303,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[20]),64);
            tracep->chgQData(oldp+305,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[21]),64);
            tracep->chgQData(oldp+307,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[22]),64);
            tracep->chgQData(oldp+309,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[23]),64);
            tracep->chgQData(oldp+311,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[24]),64);
            tracep->chgQData(oldp+313,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[25]),64);
            tracep->chgQData(oldp+315,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[26]),64);
            tracep->chgQData(oldp+317,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[27]),64);
            tracep->chgQData(oldp+319,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[28]),64);
            tracep->chgQData(oldp+321,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[29]),64);
            tracep->chgQData(oldp+323,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[30]),64);
            tracep->chgQData(oldp+325,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[31]),64);
            tracep->chgIData(oldp+327,(vlSelf->rvcpu__DOT__regfile10__DOT__i),32);
        }
        tracep->chgBit(oldp+328,(vlSelf->clk));
        tracep->chgBit(oldp+329,(vlSelf->rst));
        tracep->chgQData(oldp+330,(vlSelf->inst_addr),64);
        tracep->chgBit(oldp+332,(vlSelf->inst_ena));
        tracep->chgBit(oldp+333,(vlSelf->inst_ready));
        tracep->chgIData(oldp+334,(vlSelf->inst),32);
        tracep->chgBit(oldp+335,(vlSelf->bui_inst_valid));
        tracep->chgQData(oldp+336,(vlSelf->data_addr),64);
        tracep->chgCData(oldp+338,(vlSelf->wmask),8);
        tracep->chgQData(oldp+339,(vlSelf->data_o),64);
        tracep->chgQData(oldp+341,(vlSelf->data_i),64);
        tracep->chgBit(oldp+343,(vlSelf->we));
        tracep->chgBit(oldp+344,(vlSelf->re));
        tracep->chgBit(oldp+345,(vlSelf->mem_finish));
        tracep->chgBit(oldp+346,(vlSelf->timer_intr));
        tracep->chgQData(oldp+347,(((1U & ((~ (IData)(vlSelf->rst)) 
                                           & ((IData)(vlSelf->rst)
                                               ? 0U
                                               : (IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr))))
                                     ? ((((0x1fU & 
                                           (vlSelf->inst 
                                            >> 0xfU)) 
                                          == (IData)(vlSelf->rvcpu__DOT__wb_id_addr)) 
                                         & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                         ? vlSelf->rvcpu__DOT__wb_regfile_data
                                         : vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                        [(0x1fU & (vlSelf->inst 
                                                   >> 0xfU))])
                                     : 0ULL)),64);
        tracep->chgBit(oldp+349,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->chgCData(oldp+350,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgQData(oldp+351,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)
                                                ? (0xfffffffffffffffeULL 
                                                   & vlSelf->rvcpu__DOT__pip_fore0__DOT__j_pc)
                                                : vlSelf->rvcpu__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->chgBit(oldp+353,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & ((((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & (((IData)(vlSelf->rvcpu__DOT__id_reg_ena1) 
                                                        & (2U 
                                                           == (IData)(vlSelf->rvcpu__DOT__ex_id_rd_type))) 
                                                       & ((IData)(vlSelf->rvcpu__DOT__id_reg_addr1) 
                                                          == (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr))))) 
                                                  | ((IData)(vlSelf->rst)
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      & (((IData)(vlSelf->rvcpu__DOT__id_reg_ena2) 
                                                          & (2U 
                                                             == (IData)(vlSelf->rvcpu__DOT__ex_id_rd_type))) 
                                                         & ((IData)(vlSelf->rvcpu__DOT__id_reg_addr2) 
                                                            == (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr)))))) 
                                                 | ((IData)(vlSelf->rvcpu__DOT__id_if_flush) 
                                                    & (IData)(vlSelf->rvcpu__DOT__if_stall_req)))))));
        tracep->chgQData(oldp+354,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->rvcpu__DOT__id_reg_ena1))
                                     ? ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                         & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                         ? vlSelf->rvcpu__DOT__wb_regfile_data
                                         : vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                        [vlSelf->rvcpu__DOT__id_reg_addr1])
                                     : 0ULL)),64);
        tracep->chgQData(oldp+356,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->rvcpu__DOT__id_reg_ena2))
                                     ? ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->rvcpu__DOT__id_reg_addr2)) 
                                         & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                         ? vlSelf->rvcpu__DOT__wb_regfile_data
                                         : vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                        [vlSelf->rvcpu__DOT__id_reg_addr2])
                                     : 0ULL)),64);
        tracep->chgBit(oldp+358,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->re) 
                                      | (IData)(vlSelf->we)) 
                                     & (~ (IData)(vlSelf->mem_finish))))));
        tracep->chgSData(oldp+359,((vlSelf->inst >> 0x14U)),12);
        tracep->chgCData(oldp+360,((0x7fU & vlSelf->inst)),7);
        tracep->chgBit(oldp+361,((IData)((0x6fU == 
                                          (0x7fU & vlSelf->inst)))));
        tracep->chgBit(oldp+362,((IData)((0x63U == 
                                          (0x7fU & vlSelf->inst)))));
        tracep->chgQData(oldp+363,(((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)
                                     ? ((1U & ((~ (IData)(vlSelf->rst)) 
                                               & ((IData)(vlSelf->rst)
                                                   ? 0U
                                                   : (IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr))))
                                         ? ((((0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->rvcpu__DOT__wb_id_addr)) 
                                             & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                             ? vlSelf->rvcpu__DOT__wb_regfile_data
                                             : vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                            [(0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0xfU))])
                                         : 0ULL) : vlSelf->inst_addr)),64);
        tracep->chgQData(oldp+365,(((IData)((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->inst)))
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->rvcpu__DOT__pip_fore0__DOT__j_imm 
                                                                >> 0x13U))))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          (0xfffffU 
                                                           & (vlSelf->rvcpu__DOT__pip_fore0__DOT__j_imm 
                                                              << 1U)))))
                                     : ((IData)((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__b_imm) 
                                                                    >> 0xbU))))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (0xfffU 
                                                               & ((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__b_imm) 
                                                                  << 1U)))))
                                         : ((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)
                                             ? (((- (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x14U))))
                                             : 4ULL)))),64);
        tracep->chgBit(oldp+367,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->rvcpu__DOT__id_reg_ena1) 
                                                  & (2U 
                                                     == (IData)(vlSelf->rvcpu__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->rvcpu__DOT__id_reg_addr1) 
                                                    == (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr)))))));
        tracep->chgBit(oldp+368,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->rvcpu__DOT__id_reg_ena2) 
                                                  & (2U 
                                                     == (IData)(vlSelf->rvcpu__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->rvcpu__DOT__id_reg_addr2) 
                                                    == (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr)))))));
        tracep->chgQData(oldp+369,(((2U == (IData)(vlSelf->rvcpu__DOT__exmem_mem_type))
                                     ? ((4U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                         ? ((2U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                             ? ((1U 
                                                 & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                 ? 0ULL
                                                 : (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_word)))
                                             : ((1U 
                                                 & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                 ? (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte))
                                                 : (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_byte))))
                                         : ((2U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                             ? ((1U 
                                                 & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                 ? vlSelf->data_i
                                                 : 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->rvcpu__DOT__mem7__DOT__data_word 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_word))))
                                             : ((1U 
                                                 & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte) 
                                                                         >> 0xfU))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte)))
                                                 : 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_byte) 
                                                                         >> 7U))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_byte))))))
                                     : 0ULL)),64);
        tracep->chgQData(oldp+371,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                           >> 2U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                     << 0x38U)
                                                     : 
                                                    ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                     << 0x30U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                     << 0x28U)
                                                     : 
                                                    ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                     << 0x20U)))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                     << 0x18U)
                                                     : 
                                                    ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                     << 0x10U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                     << 8U)
                                                     : (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data))))))))),64);
        tracep->chgQData(oldp+373,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                            >> 1U))))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data))))
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                    << 0x10U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                                 >> 1U))))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                     << 0x20U)
                                                     : 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                     << 0x30U)))))),64);
        tracep->chgQData(oldp+375,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                           >> 2U)))
                                                ? ((QData)((IData)(vlSelf->rvcpu__DOT__exmem_mem_data)) 
                                                   << 0x20U)
                                                : (QData)((IData)(vlSelf->rvcpu__DOT__exmem_mem_data))))),64);
        tracep->chgCData(oldp+377,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                   ? 0x80U
                                                   : 0x40U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                   ? 0x20U
                                                   : 0x10U))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                   ? 8U
                                                   : 4U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                   ? 2U
                                                   : 1U))))),8);
        tracep->chgCData(oldp+378,(((IData)(vlSelf->rst)
                                     ? 0U : ((0U == 
                                              (3U & (IData)(
                                                            (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                             >> 1U))))
                                              ? 3U : 
                                             ((1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                           >> 1U))))
                                               ? 0xcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                               >> 1U))))
                                                   ? 0x30U
                                                   : 0xc0U))))),8);
        tracep->chgCData(oldp+379,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? 0xf0U
                                              : 0xfU))),8);
    }
}

void Vrvcpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vrvcpu___024root* const __restrict vlSelf = static_cast<Vrvcpu___024root*>(voidSelf);
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
