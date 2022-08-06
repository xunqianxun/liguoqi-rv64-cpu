/************************************************************
Author:LiGuoqi
Name:pc.v
Function: pc 
************************************************************/
/* verilator lint_off UNUSED */
`include "defines.v"
module PC (
    input          wire                                     clk           ,
    input          wire                                     rst           ,
    input          wire      [127:0]                        inst_i        , 
    input          wire                                     cache_un_ready,
    output         wire                                     pc_ready      , 
    output         wire      [3:0]                          if_thispcj    ,   

    input          wire                                     decode1_ena   ,
    input          wire      [`ysyx22040228_PCBUS]          decode1_pc    ,
    input          wire                                     decode2_ena   ,
    input          wire      [`ysyx22040228_PCBUS]          decode2_pc    ,
    input          wire                                     trap_ena      ,
    input          wire      [`ysyx22040228_PCBUS]          trap_pc       ,

    output         wire      [3:0]                          phb_addr      ,
    input          wire                                     phb_ena       ,

    output         wire      [4:0]                          jreg_addr     ,
    output         wire                                     jreg_ena      ,
    input          wire      [`ysyx22040228_DATABUS]        jreg_data     ,

    output         reg       [2:0]                          pc_counter    ,
    output         reg       [`ysyx22040228_PCBUS]          pc                           
);
    wire [31:0]  inst1 = inst_i[31:0 ]  ;
    wire [31:0]  inst2 = inst_i[63:32]  ;
    wire [31:0]  inst3 = inst_i[95:64]  ;
    wire [31:0]  inst4 = inst_i[127:96] ;
    wire   [20:1] j_imm1;
    assign {j_imm1[20] , j_imm1[10:1] , j_imm1[11] , j_imm1[19:12]} = inst1[31:12];
    wire   [11:0] i_imm1;
    assign i_imm1 = inst1[31:20];
    wire   [12:1] b_imm1;
    assign {b_imm1[12] , b_imm1[10:5] , b_imm1[4:1] , b_imm1[11]} = {inst1[31:25] , inst1[11:7]} ; 

    wire   [20:1] j_imm2;
    assign {j_imm2[20] , j_imm2[10:1] , j_imm2[11] , j_imm2[19:12]} = inst2[31:12];
    wire   [11:0] i_imm2;
    assign i_imm2 = inst2[31:20];
    wire   [12:1] b_imm2;
    assign {b_imm2[12] , b_imm2[10:5] , b_imm2[4:1] , b_imm2[11]} = {inst2[31:25] , inst2[11:7]} ; 

    wire   [20:1] j_imm3;
    assign {j_imm3[20] , j_imm3[10:1] , j_imm3[11] , j_imm3[19:12]} = inst3[31:12];
    wire   [11:0] i_imm3;
    assign i_imm3 = inst3[31:20];
    wire   [12:1] b_imm3;
    assign {b_imm3[12] , b_imm3[10:5] , b_imm3[4:1] , b_imm3[11]} = {inst3[31:25] , inst3[11:7]} ; 

    wire   [20:1] j_imm4;
    assign {j_imm4[20] , j_imm4[10:1] , j_imm4[11] , j_imm4[19:12]} = inst4[31:12];
    wire   [11:0] i_imm4;
    assign i_imm4 = inst4[31:20];
    wire   [12:1] b_imm4;
    assign {b_imm4[12] , b_imm4[10:5] , b_imm4[4:1] , b_imm4[11]} = {inst4[31:25] , inst4[11:7]} ; 

    assign jreg_addr  = inst_jalr1 ? inst1[19:15]: 
                        inst_jalr2 ? inst2[19:15]: 
                        inst_jalr3 ? inst3[19:15]: 
                        inst_jalr4 ? inst4[19:15]: 
                                     5'b00000    ;
    assign jreg_ena  =  inst_jalr1 ? 1'b1        : 
                        inst_jalr2 ? 1'b1        : 
                        inst_jalr3 ? 1'b1        : 
                        inst_jalr4 ? 1'b1        : 
                                     1'b0        ; 

    wire [6:0] opcode1;
    assign opcode1    = inst1[6:0];

    wire [6:0] opcode2;
    assign opcode2    = inst2[6:0];

    wire [6:0] opcode3;
    assign opcode3    = inst3[6:0];

    wire [6:0] opcode4;
    assign opcode4    = inst4[6:0];

    wire inst_jal1  ;
    wire inst_jalr1 ;
    wire inst_bxx1  ;
    assign inst_jal1  = (opcode1[6:2] == `ysyx22040228_JAL) && (opcode1[1:0] == 2'b11)  ;
    assign inst_jalr1 = (opcode1[6:2] == `ysyx22040228_JALR) && (opcode1[1:0] == 2'b11) ;
    assign inst_bxx1  = (opcode1[6:2] == `ysyx22040228_BRANCH) && (opcode1[1:0] == 2'b11)   ; 

    wire inst_jal2  ;
    wire inst_jalr2 ;
    wire inst_bxx2  ;
    assign inst_jal2  = (opcode2[6:2] == `ysyx22040228_JAL) && (opcode2[1:0] == 2'b11)  ;
    assign inst_jalr2 = (opcode2[6:2] == `ysyx22040228_JALR) && (opcode2[1:0] == 2'b11) ;
    assign inst_bxx2  = (opcode2[6:2] == `ysyx22040228_BRANCH) && (opcode2[1:0] == 2'b11)   ; 

    wire inst_jal3  ;
    wire inst_jalr3 ;
    wire inst_bxx3  ;
    assign inst_jal3  = (opcode3[6:2] == `ysyx22040228_JAL) && (opcode3[1:0] == 2'b11)  ;
    assign inst_jalr3 = (opcode3[6:2] == `ysyx22040228_JALR) && (opcode3[1:0] == 2'b11) ;
    assign inst_bxx3  = (opcode3[6:2] == `ysyx22040228_BRANCH) && (opcode3[1:0] == 2'b11)   ; 

    wire inst_jal4  ;
    wire inst_jalr4 ;
    wire inst_bxx4  ;
    assign inst_jal4  = (opcode4[6:2] == `ysyx22040228_JAL) && (opcode4[1:0] == 2'b11)  ;
    assign inst_jalr4 = (opcode4[6:2] == `ysyx22040228_JALR) && (opcode4[1:0] == 2'b11) ;
    assign inst_bxx4  = (opcode4[6:2] == `ysyx22040228_BRANCH) && (opcode4[1:0] == 2'b11)   ; 

    wire  [`ysyx22040228_PCBUS] pc1 = pc     ;
    wire  [`ysyx22040228_PCBUS] pc2 = pc + 4 ;
    wire  [`ysyx22040228_PCBUS] pc3 = pc + 8 ;
    wire  [`ysyx22040228_PCBUS] pc4 = pc + 12;
    assign phb_addr = inst_bxx1 ? pc1[5:2]: 
                      inst_bxx2 ? pc2[5:2]: 
                      inst_bxx3 ? pc3[5:2]: 
                      inst_bxx4 ? pc4[5:2]: 
                                  4'b0000 ;

    wire [63:0] operand1;
    wire [63:0] operand2;
    assign operand1 = ((inst_jal1)|(inst_bxx1)) ? pc        :
                      inst_jalr1                ? jreg_data : 
                      ((inst_jal2)|(inst_bxx2)) ? pc+4      : 
                      inst_jalr2                ? jreg_data :
                      ((inst_jal3)|(inst_bxx3)) ? pc+8      :
                      inst_jalr4                ? jreg_data :
                      ((inst_jal4)|(inst_bxx4)) ? pc+12 : pc;
    assign operand2 = inst_jal1                ? {{44{j_imm1[20]}} , j_imm1[20:1] << 1} :
                      (inst_bxx1 && phb_ena)   ? {{52{b_imm1[12]}} , b_imm1[12:1] << 1} :
                      inst_jalr1               ? {{52{i_imm1[11]}} , i_imm1[11:0]}      :
                      inst_jal2                ? {{44{j_imm2[20]}} , j_imm2[20:1] << 1} :
                      (inst_bxx2 && phb_ena)   ? {{52{b_imm2[12]}} , b_imm2[12:1] << 1} :
                      inst_jalr2               ? {{52{i_imm2[11]}} , i_imm2[11:0]}      :
                      inst_jal3                ? {{44{j_imm3[20]}} , j_imm3[20:1] << 1} :
                      (inst_bxx3 && phb_ena)   ? {{52{b_imm3[12]}} , b_imm3[12:1] << 1} :
                      inst_jalr3               ? {{52{i_imm3[11]}} , i_imm3[11:0]}      :
                      inst_jal4                ? {{44{j_imm4[20]}} , j_imm4[20:1] << 1} :
                      (inst_bxx4 && phb_ena)   ? {{52{b_imm4[12]}} , b_imm4[12:1] << 1} :
                      inst_jalr4               ? {{52{i_imm4[11]}} , i_imm4[11:0]}      :                    
                      (rst ===`ysyx22040228_RSTENA) ?               `ysyx22040228_THISPC:
                                                                    64'hf               ; 
    wire [`ysyx22040228_PCBUS] j_temp = operand1 + operand2 ;
    wire [`ysyx22040228_PCBUS] forc_jumppc                  ;
    assign forc_jumppc = (rst == `ysyx22040228_RSTENA)                     ? `ysyx22040228_ZEROWORD:
                         inst_jalr1 | inst_jalr2 | inst_jalr3 | inst_jalr4 ? {j_temp[63:1], 1'b0}  :
                                                                             j_temp                ;

    wire   jump_ena1 ;
    wire   jump_ena2 ;
    wire   jump_ena3 ;
    wire   jump_ena4 ;
    assign jump_ena1 = inst_jal1 | (inst_bxx1 && phb_ena) | inst_jalr1 ;
    assign jump_ena2 = inst_jal2 | (inst_bxx2 && phb_ena) | inst_jalr2 ;
    assign jump_ena3 = inst_jal3 | (inst_bxx3 && phb_ena) | inst_jalr3 ;
    assign jump_ena4 = inst_jal4 | (inst_bxx4 && phb_ena) | inst_jalr4 ;

   // wire  [3:0]  if_thispcj ;
    assign       if_thispcj = jump_ena1 ? 4'b1110 :
                              jump_ena2 ? 4'b1100 :
                              jump_ena3 ? 4'b1000 :
                              jump_ena4 ? 4'b0000 :
                                          4'b0000 ;

    wire  [2:0] pc_counter_temp ;
    assign      pc_counter_temp = (jump_ena1 | jump_ena2 | jump_ena3 | jump_ena4) ? ((forc_jumppc[3:0] == 0) ? 3'd4 :
                                                                                     (forc_jumppc[3:0] == 4) ? 3'd3 :
                                                                                     (forc_jumppc[3:0] == 8) ? 3'd2 :
                                                                                     (forc_jumppc[3:0] == 12)? 3'd1 :
                                                                                                               3'd4):
                                  (pc_jnxtpc_temp[3:0] == 12) ? 3'd1 :
                                  (pc_jnxtpc_temp[3:0] == 8)  ? 3'd2 :
                                  (pc_jnxtpc_temp[3:0] == 4)  ? 3'd3 :
                                  (pc_jnxtpc_temp[3:0] == 0)  ? 3'd4 :
                                                    3'd4 ; 
    wire  [4:0] pc_nextpc_temp ;
    assign      pc_nextpc_temp  = (pc[3:0] == 0)  ? 5'd16 :
                                  (pc[3:0] == 4)  ? 5'd12 :
                                  (pc[3:0] == 8)  ? 5'd8  :
                                  (pc[3:0] == 12) ? 5'd4  :
                                                    5'd0  ; 
    wire  [`ysyx22040228_PCBUS]   pc_jnxtpc_temp ;
    assign      pc_jnxtpc_temp  =  (jump_ena1 | jump_ena2 | jump_ena3 | jump_ena4) ? forc_jumppc : pc + {58'h0, pc_nextpc_temp} ;

    wire cache_ready = ~cache_un_ready;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            pc <= 64'h0000000080000000 ;
            pc_counter <= 3'd4         ;
        end 
        else begin
            if(cache_ready == 1'b1) begin
                pc <= pc              ;
            end 
            else if((cache_ready == 1'b0) && (decode1_ena)) begin
                pc         <= decode1_pc         ;
                pc_counter <= pc_counter_temp    ;
            end 
            else if((cache_ready == 1'b0) && (decode2_ena)) begin 
                pc         <= decode2_pc         ;
                pc_counter <= pc_counter_temp    ;
            end    
            else if((cache_ready == 1'b0) && (trap_ena)) begin
                pc         <= trap_pc            ;
                pc_counter <= pc_counter_temp    ;
             
            end 
            else if((cache_ready == 1'b0) && (pc_temp_ena)) begin 
                pc         <= pc_temp            ;
                pc_counter <= pc_counter_temp    ;
            end 
            else begin
                pc         <= pc_jnxtpc_temp     ;
                pc_counter <= pc_counter_temp    ;
            end 
        end 
    end

    reg  [63:0] pc_temp     ;
    reg         pc_temp_ena ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            pc_temp_ena <= 1'b0                  ;
            pc_temp     <= `ysyx22040228_ZEROWORD;
        end 
        else if((cache_ready) && (decode1_ena))begin
            pc_temp     <= decode1_pc            ;
            pc_temp_ena <= 1'b1                  ;
        end 
        else if((cache_ready) && (decode2_ena))begin
            pc_temp     <= decode2_pc            ;
            pc_temp_ena <= 1'b1                  ;
        end 
        else if((cache_ready) && (trap_ena))begin
            pc_temp     <= trap_pc                ;
            pc_temp_ena <= 1'b1                  ;
        end 
        else if(cache_ready == 1'b0) begin
            pc_temp     <= `ysyx22040228_ZEROWORD;
            pc_temp_ena <= 1'b0                  ;
        end 
    end

    assign pc_ready       = (rst != `ysyx22040228_RSTENA) ;
endmodule
