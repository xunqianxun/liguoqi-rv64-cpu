/************************************************************
Author:LiGuoqi
Name:ALUO.v
Function:Instruction execution module and CSR is instantiated
************************************************************/
`include "csr.v"
`include "divider.v"
`include "multiplier.v"
`include "defines.v"
module ALUO (
    input         wire                                        clk               ,
    input         wire                                        rst               ,
    input         wire          [`ysyx22040228_PCBUS]         pc_i              ,
    input         wire          [`ysyx22040228_INSTBUS]       id_ex_inst        ,

    input         wire          [ 7:0]                        inst_type_i       ,
    input         wire          [ 7:0]                        inst_opcode_i     ,
    input         wire          [`ysyx22040228_REGBUS]        op1_i             ,
    input         wire          [`ysyx22040228_REGBUS]        op2_i             ,
    input         wire                                        rd_ena_i          ,
    input         wire          [`ysyx22040228_REGADDRBUS]    rd_addr_i         ,

    output        wire                                        rd_ena_o          ,
    output        wire          [`ysyx22040228_REGADDRBUS]    rd_addr_o         ,
    output        wire          [`ysyx22040228_REGBUS]        rd_data_o         ,
    output        wire          [`ysyx22040228_PCBUS]         ex_pc_o           ,
    output        wire          [`ysyx22040228_INSTBUS]       ex_inst_o         ,
    output        wire                                        fence_ready       ,

    output        wire                                        socreboard_aluo   ,
    input         wire                                        timer_intr        ,

    //----------------------------which ex clean-------------------------------//
    //             pip_clean[0] -------->  clean ALUO                          //
    //             pip_clean[1] -------->  clean ALUT                          //
    //             pip_clean[2] -------->  clean MMU                           //
    //-------------------------------------------------------------------------//
    
    output        wire          [`ysyx22040228_PCBUS]         trap_pc           ,
    output        wire                                        trap_able             
    
);

assign ex_pc_o = (rst == `ysyx22040228_RSTENA) ? `ysyx22040228_ZEROWORD : pc_i ;
assign ex_inst_o = (rst == `ysyx22040228_RSTENA) ? 32'b0 : id_ex_inst ;
assign fence_ready = (inst_opcode_i == `INST_FENCE) ? 1'b1 : 1'b0 ;

reg      [`ysyx22040228_REGBUS]       exe_res   ;

//about slti slt
wire     [`ysyx22040228_REGBUS]  op2_i_mux   = ~op2_i + 64'd1     ;
wire     [`ysyx22040228_REGBUS]  op1_sub_op2 = op1_i  + op2_i_mux ;

//sbout addxx
wire     [`ysyx22040228_REGBUS]  op1_add_op2   = op1_i + op2_i ;
wire     [`ysyx22040228_REGBUS]  op1_addw_op2  = {{32{op1_add_op2[31]}},op1_add_op2[31:0]} ;

//about slt slti
wire     op1_ls_op2 = (op1_i[63] && ~op2_i[63]) || (~op1_i[63] && ~op2_i[63] && op1_sub_op2[63]) || (op1_i[63] && op2_i[63] && op1_sub_op2[63]) ;

//about srai sra
wire     [`ysyx22040228_REGBUS]  shift_res = ( {64{op1_i[63]}} << (7'd64 - {1'b0 , op2_i[5:0]})) | (op1_i >> op2_i[5:0]) ;
 
//about sllw srlw
wire     [31:0]      op1_sllw_op2  = op1_i[31:0] << op2_i[4:0]               ;
wire     [`ysyx22040228_REGBUS]  sllw_res      = {{32{op1_sllw_op2[31]}} , op1_sllw_op2} ;

//about srliw srlw
wire     [31:0]      op1_srlw_op2  = op1_i[31:0] >> op2_i[4:0]               ;
wire     [`ysyx22040228_REGBUS]  srlw_res      = {{32{op1_srlw_op2[31]}} , op1_srlw_op2} ;

