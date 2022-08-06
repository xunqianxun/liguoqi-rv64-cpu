/************************************************************
Author:LiGuoqi
data:2021,10.21
Name:decode2.v
Function:Decoding module it is used to parse the key information 
         of the instruction
************************************************************/
/* verilator lint_off UNUSED */
`include "defines.v"
module decode2 (
    //系统输入
    input       wire                                                           rst                 ,
    input       wire         [`ysyx22040228_INSTBUS]                           inst_i              ,
    input       wire         [`ysyx22040228_PCBUS]                             pc_i                ,

    output      wire         [5:0]                                             socreboard_alut     ,
    // regfile
    input       wire         [`ysyx22040228_REGBUS]                            op1_data_i          ,
    input       wire         [`ysyx22040228_REGBUS]                            op2_data_i          ,
    output      wire         [`ysyx22040228_REGADDRBUS]                        op1_addr_o          ,
    output      wire         [`ysyx22040228_REGADDRBUS]                        op2_addr_o          ,
    output      wire                                                           op1_read_o          ,
    output      wire                                                           op2_read_o          ,
    output      wire         [3:0]                                             decode1_addr        ,
    input       wire                                                           phb_data            ,

    // ex 
    input       wire         [`ysyx22040228_PCBUS]                             alu1_pc             ,
    input       wire         [`ysyx22040228_REGBUS]                            alu1_rd_data        ,
    input       wire         [`ysyx22040228_REGADDRBUS]                        alu1_rd_addr        ,
    input       wire                                                           alu1_rd_ena         ,

    input       wire         [`ysyx22040228_PCBUS]                             alu2_pc             ,
    input       wire         [`ysyx22040228_REGBUS]                            alu2_rd_data        ,
    input       wire         [`ysyx22040228_REGADDRBUS]                        alu2_rd_addr        ,
    input       wire                                                           alu2_rd_ena         ,
    // mem 
    input       wire         [`ysyx22040228_PCBUS]                             mem_pc              ,
    input       wire         [`ysyx22040228_REGBUS]                            mem_rd_data         ,
    input       wire         [`ysyx22040228_REGADDRBUS]                        mem_rd_addr         ,
    input       wire                                                           mem_rd_ena          ,

    //regfile(wbm)
    input       wire                                                           wb1_rd_ena          ,
    input       wire         [`ysyx22040228_REGADDRBUS]                        wb1_rd_addr         ,

    input       wire                                                           wb2_rd_ena          ,
    input       wire         [`ysyx22040228_REGADDRBUS]                        wb2_rd_addr         ,

    input       wire                                                           wb3_rd_ena          ,
    input       wire         [`ysyx22040228_REGADDRBUS]                        wb3_rd_addr         ,
    //id_exe
    output      wire         [7:0]                                             inst_type           ,
    output      wire         [7:0]                                             inst_opcode         ,
    output      reg          [`ysyx22040228_REGBUS]                            op1_o               ,
    output      reg          [`ysyx22040228_REGBUS]                            op2_o               ,
    output      wire                                                           rd_w_ena            ,
    output      wire         [`ysyx22040228_REGADDRBUS]                        rd_w_addr           ,
    output      wire         [`ysyx22040228_PCBUS]                             pc_o                ,
    output      wire         [`ysyx22040228_INSTBUS]                           inst_o              ,

    output      wire         [3 :0]                                            jump_addr           ,
    output      wire                                                           jump_data           ,
    output      wire                                                           jump_ena            ,

    output      wire         [`ysyx22040228_DATAADDRBUS]                       mem_op_imm          ,
    output      wire         [2 :0]                                            mem_op_sel          , 
    // to pc and if_id
    output      wire                                                           jump_pc_ena         ,
    output      wire         [`ysyx22040228_PCBUS]                             jump_pc             
);

//I-Type
wire   [ 6:0]   opcode ;
wire   [ 4:0]   rd     ;
wire   [ 2:0]   funct3 ;
wire   [ 4:0]   rs1    ;
wire   [11:0]   imm    ;
assign  opcode   =  inst_i [6:0]    ;
assign  rd       =  inst_i [11:7]   ;
assign  funct3   =  inst_i [14:12]  ;
assign  rs1      = inst_ebreak ? 5'b01011 : inst_i [19:15]  ;
assign  imm      =  inst_i [31:20]  ;

