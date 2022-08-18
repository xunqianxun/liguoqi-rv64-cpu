/************************************************************
Author:LiGuoqi
data:2021,10.21
Name:rvcpu.v
Function:Core top level module
************************************************************/
`include "PC.v"
`include "issuequeue.v"
`include "decode1.v"
`include "decode2.v"
`include "decode_exe.v"
`include "ALUO.v"
`include "ALUT.v"
`include "MMU.v"
`include "ex_submit"
`include "PHB.v"
`include "regsfile.v"
`include "socreboard.v"
`include "defines.v"
module rvcpu (
    input       wire                                    clk           ,
    input       wire                                    rst           ,

    output      wire       [`ysyx22040228_PCBUS]       inst_addr      ,
    output      wire       [2:0]                       inst_counter   ,
    output      wire                                   inst_ready     ,  
    input       wire       [127:0]                     inst_data      ,
    input       wire       [255:0]                     inst_pc        ,
    input       wire                                   cache_unready  ,
    input       wire                                   cache_data_ok  ,
    output      wire                                   issu_empty     ,                                                               

    output      wire       [`ysyx22040228_DATAADDRBUS] mem_addr_o     ,
    output      wire       [`ysyx22040228_REGBUS]      mem_data_o     ,
    output      wire       [7:0]                       mem_strb_o     ,
    input       wire       [`ysyx22040228_REGBUS]      mem_data_i     ,
    output      wire                                   write_ena      ,
    output      wire                                   read_ena       ,
    output      wire       [2:0]                       w_type_sel     ,
    output      wire       [2:0]                       r_type_sel     ,
    inout       wire                                   mem_finish_i   ,

    output      wire                                   inst_fence     ,

    input       wire                                   timer_initin   
);
    //about pc
    wire                              aluo_de_ena    ;
    wire  [`ysyx22040228_PCBUS]       aluo_de_pc     ;
    wire  [3:0]                       pc_phb_addr    ;
    wire                              phb_pc_ena     ;
    wire  [`ysyx22040228_REGADDRBUS]  pc_regsf_addr  ;
    wire                              pc_regsf_ena   ;
    wire  [`ysyx22040228_REGBUS]      regsf_pc_data  ;
    wire  [3:0]                       check_pcif     ;

    PC instfact(
    .clk             (clk              ),
    .rst             (rst              ),
    .inst_i          (inst_data        ), 
    .cache_un_ready  (cache_unready    ),
    .pc_ready        (inst_ready       ),
    .if_thispcj      (check_pcif       ) ,

    .decode1_ena     (jump1_ena        ),
    .decode1_pc      (jump1_pc         ),
    .decode2_ena     (jump2_ena        ),
    .decode2_pc      (jump2_pc         ),
    .trap_ena        (ao_pc_ena        ),
    .trap_pc         (ao_pc_pc         ),

    .phb_addr        (pc_phb_addr      ),
    .phb_ena         (phb_pc_ena       ),

    .jreg_addr       (pc_regsf_addr    ),
    .jreg_ena        (pc_regsf_ena     ),
    .jreg_data       (regsf_pc_data    ),

    .pc_counter      (inst_counter     ),
    .pc              (inst_addr        )
    );

    //about phb
    wire                  phb_de1_out  ;
    wire                  phb_de2_out  ;
    PHB forecast(
    .clk             (clk              ),

    .pc1_in          (pc_phb_addr      ),
    .jump1_ena       (phb_pc_ena       ),

    .decode1_read    (de1_phb_deaddr   ),
    .decode1_data    (phb_de1_out      ),

    .decode2_read    (de2_phb_deaddr   ),
    .decode2_data    (phb_de2_out      ),

    .decode1_waddr   (de1_phb_addr    ),
    .decode1_wena    (de1_phb_ena     ),
    .decode1_wdata   (de1_phb_data    ),

    .decode2_waddr   (de2_phb_addr    ),
    .decode2_wena    (de2_phb_ena     ),
    .deocde2_wdata   (de2_phb_data    )
    );
    //about issuequeue
    wire    [`ysyx22040228_PCBUS]    iss_de1_pc   ;
    wire    [`ysyx22040228_INSTBUS]  iss_de1_inst ;    
    wire    [`ysyx22040228_PCBUS]    iss_de2_pc   ;
    wire    [`ysyx22040228_INSTBUS]  iss_de2_inst ;        
    issuequeue inst8(
    .clk             (clk             ),
    .rst             (rst             ),

    .pc              (inst_pc         ),
    .inst            (inst_data       ),
    .cache_data_in   (cache_data_ok   ),
    .check_cleanj    (check_pcif      ) ,

    .decode1_j_bad   (jump1_ena       ),
    .decide2_j_bad   (jump2_ena       ),
    .interrupt_terp  (ao_pc_ena       ),

    .stop1           (so_isu_stop1    ),
    .stop2           (so_isu_stop2    ),
    .trap_nop1       (so_isu_nop1ena  ),
    .trap_nop2       (so_isu_nop2ena  ),

    .accept_icache   (issu_empty      ),
    .pc_decode1      (iss_de1_pc      ),
    .inst_decode1    (iss_de1_inst    ),

    .pc_decode2      (iss_de2_pc      ),
    .inst_decode2    (iss_de2_inst    )
    );

    //about decode1 
    wire  [`ysyx22040228_REGADDRBUS] de1_ref_op1addr ;
    wire  [`ysyx22040228_REGADDRBUS] de1_ref_op2addr ;
    wire                             de1_ref_op1ena  ;
    wire                             de1_ref_op2ena  ;
    wire  [3:0]                      de1_phb_deaddr  ;
    wire  [7:0]                      de1_deex_type   ;
    wire  [7:0]                      de1_deex_opcode ;
    wire  [`ysyx22040228_REGBUS]     de1_deex_op1    ;
    wire  [`ysyx22040228_REGBUS]     de1_deex_op2    ;
    wire                             de1_deex_ena    ;
    wire  [`ysyx22040228_REGADDRBUS] de1_deex_addr   ;
    wire  [`ysyx22040228_PCBUS]      de1_deex_pc     ;
    wire  [`ysyx22040228_INSTBUS]    de1_deex_inst   ;
    wire  [`ysyx22040228_DATAADDRBUS]de1_deex_imm    ;
    wire  [2:0]                      de1_deex_sel    ;
    wire  [`ysyx22040228_PCBUS]      jump1_pc        ;
    wire                             jump1_ena       ;
    wire                             jump1_flush     ;
    wire  [5:0]                      de1_so_type     ;
    wire  [3:0]                      de1_phb_addr    ;
    wire                             de1_phb_ena     ;
    wire                             de1_phb_data    ;
    decode1 decode_uo(
    .rst             (rst             ),
    .inst_i          (iss_de1_inst    ),
    .pc_i            (iss_de1_pc      ),

    .socreboard_aluo (de1_so_type     ),
    .socreboard_clean(so_idex_cleano  ),
    // regfile
    .op1_data_i      (regs11_out_data ),
    .op2_data_i      (regs12_out_data ),
    .op1_addr_o      (de1_ref_op1addr ),
    .op2_addr_o      (de1_ref_op2addr ),
    .op1_read_o      (de1_ref_op1ena  ),
    .op2_read_o      (de1_ref_op2ena  ),
    .decode1_addr    (de1_phb_deaddr  ),
    .phb_data        (phb_de1_out     ),

    .alu1_pc         (ao_su_pc         ),
    .alu1_rd_data    (ao_su_data       ),
    .alu1_rd_addr    (ao_su_addr       ),
    .alu1_rd_ena     (ao_su_ena        ),

    .alu2_pc         (at_su_pc         ),
    .alu2_rd_data    (at_su_data       ),
    .alu2_rd_addr    (at_su_addr       ),
    .alu2_rd_ena     (at_su_ena        ),
    // mem 
    .mem_pc          (mm_su_pc         ),
    .mem_rd_data     (mm_su_data       ),
    .mem_rd_addr     (mm_su_addr       ),
    .mem_rd_ena      (mm_su_ena        ),

    //regfile(wbm)
    .wb1_rd_ena      (s_r_ao_ena      ),
    .wb1_rd_addr     (s_r_ao_addr     ),
    .wb1_rd_data     (s_r_ao_dara     ),

    .wb2_rd_ena      (s_r_at_ena      ),
    .wb2_rd_addr     (s_r_at_addr     ),
    .wb2_rd_data     (s_r_at_dara     ),

    .wb3_rd_ena      (s_r_mm_ena      ),
    .wb3_rd_addr     (s_r_mm_addr     ),
    .wb3_rd_data     (s_r_mm_dara     ),

    .commit1_ena     (comt_de_ena0    ),
    .commit1_addr    (comt_de_addr0   ),
    .commit1_data    (comt_de_data0   ),

    .commit2_ena     (comt_de_ena1    ),
    .commit2_addr    (comt_de_addr1   ),
    .commit2_data    (comt_de_data1   ),

    .commit3_ena     (comt_de_ena2    ),
    .commit3_addr    (comt_de_addr2   ),
    .commit3_data    (comt_de_data2   ),

    .commit4_ena     (comt_de_ena3    ),
    .commit4_addr    (comt_de_addr3   ),
    .commit4_data    (comt_de_data3   ), 

    .commit5_ena     (comt_de_ena4    ),
    .commit5_addr    (comt_de_addr4   ),
    .commit5_data    (comt_de_data4   ),

    .commit6_ena     (comt_de_ena5   ),
    .commit6_addr    (comt_de_addr5  ),
    .commit6_data    (comt_de_data5  ),

    .commit7_ena     (comt_de_ena6   ),
    .commit7_addr    (comt_de_addr6  ),
    .commit7_data    (comt_de_data6  ),

    .commit8_ena     (comt_de_ena7   ),
    .commit8_addr    (comt_de_addr7  ),
    .commit8_data    (comt_de_data7  ),

    //id_exe
    .inst_type       (de1_deex_type   ),
    .inst_opcode     (de1_deex_opcode ),
    .op1_o           (de1_deex_op1    ),
    .op2_o           (de1_deex_op2    ),
    .rd_w_ena        (de1_deex_ena    ),
    .rd_w_addr       (de1_deex_addr   ),
    .pc_o            (de1_deex_pc     ),
    .inst_o          (de1_deex_inst   ),

    .mem_op_imm      (de1_deex_imm    ),
    .mem_op_sel      (de1_deex_sel    ),

    .jump_addr       (de1_phb_addr    ),
    .jump_data       (de1_phb_data    ),
    .jump_ena        (de1_phb_ena     ),

    // to pc and if_id
    .jump_pc_ena     (jump1_ena      ),
    .jump_pc         (jump1_pc       )
    );

    wire  [`ysyx22040228_REGADDRBUS] de2_ref_op1addr ;
    wire  [`ysyx22040228_REGADDRBUS] de2_ref_op2addr ;
    wire                             de2_ref_op1ena  ;
    wire                             de2_ref_op2ena  ;
    wire  [3:0]                      de2_phb_deaddr  ;
    wire  [7:0]                      de2_deex_type   ;
    wire  [7:0]                      de2_deex_opcode ;
    wire  [`ysyx22040228_REGBUS]     de2_deex_op1    ;
    wire  [`ysyx22040228_REGBUS]     de2_deex_op2    ;
    wire                             de2_deex_ena    ;
    wire  [`ysyx22040228_REGADDRBUS] de2_deex_addr   ;
    wire  [`ysyx22040228_PCBUS]      de2_deex_pc     ;
    wire  [`ysyx22040228_INSTBUS]    de2_deex_inst   ;
    wire  [`ysyx22040228_DATAADDRBUS]de2_deex_imm    ;
    wire  [2:0]                      de2_deex_sel    ;
    wire  [3:0]                      de2_phb_addr    ;
    wire                             de2_phb_data    ;
    wire                             de2_phb_ena     ;
    wire  [`ysyx22040228_PCBUS]      jump2_pc        ;
    wire                             jump2_ena       ;
    wire  [5:0]                      de2_so_type     ;
    decode2 decode_ut(   
    //系统输入
    .rst             (rst              ),
    .inst_i          (iss_de2_inst     ),
    .pc_i            (iss_de2_pc       ),

    .socreboard_alut (de2_so_type      ),
    .socreboard_clean(so_idex_cleant   ),
    // regfile
    .op1_data_i      (regs21_out_data  ),
    .op2_data_i      (regs22_out_data  ),
    .op1_addr_o      (de2_ref_op1addr  ),
    .op2_addr_o      (de2_ref_op2addr  ),
    .op1_read_o      (de2_ref_op1ena   ),
    .op2_read_o      (de2_ref_op2ena   ),
    .decode1_addr    (de2_phb_deaddr   ),
    .phb_data        (phb_de2_out      ),

    .alu1_pc         (ao_su_pc         ),
    .alu1_rd_data    (ao_su_data       ),
    .alu1_rd_addr    (ao_su_addr       ),
    .alu1_rd_ena     (ao_su_ena        ),

    .alu2_pc         (at_su_pc         ),
    .alu2_rd_data    (at_su_data       ),
    .alu2_rd_addr    (at_su_addr       ),
    .alu2_rd_ena     (at_su_ena        ),
    // mem 
    .mem_pc          (mm_su_pc         ),
    .mem_rd_data     (mm_su_data       ),
    .mem_rd_addr     (mm_su_addr       ),
    .mem_rd_ena      (mm_su_ena        ),

    //regfile(wbm)
    .wb1_rd_ena      (s_r_ao_ena      ),
    .wb1_rd_addr     (s_r_ao_addr     ),
    .wb1_rd_data     (s_r_ao_dara     ),

    .wb2_rd_ena      (s_r_at_ena      ),
    .wb2_rd_addr     (s_r_at_addr     ),
    .wb2_rd_data     (s_r_at_dara     ),

    .wb3_rd_ena      (s_r_mm_ena      ),
    .wb3_rd_addr     (s_r_mm_addr     ),
    .wb3_rd_data     (s_r_mm_dara     ),

    .commit1_ena     (comt_de_ena0    ),
    .commit1_addr    (comt_de_addr0   ),
    .commit1_data    (comt_de_data0   ),

    .commit2_ena     (comt_de_ena1    ),
    .commit2_addr    (comt_de_addr1   ),
    .commit2_data    (comt_de_data1   ),

    .commit3_ena     (comt_de_ena2    ),
    .commit3_addr    (comt_de_addr2   ),
    .commit3_data    (comt_de_data2   ),

    .commit4_ena     (comt_de_ena3    ),
    .commit4_addr    (comt_de_addr3   ),
    .commit4_data    (comt_de_data3   ), 

    .commit5_ena     (comt_de_ena4    ),
    .commit5_addr    (comt_de_addr4   ),
    .commit5_data    (comt_de_data4   ),

    .commit6_ena     (comt_de_ena5   ),
    .commit6_addr    (comt_de_addr5  ),
    .commit6_data    (comt_de_data5  ),

    .commit7_ena     (comt_de_ena6   ),
    .commit7_addr    (comt_de_addr6  ),
    .commit7_data    (comt_de_data6  ),

    .commit8_ena     (comt_de_ena7   ),
    .commit8_addr    (comt_de_addr7  ),
    .commit8_data    (comt_de_data7  ),
    //id_exe
    .inst_type       (de2_deex_type   ),
    .inst_opcode     (de2_deex_opcode ),
    .op1_o           (de2_deex_op1    ),
    .op2_o           (de2_deex_op2    ),
    .rd_w_ena        (de2_deex_ena    ),
    .rd_w_addr       (de2_deex_addr   ),
    .pc_o            (de2_deex_pc     ),
    .inst_o          (de2_deex_inst   ),

    .mem_op_imm      (de2_deex_imm    ),
    .mem_op_sel      (de2_deex_sel    ),

    .jump_addr       (de2_phb_addr    ),
    .jump_data       (de2_phb_data    ),
    .jump_ena        (de2_phb_ena     ),

    // to pc and if_id
    .jump_pc_ena     (jump2_ena       ),
    .jump_pc         (jump2_pc        )
    );

    //about socreboard
    wire  [2:0]                  so_idex_chose1 ;
    wire  [2:0]                  so_idex_chose2 ;
    wire                         so_isu_stop1   ;
    wire                         so_isu_stop2   ;
    wire                         so_idex_cleano ;
    wire                         so_idex_cleant ;
    wire                         so_isu_nop1ena ;
    wire                         so_isu_nop2ena ;
    wire  [`ysyx22040228_PCBUS]  so_submit_pc   ;
    wire                         cansign1       ;
    wire                         cansign2       ;

    socreboard socreboard_u(
    .clk             (clk            ),
    .rst             (rst            ),
    .decode1_pc      (de1_deex_pc    ),
    .type_needstop1  (de1_so_type    ),
    .decode11_addr   (de1_ref_op1addr),
    .decode11_ena    (de1_ref_op1ena ),
    .decode12_addr   (de1_ref_op2addr),
    .decode12_ena    (de1_ref_op2ena ),
    .de1_wb_addr     (de1_deex_addr  ),
    .de1_wb_ena      (de1_deex_ena   ),
    .decode2_pc      (de2_deex_pc    ),
    .type_needstop2  (de2_so_type    ),
    .decode21_addr   (de2_ref_op1addr),
    .decode21_ena    (de2_ref_op1ena ),
    .decode22_addr   (de2_ref_op2addr),
    .decode22_ena    (de2_ref_op2ena ),
    .de2_wb_addr     (de2_deex_addr  ),
    .de2_wb_ena      (de2_deex_ena   ),

    .aluo_addr       (ao_su_addr     ),
    .aluo_ena        (ao_su_ena      ),
    .alut_addr       (at_su_addr     ),
    .alut_ena        (at_su_ena      ),
    .mmu_addr        (mm_su_addr     ),
    .mmu_ena         (mm_su_ena      ),

    .aluo_busy       (ao_so_busy     ),
    .alut_busy       (at_so_busy     ),
    .mmu_busy        (mm_so_busy     ),

    .timer_intr      (timer_initin   ),

    .caninissu1      (cansign1       ),
    .caninissu2      (cansign2       ),  

    .chose_exu1      (so_idex_chose1  ),
    .chose_exu2      (so_idex_chose2  ),
    .decode1_launch  (so_isu_stop1    ),
    .decode2_launch  (so_isu_stop2    ),
    .de_ex_cleano    (so_idex_cleano  ),
    .de_ex_cleant    (so_idex_cleant  ),
    .shoud_nop_de1   (so_isu_nop1ena  ),
    .shoud_nop_de2   (so_isu_nop2ena  ),
    .retire_pc       (so_submit_pc    )
    );

    //about ex_id ;
    wire                         aluo_timer_init ;
    wire [`ysyx22040228_PCBUS]   aluo_pc         ;
    wire [`ysyx22040228_INSTBUS] aluo_inst       ;
    wire [7:0]                   aluo_inst_type  ;
    wire [7:0]                   aluo_inst_opcode;
    wire [`ysyx22040228_REGBUS]  aluo_op1_data   ;
    wire [`ysyx22040228_REGBUS]  aluo_op2_data   ;
    wire                         aluo_rd_ena     ;
    wire [`ysyx22040228_REGADDRBUS] aluo_rd_addr ;

    wire [`ysyx22040228_PCBUS]   alut_pc         ;
    wire [`ysyx22040228_INSTBUS] alut_inst       ;
    wire [7:0]                   alut_inst_type  ;
    wire [7:0]                   alut_inst_opcode;
    wire [`ysyx22040228_REGBUS]  alut_op1_data   ;
    wire [`ysyx22040228_REGBUS]  alut_op2_data   ;
    wire                         alut_rd_ena     ;
    wire [`ysyx22040228_REGADDRBUS] alut_rd_addr ;

    wire [`ysyx22040228_PCBUS]   mmu_pc          ;
    wire [`ysyx22040228_INSTBUS] mmu_inst        ;
    wire [7:0]                   mmu_inst_type   ;
    wire [`ysyx22040228_REGBUS]  mmu_op2_data    ;
    wire                         mmu_rd_ena      ;
    wire [`ysyx22040228_REGADDRBUS] mmu_rd_addr  ;
    wire [`ysyx22040228_DATABUS] mmu_offset      ;
    wire [2:0]                   mmu_sel         ;

    decode_exe de(
    .clk             (clk              ),
    .rst             (rst              ),

    .clean1_ena      (so_idex_cleano   ),
    .clean2_ena      (so_idex_cleant   ),
    .timer_init      (timer_initin     ),

    .stop_aluo       (ao_so_busy       ),
    .stop_alut       (at_so_busy       ),
    .stop_mmu        (mm_so_busy       ),
    .de_ex_chose1    (so_idex_chose1   ),
    .de_ex_chose2    (so_idex_chose2   ),

    .inst_type_d1    (de1_deex_type    ),
    .inst_opcode_d1  (de1_deex_opcode  ),
    .op1_decode1     (de1_deex_op1     ),
    .op2_decode1     (de1_deex_op2     ),
    .decode1_rd_ena  (de1_deex_ena     ),
    .decode1_rd_addr (de1_deex_addr    ),
    .decode1_pc_data (de1_deex_pc      ),
    .decode1_inst_data(de1_deex_inst   ),

    .decode1_memoffset(de1_deex_imm    ),
    .decode1_memsel  (de1_deex_sel     ),

    .inst_type_d2    (de2_deex_type    ),
    .inst_opcode_d2  (de2_deex_opcode  ),
    .op1_decode2     (de2_deex_op1     ),
    .op2_decode2     (de2_deex_op2     ),
    .decode2_rd_ena  (de2_deex_ena     ),
    .decode2_rd_addr (de2_deex_addr    ),
    .decode2_pc_data (de2_deex_pc      ),
    .decode2_inst_data(de2_deex_inst   ),

    .decode2_memoffset(de2_deex_imm    ),
    .decode2_memsel  (de2_deex_sel     ), 

    .alu1_timer_init (aluo_timer_init ),
    .alu1_inst       (aluo_inst       ),
    .alu1_pc         (aluo_pc         ),   
    .alu1_inst_type  (aluo_inst_type  ),
    .alu1_inst_opcode(aluo_inst_opcode),
    .alu1_op1_data   (aluo_op1_data   ),
    .alu1_op2_data   (aluo_op2_data   ),
    .alu1_rd_ena     (aluo_rd_ena     ),
    .alu1_rd_addr    (aluo_rd_addr    ),

    .alu2_inst       (alut_inst       ),
    .alu2_pc         (alut_pc         ),
    .alu2_inst_type  (alut_inst_type  ),
    .alu2_inst_opcode(alut_inst_opcode),
    .alu2_op1_data   (alut_op1_data   ),
    .alu2_op2_data   (alut_op2_data   ),
    .alu2_rd_ena     (alut_rd_ena     ),
    .alu2_rd_addr    (alut_rd_addr    ),

    .mem_inst        (mmu_inst        ),
    .mem_pc          (mmu_pc          ),
    .mem_inst_type   (mmu_inst_type   ),
    .mem_rd_ena      (mmu_rd_ena      ),
    .mem_rd_addr     (mmu_rd_addr     ),
    .mem_op2         (mmu_op2_data    ),
    .mem_offset      (mmu_offset      ),
    .mem_sel         (mmu_sel         )      
    );

    //about aluo
    wire   [`ysyx22040228_PCBUS]     ao_su_pc   ;
    wire   [`ysyx22040228_INSTBUS]   ao_su_inst ;
    wire   [`ysyx22040228_REGBUS]    ao_su_data ;
    wire   [`ysyx22040228_REGADDRBUS]ao_su_addr ;
    wire                             ao_su_ena  ;  
    wire                             ao_so_busy ; 
    wire   [`ysyx22040228_PCBUS]     ao_pc_pc   ;
    wire                             ao_pc_ena  ;
    ALUO aluo(
    .clk             (clk            ),
    .rst             (rst            ),
    .pc_i            (aluo_pc        ),
    .id_ex_inst      (aluo_inst      ),

    .inst_type_i     (aluo_inst_type ),
    .inst_opcode_i   (aluo_inst_opcode),
    .op1_i           (aluo_op1_data  ),
    .op2_i           (aluo_op2_data  ),
    .rd_ena_i        (aluo_rd_ena    ),
    .rd_addr_i       (aluo_rd_addr   ),

    .rd_ena_o        (ao_su_ena      ),
    .rd_addr_o       (ao_su_addr     ),
    .rd_data_o       (ao_su_data     ),
    .ex_pc_o         (ao_su_pc       ),
    .ex_inst_o       (ao_su_inst     ),
    .fence_ready     (inst_fence     ),

    .socreboard_aluo (ao_so_busy     ),
    .timer_intr      (aluo_timer_init),

    .trap_pc         (ao_pc_pc       ),
    .trap_able       (ao_pc_ena      )     
    );

    //about alut
    wire   [`ysyx22040228_PCBUS]     at_su_pc   ;
    wire   [`ysyx22040228_INSTBUS]   at_su_inst ;
    wire   [`ysyx22040228_REGBUS]    at_su_data ;
    wire   [`ysyx22040228_REGADDRBUS]at_su_addr ;
    wire                             at_su_ena  ;  
    wire                             at_so_busy ;  
    ALUT alut(
    .clk             (clk            ),
    .rst             (rst            ),
    .pc_i            (alut_pc        ),
    .id_ex_inst      (alut_inst      ),

    .inst_type_i     (alut_inst_type ),
    .inst_opcode_i   (alut_inst_opcode),
    .op1_i           (alut_op1_data  ),
    .op2_i           (alut_op2_data  ),
    .rd_ena_i        (alut_rd_ena    ),
    .rd_addr_i       (alut_rd_addr   ),

    .rd_ena_o        (at_su_ena     ),
    .rd_addr_o       (at_su_addr    ),
    .rd_data_o       (at_su_data    ),
    .ex_pc_o         (at_su_pc      ),
    .ex_inst_o       (at_su_inst    ),

    .socreboard_alut (at_so_busy    )    
    );

    //about mmu
    wire   [`ysyx22040228_PCBUS]     mm_su_pc   ;
    wire   [`ysyx22040228_INSTBUS]   mm_su_inst ;
    wire   [`ysyx22040228_REGBUS]    mm_su_data ;
    wire   [`ysyx22040228_REGADDRBUS]mm_su_addr ;
    wire                             mm_su_ena  ; 
    wire                             mm_so_busy ;

    MMU mmu(
    .rst             (rst           ),
    .inst_type_i     (mmu_inst_type ),
    .rd_ena_i        (mmu_rd_ena    ),
    .data_op2        (mmu_op2_data  ),
    .rd_addr_i       (mmu_rd_addr   ),
    .mem_pc_i        (mmu_pc        ),
    .mem_inst_i      (mmu_inst      ),
    .ls_addr_i       (mmu_offset    ),
    .ls_sel_i        (mmu_sel       ),

    .data_addr_o     (mem_addr_o    ),
    .wmask_o         (mem_strb_o    ),
    .data_i          (mem_data_i    ),
    .data_o          (mem_data_o    ),
    .we              (write_ena     ),
    .we_type_sel     (w_type_sel    ),
    .re              (read_ena      ),
    .re_type_sel     (r_type_sel    ),
    .mem_finish      (mem_finish_i  ),
    
    .rd_ena_o        (mm_su_ena    ),
    .rd_data_o       (mm_su_data   ),
    .rd_addr_o       (mm_su_addr   ),
    .mem_pc_o        (mm_su_pc     ),
    .mem_inst_o      (mm_su_inst   ),

    .socreboard_mmu  (mm_so_busy   )         
    );

    //about ex_submint
    wire    [`ysyx22040228_PCBUS]      s_r_ao_pc     ;
    wire    [`ysyx22040228_REGBUS]     s_r_ao_dara   ;
    wire    [`ysyx22040228_REGADDRBUS] s_r_ao_addr   ;
    wire    [`ysyx22040228_INSTBUS]    s_r_ao_inst   ;
    wire                               s_r_ao_ena    ;
    wire    [`ysyx22040228_PCBUS]      s_r_at_pc     ;
    wire    [`ysyx22040228_REGBUS]     s_r_at_dara   ;
    wire    [`ysyx22040228_REGADDRBUS] s_r_at_addr   ;
    wire    [`ysyx22040228_INSTBUS]    s_r_at_inst   ;
    wire                               s_r_at_ena    ;
    wire    [`ysyx22040228_PCBUS]      s_r_mm_pc     ;
    wire    [`ysyx22040228_REGBUS]     s_r_mm_dara   ;
    wire    [`ysyx22040228_REGADDRBUS] s_r_mm_addr   ;
    wire                               s_r_mm_ena    ;
    ex_submit es(
    .clk             (clk           ),
    .rst             (rst           ),
     
    .socreboard_pc   (so_submit_pc  ),

    .ao_data_in      (ao_su_data    ),
    .ao_addr_in      (ao_su_addr    ),
    .ao_pc_in        (ao_su_pc      ),
    .ao_inst_in      (ao_su_inst    ),
    .ao_ena_in       (ao_su_ena     ),

    .at_data_in      (at_su_data    ),
    .at_addr_in      (at_su_addr    ),
    .at_pc_in        (at_su_pc      ),
    .at_inst_in      (at_su_inst    ),
    .at_ena_in       (at_su_ena     ),

    .mm_data_in      (mm_su_data    ),
    .mm_addr_in      (mm_su_addr    ),
    .mm_pc_in        (mm_su_pc      ),
    .mm_ena_in       (mm_su_ena     ),
 
    .ao_pc_out       (s_r_ao_pc     ),
    .ao_data_out     (s_r_ao_dara   ),
    .ao_addr_out     (s_r_ao_addr   ),
    .ao_inst_out     (s_r_ao_inst   ),
    .ao_ena_out      (s_r_ao_ena    ),

    .at_pc_out       (s_r_at_pc     ),
    .at_data_out     (s_r_at_dara   ),
    .at_addr_out     (s_r_at_addr   ),
    .at_inst_out     (s_r_at_inst   ),
    .at_ena_out      (s_r_at_ena    ),

    .mm_pc_out       (s_r_mm_pc     ),
    .mm_data_out     (s_r_mm_dara   ),
    .mm_addr_out     (s_r_mm_addr   ),
    .mm_ena_out      (s_r_mm_ena    )
    );

    //about commit
    wire  [`ysyx22040228_DATABUS]    comt_de_data0 ;
    wire  [`ysyx22040228_REGADDRBUS] comt_de_addr0 ;
    wire                             comt_de_ena0  ;
    wire  [`ysyx22040228_DATABUS]    comt_de_data1 ;
    wire  [`ysyx22040228_REGADDRBUS] comt_de_addr1 ;
    wire                             comt_de_ena1  ;
    wire  [`ysyx22040228_DATABUS]    comt_de_data2 ;
    wire  [`ysyx22040228_REGADDRBUS] comt_de_addr2 ;
    wire                             comt_de_ena2  ;    
    wire  [`ysyx22040228_DATABUS]    comt_de_data3 ;
    wire  [`ysyx22040228_REGADDRBUS] comt_de_addr3 ;
    wire                             comt_de_ena3  ;
    wire  [`ysyx22040228_DATABUS]    comt_de_data4 ;
    wire  [`ysyx22040228_REGADDRBUS] comt_de_addr4 ;
    wire                             comt_de_ena4  ;
    wire  [`ysyx22040228_DATABUS]    comt_de_data5 ;
    wire  [`ysyx22040228_REGADDRBUS] comt_de_addr5 ;
    wire                             comt_de_ena5  ;
    wire  [`ysyx22040228_DATABUS]    comt_de_data6 ;
    wire  [`ysyx22040228_REGADDRBUS] comt_de_addr6 ;
    wire                             comt_de_ena6  ;
    wire  [`ysyx22040228_DATABUS]    comt_de_data7 ;
    wire  [`ysyx22040228_REGADDRBUS] comt_de_addr7 ;
    wire                             comt_de_ena7  ;

    wire  [`ysyx22040228_DATABUS]    comt_de_datag ;
    wire  [`ysyx22040228_REGADDRBUS] comt_de_addrg ;
    wire                             comt_de_enag  ;


    commit commit_u(
    .clk              (clk          ),
    .rst              (rst          ),
    .decode1_counter  (so_idex_chose1),
    .decode1_clean    (so_idex_cleano),
    .decode1_pc       (de1_deex_pc  ),
    .decode2_counter  (so_idex_chose2),
    .decode2_clean    (so_idex_cleant),
    .decode2_pc       (de2_deex_pc  ),

    .decode1_caninis  (cansign1     ),
    .decode2_caninis  (cansign2     ),

    .commit_pc1       (s_r_ao_pc   ),
    .commit_inst1     (s_r_ao_inst ),
    .commit_addr1     (s_r_ao_addr ),
    .commit_data1     (s_r_ao_dara ),
    .commit_ena1      (s_r_ao_ena  ),

    .commit_pc2       (s_r_at_pc   ),
    .commit_inst2     (s_r_at_inst ),
    .commit_addr2     (s_r_at_addr ), 
    .commit_data2     (s_r_at_dara ),
    .commit_ena2      (s_r_at_ena  ),

    .commit_pc3       (s_r_mm_pc   ),
    .commit_addr3     (s_r_mm_addr ),
    .commit_data3     (s_r_mm_dara ),
    .commit_ena3      (s_r_mm_ena  ),

    .subm_wbena       (comt_de_enag ),
    .subm_wbaddr      (comt_de_addrg),
    .subm_wbdata      (comt_de_datag),

    .comt_addr0       (comt_de_addr0),
    .comt_data0       (comt_de_data0),
    .comt_ena0        (comt_de_ena0 ),

    .comt_addr1       (comt_de_addr1),
    .comt_data1       (comt_de_data1),
    .comt_ena1        (comt_de_ena1 ),

    .comt_addr2       (comt_de_addr2),
    .comt_data2       (comt_de_data2),
    .comt_ena2        (comt_de_ena2 ),

    .comt_addr3       (comt_de_addr3),
    .comt_data3       (comt_de_data3),
    .comt_ena3        (comt_de_ena3 ),

    .comt_addr4       (comt_de_addr4),
    .comt_data4       (comt_de_data4),
    .comt_ena4        (comt_de_ena4 ),

    .comt_addr5       (comt_de_addr5),
    .comt_data5       (comt_de_data5),
    .comt_ena5        (comt_de_ena5 ),

    .comt_addr6       (comt_de_addr6),
    .comt_data6       (comt_de_data6),
    .comt_ena6        (comt_de_ena6 ),

    .comt_addr7       (comt_de_addr7),
    .comt_data7       (comt_de_data7),
    .comt_ena7        (comt_de_ena7 ) 
    );

    //about regsfilr 
    wire  [`ysyx22040228_REGBUS]  regs21_out_data  ;
    wire  [`ysyx22040228_REGBUS]  regs22_out_data  ;
    wire  [`ysyx22040228_REGBUS]  regs11_out_data  ;
    wire  [`ysyx22040228_REGBUS]  regs12_out_data  ;  

    regsfile regsf(
	.clk             (clk           ),
	.rst             (rst           ),

	.waddr           (comt_de_addrg ),
	.wdata           (comt_de_datag ),
	.we              (comt_de_enag  ), 

	.raddr1_1        (de1_ref_op1addr),
	.rdata1_1        (regs11_out_data),
	.re1_1           (de1_ref_op1ena ),

	.raddr2_1        (de2_ref_op1addr),
	.rdata2_1        (regs21_out_data),
	.re2_1           (de2_ref_op1ena ),    
 
	.raddr1_2        (de1_ref_op2addr),
 	.rdata1_2        (regs12_out_data),
	.re1_2           (de1_ref_op2ena ),

	.raddr2_2        (de2_ref_op2addr),
	.rdata2_2        (regs22_out_data),
	.re2_2           (de2_ref_op2ena ),   

	.x1_read_ena     (pc_regsf_ena   ),
	.x1_data         (regsf_pc_data  ),
	.x1_addr         (pc_regsf_addr  )
    );
    
endmodule