//about sraiw sraw 
wire     [31:0]      op1_sraw_op2  = ( {32{op1_i[31]}} << (6'd32 - {1'b0,op2_i[4:0]})) | (op1_i[31:0] >> op2_i[4:0]) ;
wire     [`ysyx22040228_REGBUS]  sraw_res      = {{32{op1_sraw_op2[31]}},op1_sraw_op2}                                         ;

//about subw
wire     [31:0]      op1_subw_op2  = op1_i[31:0] - op2_i[31:0]             ;
wire     [`ysyx22040228_REGBUS]  subw_res      = {{32{op1_subw_op2[31]}},op1_subw_op2} ;


assign rd_data_o    = (inst_type_i[7] && (inst_opcode_i != `INST_EBREAK)) ? read_csr_data : exe_res ;

assign rd_ena_o     = rd_ena_i    & (~tmr_trap_ena)    ;
assign rd_addr_o    = rd_addr_i                        ;


wire     [`ysyx22040228_REGBUS]  upper_imm = {{32{op2_i[19]}},op2_i[19:0],12'd0} ;

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin  exe_res = `ysyx22040228_ZEROWORD   ;     end
    else begin
        case (inst_opcode_i) 
          `INST_ADDI ,  `INST_ADD:  begin exe_res = op1_add_op2              ;end
          `INST_SLTI ,  `INST_SLT:  begin exe_res = {63'd0 , op1_ls_op2}     ;end
          `INST_SLTIU , `INST_SLTU: begin exe_res = {63'd0 , (op1_i < op2_i)};end
          `INST_XORI ,  `INST_XOR:  begin exe_res = op1_i ^ op2_i            ;end
          `INST_ORI  ,  `INST_OR :  begin exe_res = op1_i | op2_i            ;end
          `INST_ANDI ,  `INST_AND:  begin exe_res = op1_i & op2_i            ;end
          `INST_SLLI ,  `INST_SLL:  begin exe_res = op1_i << op2_i[5:0]      ;end
          `INST_SRLI ,  `INST_SRL:  begin exe_res = op1_i >> op2_i[5:0]      ;end
          `INST_SRAI ,  `INST_SRA:  begin exe_res = shift_res                ;end
          `INST_SUB             :   begin exe_res = op1_sub_op2              ;end
          `INST_LUI  , `INST_AUIPC: begin exe_res = op1_i + upper_imm        ;end
          `INST_JAL  , `INST_JALR:  begin exe_res = op2_i + 64'd4            ;end
          `INST_ADDIW, `INST_ADDW:  begin exe_res = op1_addw_op2             ;end
          `INST_SLLIW, `INST_SLLW:  begin exe_res = sllw_res                 ;end
          `INST_SRLIW, `INST_SRLW:  begin exe_res = srlw_res                 ;end
          `INST_SRAIW, `INST_SRAW:  begin exe_res = sraw_res                 ;end
          `INST_SUBW             :  begin exe_res = subw_res                 ;end
          `INST_EBREAK           :  begin exe_res = op1_i                    ;end
          `INST_MUL ,  `INST_MULH,
          `INST_MULHSU,`INST_MULHU,
          `INST_MULW             :  begin exe_res = mul_data                 ;end 
          `INST_DIV , `INST_DIVU ,
          `INST_DIVUW,`INST_DIVW ,
          `INST_REM , `INST_REMU ,
          `INST_REMUW,`INST_REMW :  begin exe_res = divrem_data              ;end 
        default    :                begin exe_res = `ysyx22040228_ZEROWORD   ;end
        endcase
    end
end

wire clk_in ;
assign clk_in = clk ;
reg   [63:0]   mul_data        ;
reg            mul_finish_sign ;
wire           mul_ready       ;
assign mul_ready =  (inst_opcode_i == `INST_MUL   ) | 
                    (inst_opcode_i == `INST_MULH  ) | 
                    (inst_opcode_i == `INST_MULHSU) | 
                    (inst_opcode_i == `INST_MULHU ) | 
                    (inst_opcode_i == `INST_MULW  ) ;

multiplier decode1_multiplier (
    .clk             (clk_in         ) ,
    .rst             (rst            ) ,
    .mult_ready      (mul_ready      ) ,
    .inst_opcode     (inst_opcode_i  ) ,
    .mult_op1        (op1_i          ) ,
    .mult_op2        (op2_i          ) ,
    .product_val     (mul_data       ) ,
    .mult_finish     (mul_finish_sign)  
);

reg   [63:0]   divrem_data      ;
reg            dr_finish_sign   ;
wire           dr_ready         ;
assign  dr_ready  = (inst_opcode_i == `INST_DIV     ) |
                    (inst_opcode_i == `INST_DIVU    ) |
                    (inst_opcode_i == `INST_DIVUW   ) |
                    (inst_opcode_i == `INST_DIVW    ) |
                    (inst_opcode_i == `INST_REM     ) |
                    (inst_opcode_i == `INST_REMU    ) |
                    (inst_opcode_i == `INST_REMUW   ) |
                    (inst_opcode_i == `INST_REMW    ) ;

wire  [63:0]  op1_divdata ;
wire  [63:0]  op2_divdata ;
assign op1_divdata = (inst_opcode_i == `INST_DIV     ) ? op1_i         :
                     (inst_opcode_i == `INST_DIVU    ) ? op1_i         :
                     (inst_opcode_i == `INST_DIVUW   ) ? {32'b0, op1_i[31:0]}   :
                     (inst_opcode_i == `INST_DIVW    ) ? (op1_i[32] ? {32'hffffffff, op1_i[31:0]} : {32'b0, op1_i[31:0]})   :
                     (inst_opcode_i == `INST_REM     ) ? op1_i         :
                     (inst_opcode_i == `INST_REMU    ) ? op1_i         :
                     (inst_opcode_i == `INST_REMUW   ) ? {32'b0, op1_i[31:0]}   :
                     (inst_opcode_i == `INST_REMW    ) ? (op1_i[32] ? {32'hffffffff, op1_i[31:0]} : {32'b0, op1_i[31:0]})   :
                                                `ysyx22040228_ZEROWORD ;

assign op2_divdata = (inst_opcode_i == `INST_DIV     ) ? op2_i         :
                     (inst_opcode_i == `INST_DIVU    ) ? op2_i         : 
                     (inst_opcode_i == `INST_DIVUW   ) ? {32'b0, op2_i[31:0]}   :
                     (inst_opcode_i == `INST_DIVW    ) ? (op2_i[32] ? {32'hffffffff, op2_i[31:0]} : {32'b0, op2_i[31:0]})   : 
                     (inst_opcode_i == `INST_REM     ) ? op2_i         :
                     (inst_opcode_i == `INST_REMU    ) ? op2_i         :  
                     (inst_opcode_i == `INST_REMUW   ) ? {32'b0, op2_i[31:0]}   :    
                     (inst_opcode_i == `INST_REMW    ) ? (op2_i[32] ? {32'hffffffff, op2_i[31:0]} : {32'b0, op2_i[31:0]})   :
                                                `ysyx22040228_ZEROWORD ;           
divider decode1_divider (
    .clk              (clk_in         ) ,
    .rst              (rst            ) ,

    .diviser          (op2_divdata    ) ,
    .dividend         (op1_divdata    ) ,
    .inst_opcode      (inst_opcode_i  ) ,
    .div_ready        (dr_ready       ) ,
    .div_rem_data     (divrem_data    ) ,
    .div_finish       (dr_finish_sign )  
);
wire   mul_div_req ;
assign mul_div_req = (~dr_finish_sign && dr_ready) || (~mul_finish_sign && mul_ready) ;
assign socreboard_aluo = mul_div_req  ;

wire                tmr_trap_ena ;
wire  [11:0]        csr_idx = inst_type_i[7] ? op2_i[11:0] : 12'd0  ;
wire  [`ysyx22040228_REGBUS]    read_csr_data  ;
wire                trap_ena = ecall_trap_ena | (tmr_trap_ena) ;
reg                 ecall_trap_ena ;
reg                 cmt_mret_ena   ;
reg                 csr_wr_en      ;
reg                 csr_rd_en      ;
reg   [`ysyx22040228_REGBUS]    wbck_csr_data  ;
reg   [`ysyx22040228_REGBUS]    trap_mcause_value ;

assign trap_pc   = trap_ena ? read_csr_data : `ysyx22040228_ZEROWORD ;
assign trap_able = trap_ena ;

wire [`ysyx22040228_REGBUS] mask_set_res   = read_csr_data | op1_i ;
wire [`ysyx22040228_REGBUS] mask_clear_res = read_csr_data & (~op1_i) ;

 csr csr0 (
     .clk               (clk_in)             ,
     .rst               (rst)                ,

     .pc_i              (pc_i)               ,
     .csr_wr_en         (csr_wr_en)          ,
     .csr_rd_en         (csr_rd_en)          ,
     .csr_idx           (csr_idx)            ,
     
     .cmt_mret_ena      (cmt_mret_ena)       ,
     .ecall_trap_ena    (ecall_trap_ena)     ,
     .trap_mcause_value (trap_mcause_value ) ,

     .tmr_intr_ena      (timer_intr)         ,
     .tmr_trap_ena      (tmr_trap_ena)       , 

     .read_csr_data     (read_csr_data)      ,
     .wbck_csr_data     (wbck_csr_data)      
);
always @(*) begin
    if(~inst_type_i[7]) begin
        csr_wr_en          = `ysyx22040228_WDISABLE    ;
        csr_rd_en          = `ysyx22040228_RDISABLE    ;
        cmt_mret_ena       = 1'b0          ;
        ecall_trap_ena     = 1'b0          ;
        wbck_csr_data      = `ysyx22040228_ZEROWORD    ;
        trap_mcause_value  = `ysyx22040228_ZEROWORD    ;
    end
    else begin
        csr_wr_en          = `ysyx22040228_WDISABLE    ;
        csr_rd_en          = `ysyx22040228_RDISABLE    ;
        cmt_mret_ena       = 1'b0          ;
        ecall_trap_ena     = 1'b0          ;
        wbck_csr_data      = `ysyx22040228_ZEROWORD    ;
        trap_mcause_value  = `ysyx22040228_ZEROWORD    ;
        case (inst_opcode_i)
            `INST_CSRRW,`INST_CSRRWI: begin
                csr_wr_en           = `ysyx22040228_WENABLE   ;
                csr_rd_en           = (rd_addr_o == 5'b0) ?  `ysyx22040228_RDISABLE : `ysyx22040228_RENABLE    ;
                wbck_csr_data       = op1_i          ;
            end 
            `INST_CSRRS,`INST_CSRRSI: begin
                csr_wr_en           = (op1_i == `ysyx22040228_ZEROWORD) ? `ysyx22040228_WDISABLE : `ysyx22040228_WENABLE ;
                csr_rd_en           = `ysyx22040228_RENABLE    ;
                wbck_csr_data       = mask_set_res   ;
            end
            `INST_CSRRC,`INST_CSRRCI: begin
                csr_wr_en           = (op1_i == `ysyx22040228_ZEROWORD) ? `ysyx22040228_WDISABLE : `ysyx22040228_WENABLE ;
                csr_rd_en           = `ysyx22040228_RENABLE    ;
                wbck_csr_data       = mask_clear_res ;
            end
            `INST_ECALL:              begin
                ecall_trap_ena      = 1'b1           ;
                wbck_csr_data       = pc_i           ;
                trap_mcause_value   = 64'd11         ;
            end
            `INST_MRET:               begin
                cmt_mret_ena        = 1'b1           ;
            end   

            default: begin
               csr_wr_en            = `ysyx22040228_WDISABLE ;
               csr_rd_en            = `ysyx22040228_RDISABLE  ;
               cmt_mret_ena         = 1'b0          ;
               ecall_trap_ena       = 1'b0          ;
            end
        endcase
    end
    if(tmr_trap_ena) begin
        csr_wr_en          = `ysyx22040228_WDISABLE ;
        csr_rd_en          = `ysyx22040228_RDISABLE  ;
        cmt_mret_ena       = 1'b0          ;
        ecall_trap_ena     = 1'b0          ;
        wbck_csr_data      = pc_i          ;
        trap_mcause_value  = 64'h8000000000000007;
    end
end
   
endmodule//ex