//R-Type

wire   [ 6:0]   funct7 ;
wire   [ 4:0]   rs2    ;
assign  funct7   =  inst_i [31:25]  ;
assign  rs2      =  inst_i [24:20]  ;

//U-Type 
wire   [19:0]    u_imm ;
assign  u_imm    =  inst_i [31:12]  ;

//S_Type 
wire   [11:0]    s_imm ;
assign  s_imm    =  {inst_i[31:25], inst_i[11:7]} ;

//B_Type
wire   [12:1]    b_imm;
assign {b_imm[12] , b_imm[10:5] , b_imm[4:1] , b_imm[11]} = {inst_i[31:25] , inst_i[11:7]} ; 


//*****************decode************************
assign inst_type[7]   =   (rst == `ysyx22040228_RSTENA) ? 0 : ((opcode[6:2] == `ysyx22040228_SYS) | inst_fence_i)       ;
assign inst_type[6]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_REGREGW)                    ;
assign inst_type[5]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_REGIMMW)                    ;
assign inst_type[4]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_REGIMM)                     ;
assign inst_type[3]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_REGREG)                     ;
assign inst_type[2]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_BRANCH)                     ;
assign inst_type[1]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_LOAD) && (opcode[1:0] == 2'b11);
assign inst_type[0]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_STORE)                      ;

wire inst_lui      = (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_LUI)    ;
wire inst_auipc    = (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_AUIPC)  ;
wire inst_jal      = (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_JAL)    ;
wire inst_jalr     = (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_JALR)   ;
wire inst_jump     = inst_jal |inst_jalr    ;

wire inst_addi     = inst_type[4] & ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_slti     = inst_type[4] & ~funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_sltiu    = inst_type[4] & ~funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_xori     = inst_type[4] &  funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_ori      = inst_type[4] &  funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_andi     = inst_type[4] &  funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_slli     = inst_type[4] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_srli     = inst_type[4] &  funct3[2] & ~funct3[1] &  funct3[0] & ~imm[10]   ;
wire inst_srai     = inst_type[4] &  funct3[2] & ~funct3[1] &  funct3[0] &  imm[10]   ;

wire inst_addiw    = inst_type[5] & ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_slliw    = inst_type[5] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_srliw    = inst_type[5] &  funct3[2] & ~funct3[1] &  funct3[0] & ~imm[10]   ;
wire inst_sraiw    = inst_type[5] &  funct3[2] & ~funct3[1] &  funct3[0] &  imm[10]   ;

wire inst_add      = inst_type[3] & ~funct3[2] & ~funct3[1] & ~funct3[0] & ~funct7[5] & ~funct7[0];
wire inst_sub      = inst_type[3] & ~funct3[2] & ~funct3[1] & ~funct3[0] &  funct7[5] & ~funct7[0];
wire inst_sll      = inst_type[3] & ~funct3[2] & ~funct3[1] &  funct3[0] & ~funct7[0] ;
wire inst_slt      = inst_type[3] & ~funct3[2] &  funct3[1] & ~funct3[0] & ~funct7[0] ;
wire inst_sltu     = inst_type[3] & ~funct3[2] &  funct3[1] &  funct3[0] & ~funct7[0]  ;
wire inst_xor      = inst_type[3] &  funct3[2] & ~funct3[1] & ~funct3[0] & ~funct7[0] ;
wire inst_srl      = inst_type[3] &  funct3[2] & ~funct3[1] &  funct3[0] & ~funct7[5] & ~funct7[0];
wire inst_sra      = inst_type[3] &  funct3[2] & ~funct3[1] &  funct3[0] &  funct7[5] & ~funct7[0];
wire inst_or       = inst_type[3] &  funct3[2] &  funct3[1] & ~funct3[0] & ~funct7[0] ;
wire inst_and      = inst_type[3] &  funct3[2] &  funct3[1] &  funct3[0] & ~funct7[0]  ;
wire inst_div      = inst_type[3] &  funct3[2] & ~funct3[1] & ~funct3[0]  & funct7[0] ;
wire inst_divu     = inst_type[3] &  funct3[2] & ~funct3[1] &  funct3[0]  & funct7[0] ;
wire inst_mul      = inst_type[3] &  ~funct3[2] & ~funct3[1] & ~funct3[0] & funct7[0] ;
wire inst_mulh     = inst_type[3] &  ~funct3[2] & ~funct3[1] &  funct3[0] & funct7[0] ;
wire inst_mulhsu   = inst_type[3] &  ~funct3[2] &  funct3[1] & ~funct3[0] & funct7[0] ;
wire inst_mulhu    = inst_type[3] &  ~funct3[2] &  funct3[1] &  funct3[0] & funct7[0] ;
wire inst_rem      = inst_type[3] &  funct3[2] &  funct3[1] & ~funct3[0]  & funct7[0] ;
wire inst_remu     = inst_type[3] &  funct3[2] &  funct3[1] &  funct3[0]  & funct7[0] ;

wire inst_addw     = inst_type[6] & ~funct3[2] & ~funct3[1] & ~funct3[0] & ~imm[10] & ~funct7[0] ;
wire inst_subw     = inst_type[6] & ~funct3[2] & ~funct3[1] & ~funct3[0] &  imm[10] & ~funct7[0] ;
wire inst_sllw     = inst_type[6] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_srlw     = inst_type[6] &  funct3[2] & ~funct3[1] &  funct3[0] & ~imm[10] & ~funct7[0] ;
wire inst_sraw     = inst_type[6] &  funct3[2] & ~funct3[1] &  funct3[0] &  imm[10] & ~funct7[0] ;
wire inst_divuw    = inst_type[6] &  funct3[2] & ~funct3[1] &  funct3[0]  & funct7[0] ;
wire inst_divw     = inst_type[6] &  funct3[2] & ~funct3[1] & ~funct3[0]  & funct7[0] ;
wire inst_mulw     = inst_type[6] &  ~funct3[2] & ~funct3[1] & ~funct3[0] & funct7[0] ;
wire inst_remuw    = inst_type[6] &  funct3[2] &  funct3[1] &  funct3[0]  & funct7[0] ;
wire inst_remw     = inst_type[6] &  funct3[2] &  funct3[1] & ~funct3[0]  & funct7[0] ;

wire inst_beq      = inst_type[2] & ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_ben      = inst_type[2] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_blt      = inst_type[2] &  funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_bge      = inst_type[2] &  funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_bltu     = inst_type[2] &  funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_bgeu     = inst_type[2] &  funct3[2] &  funct3[1] &  funct3[0]   ;

wire inst_csrrw    = inst_type[7] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_csrrs    = inst_type[7] & ~funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_csrrc    = inst_type[7] & ~funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_csrrwi   = inst_type[7] &  funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_csrrsi   = inst_type[7] &  funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_csrrci   = inst_type[7] &  funct3[2] &  funct3[1] &  funct3[0]   ;


wire inst_csr_rs1  = inst_csrrw | inst_csrrs | inst_csrrc    ;
wire inst_csr_imm  = inst_csrrwi | inst_csrrsi | inst_csrrci ;

wire inst_ecall    = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] && (imm == 12'd0)         ;
wire inst_ebreak   = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] && (imm == 12'd1)         ;
wire inst_mret     = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] && (funct7 == 7'b0011000) ;
wire inst_fence_i  = ~funct3[2] & ~funct3[1] & funct3[0] & (opcode == 7'b0000111);


assign inst_opcode[0] = (rst == `ysyx22040228_RSTENA) ? 0 :  inst_csrrc  | inst_beq  | inst_addi | inst_srai | inst_slt  | inst_sra  | inst_auipc | inst_slliw | inst_subw | inst_divuw  | inst_divw  | inst_rem    | inst_remu  | inst_remuw  | inst_remw  | inst_ebreak ;
assign inst_opcode[1] = (rst == `ysyx22040228_RSTENA) ? 0 :  inst_csrrwi | inst_ben  | inst_slti | inst_srai | inst_sltu | inst_or   | inst_jal   | inst_sraiw | inst_sllw | inst_mul    | inst_div   | inst_divu   | inst_remuw | inst_remw   | inst_ebreak  ;
assign inst_opcode[2] = (rst == `ysyx22040228_RSTENA) ? 0 :  inst_csrrsi | inst_blt  | inst_sltiu| inst_add  | inst_slt  | inst_and  | inst_jalr  | inst_sraiw | inst_srlw | inst_mul    | inst_mulh  | inst_div    | inst_divuw | inst_remu   | inst_ebreak  ;
assign inst_opcode[3] = (rst == `ysyx22040228_RSTENA) ? 0 :  inst_csrrci | inst_bge  | inst_xori | inst_add  | inst_sltu | inst_lui  | inst_addiw | inst_slliw | inst_sraw | inst_mul    | inst_mulh  | inst_mulhsu | inst_divu  | inst_fence_i               ;
assign inst_opcode[4] = (rst == `ysyx22040228_RSTENA) ? 0 :  inst_ecall  | inst_bltu | inst_ori  | inst_sub  | inst_xor  | inst_sra  | inst_addiw | inst_srliw | inst_sllw | inst_mulh   | inst_mulhsu| inst_mulhu  | inst_divu  | inst_divw   | inst_remw    ;
assign inst_opcode[5] = (rst == `ysyx22040228_RSTENA) ? 0 :  inst_mret   | inst_bgeu | inst_andi | inst_sub  | inst_srl  | inst_or   | inst_jalr  | inst_addw  | inst_subw | inst_mulhsu | inst_mulhu | inst_mulw   | inst_divuw | inst_fence_i               ;
assign inst_opcode[6] = (rst == `ysyx22040228_RSTENA) ? 0 :              | inst_csrrw| inst_slli | inst_sll  | inst_xor  | inst_and  | inst_jal   | inst_addw  | inst_sraw | inst_mulhu  | inst_mulw  | inst_divu   | inst_rem   | inst_remuw  | inst_divw    ;
assign inst_opcode[7] = (rst == `ysyx22040228_RSTENA) ? 0 :              | inst_csrrs| inst_srli | inst_sll  | inst_srl  | inst_lui  | inst_auipc | inst_srliw | inst_srlw | inst_mulw   | inst_div   | inst_rem    | inst_remu  | inst_fence_i               ;




assign pc_o   = (rst == `ysyx22040228_RSTENA) ? `ysyx22040228_ZEROWORD : pc_i ;
assign inst_o = (rst == `ysyx22040228_RSTENA) ? 32'b0 : inst_i ;

assign op1_read_o = 1'b0 | inst_type[6] | inst_type[5] | inst_type[4] | inst_type[3] | inst_type[2] | inst_type[1] | inst_type[0] | inst_csr_rs1 | inst_jalr;
assign op1_addr_o = op1_read_o ? rs1 : 5'd0  ;

assign op2_read_o = 1'b0 | inst_type[6] | inst_type[3] | inst_type[2] | inst_type[0] ;
assign op2_addr_o = op2_read_o ? rs2 : 5'd0  ;

assign rd_w_ena   = (inst_type[7] |inst_type[6] | inst_type[5] | inst_type[4] | inst_type[3] | inst_type[1] | inst_lui | inst_auipc | inst_jump | inst_ebreak) ; 
assign rd_w_addr  = rd_w_ena ? ((inst_ebreak)? 5'b01011 : rd) : 5'd0     ; //difftest

wire   [11:0] store_addr_offset ;
assign store_addr_offset = inst_type[1] ?   imm :
                           inst_type[0] ? s_imm :
                                          12'b0 ;

assign mem_op_imm = (inst_type[1]|inst_type[0]) ? (op1_o + {{52{store_addr_offset[11]}},store_addr_offset}) : `ysyx22040228_ZEROWORD ;

assign mem_op_sel = (rst == `ysyx22040228_RSTENA) ? 3'b000 : funct3 ;

//data hazard
wire alu1_op1 ;
wire alu2_op1 ;
wire opselcet1;
wire opselcet2;
wire mem_op1  ; 
wire mem_select1; 
wire mem_select2;
assign opselcet1 = (alu1_pc > alu2_pc) && (alu1_op1 && alu2_op1);
assign opselcet2 = (alu1_pc < alu2_pc) && (alu1_op1 && alu2_op1);
assign alu1_op1  = (alu1_rd_addr == op1_addr_o) && alu1_rd_ena  ;
assign alu2_op1  = (alu2_rd_addr == op1_addr_o) && alu2_rd_ena  ; 
assign mem_op1    = (mem_rd_addr == op1_addr_o) && mem_rd_ena      ;
assign mem_select1= (mem_pc < alu1_pc) && (alu1_op1 && mem_op1)    ;
assign mem_select2= (mem_pc < alu2_pc) && (alu2_op1 && mem_op1)    ;

always @(*) begin
  if(rst == `ysyx22040228_RSTENA)      begin op1_o = `ysyx22040228_ZEROWORD; end 
  else if(op1_read_o)
  begin 
    if(opselcet1)                      begin op1_o = alu1_rd_data   ;   end
    else if(opselcet2)                 begin op1_o = alu2_rd_data   ;   end
    else if(alu1_op1 | mem_select1)    begin op1_o = alu1_rd_data   ;   end 
    else if(alu2_op1 | mem_select2)    begin op1_o = alu2_rd_data   ;   end     
    else if(mem_op1)                   begin op1_o = mem_rd_data    ;   end
    else                               begin op1_o = op1_data_i     ;   end 
  end
  else if(inst_auipc|inst_jal)         begin op1_o = pc_i             ;   end
  else if(inst_csr_imm)                begin op1_o = {{59{1'b0}},rs1} ;   end
  else                                 begin op1_o = `ysyx22040228_ZEROWORD ; end    
end

wire alu1_op2 ;
wire alu2_op2 ;
wire opselceto;
wire opselcett;
wire mem_op2  ; 
wire mem_selecto; 
wire mem_selectt;
assign opselceto = (alu1_pc > alu2_pc) && (alu1_op2 && alu2_op2);
assign opselcett = (alu1_pc < alu2_pc) && (alu1_op2 && alu2_op2);
assign alu1_op2  = (alu1_rd_addr == op2_addr_o) && alu1_rd_ena  ;
assign alu2_op2  = (alu2_rd_addr == op2_addr_o) && alu2_rd_ena  ; 
assign mem_op2    = (mem_rd_addr == op2_addr_o) && mem_rd_ena      ;
assign mem_selecto= (mem_pc < alu1_pc) && (alu1_op2 && mem_op2)    ;
assign mem_selectt= (mem_pc < alu2_pc) && (alu2_op2 && mem_op2)    ;

always @(*) begin
  if(rst == `ysyx22040228_RSTENA) begin op2_o = `ysyx22040228_ZEROWORD; end 
  else if(op2_read_o)
  begin
    if(opselceto)                      begin op2_o = alu1_rd_data   ;   end
    else if(opselcett)                 begin op2_o = alu2_rd_data   ;   end
    else if(alu1_op2 | mem_selecto)    begin op2_o = alu1_rd_data   ;   end 
    else if(alu2_op2 | mem_selectt)    begin op2_o = alu2_rd_data   ;   end     
    else if(mem_op2)                   begin op2_o = mem_rd_data    ;   end
    else                               begin op2_o = op2_data_i     ;   end
  end
  else if(inst_type[4] |inst_type[5] |inst_type[7]) begin op2_o = {{52{imm[11]}},imm}     ; end
  else if(inst_lui|inst_auipc)                      begin op2_o = {{44{u_imm[19]}},u_imm} ; end
  else if(inst_jump)                                begin op2_o = pc_i                    ; end 
  else                                              begin op2_o = `ysyx22040228_ZEROWORD  ; end    
end

wire wb1_op1 ;
wire wb2_op1 ;
wire wb3_op1 ;
assign wb1_op1 = (wb1_rd_addr == op1_addr_o) && wb1_rd_ena ;
assign wb2_op1 = (wb2_rd_addr == op1_addr_o) && wb2_rd_ena ;
assign wb3_op1 = (wb3_rd_addr == op1_addr_o) && wb3_rd_ena ;
assign decode1_addr = inst_i[5:2]                         ;
reg                forcast_state                          ;
reg                data_jf                                ;
wire  [`ysyx22040228_REGBUS]  op1_sub_op2 = op1_o  + (~op2_o + 64'd1) ;
wire     op1_ls_op2 = (op1_o[63] && ~op2_o[63]) || (~op1_o[63] && ~op2_o[63] && op1_sub_op2[63]) || (op1_o[63] && op2_o[63] && op1_sub_op2[63]) ;
always @(*) begin
    if(~inst_type[2])  begin forcast_state = 1'b1  ;    end
    else begin
        case (inst_opcode) 
             `INST_BEQ     : begin  forcast_state = ((op1_o == op2_o) ^ phb_data) ? 1'b1 : 1'b0 ; data_jf= (op1_o == op2_o);  end
             `INST_BNE     : begin  forcast_state = ((op1_o != op2_o) ^ phb_data) ? 1'b1 : 1'b0 ; data_jf= (op1_o != op2_o);  end
             `INST_BLTU    : begin  forcast_state = ((op1_o <  op2_o) ^ phb_data) ? 1'b1 : 1'b0 ; data_jf= (op1_o <  op2_o);  end
             `INST_BGEU    : begin  forcast_state = ((op1_o >= op2_o) ^ phb_data) ? 1'b1 : 1'b0 ; data_jf= (op1_o >= op2_o);  end
             `INST_BLT     : begin  forcast_state = (( op1_ls_op2   ) ^ phb_data) ? 1'b1 : 1'b0 ; data_jf= (op1_ls_op2    );  end
             `INST_BGE     : begin  forcast_state = ((~op1_ls_op2   ) ^ phb_data) ? 1'b1 : 1'b0 ; data_jf= (~op1_ls_op2   );  end
             default:        begin  forcast_state = 1'b1                                        ; end 
        endcase
    end
end

wire                            branch_pc_ena                    ;
wire  [`ysyx22040228_PCBUS]     branch_pc                        ;
wire                            jalr_pc_ena                      ;
wire  [`ysyx22040228_PCBUS]     jalr_pc                          ;
assign branch_pc_ena = (forcast_state == 1'b0)                   ;
assign branch_pc     = (forcast_state == 1'b0) ? (phb_data ? pc_i + 64'd4 : ({{52{b_imm[12]}} , b_imm[12:1] << 1} + pc_i)) :
                                                                                                   `ysyx22040228_ZEROWORD  ;

wire [`ysyx22040228_PCBUS] jalr_pc_temp = {{52{imm[11]}} , imm} + op1_o ;
wire predict_success = ~alu1_op1 & ~alu2_op1 & ~mem_op1 & ~wb1_op1 & ~wb2_op1 & ~wb3_op1;

assign jalr_pc_ena = (rst == `ysyx22040228_RSTENA) ? 0 : inst_jalr && ~predict_success ;
assign jalr_pc     = inst_jalr ? {jalr_pc_temp[63:1] , 1'b0 & jalr_pc_temp[0]} : `ysyx22040228_ZEROWORD ;

assign jump_pc_ena     =  branch_pc_ena ?  1'b1  :
                          jalr_pc_ena   ?  1'b1  :
                                           1'b0  ;

assign jump_pc         =  branch_pc_ena ?  branch_pc :
                          jalr_pc_ena   ?  jalr_pc   :
                             `ysyx22040228_ZEROWORD  ; 


assign socreboard_alut[0] = inst_div | inst_divu | inst_mul | inst_mulh | inst_mulhsu | inst_mulhu | inst_rem | inst_remu | inst_divuw | inst_divw | inst_mulw | inst_remuw | inst_remw ;
assign socreboard_alut[1] = inst_type[0] | inst_type[1] ;
assign socreboard_alut[2] = inst_type[7]                ;
assign socreboard_alut[3] = inst_jump | inst_type[2]    ;
assign socreboard_alut[4] = inst_type[4] | inst_type[5] | inst_sraw | inst_srlw | inst_sllw | inst_subw | inst_addw | inst_and | inst_or | inst_sra | inst_srl | inst_xor | inst_sltu | 
                            inst_slt     | inst_sll     | inst_sub  | inst_add  |inst_lui   | inst_auipc| inst_fence_i | inst_ebreak ;
assign socreboard_alut[5] = inst_ecall   | inst_mret    ;

assign jump_addr  = pc_i[5:2]    ;
assign jump_ena   = inst_type[2] ;
assign jump_data  = data_jf      ;

endmodule //id

