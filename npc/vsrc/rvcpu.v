/************************************************************
Author:LiGuoqi
data:2021,10.21
Name:rvcpu.v
Function:Core top level module
************************************************************/
`include "./vsrc/pip_fore.v"
`include "./vsrc/pc.v"
`include "./vsrc/if_id.v"
`include "./vsrc/id.v"
`include "./vsrc/id_ex.v"
`include "./vsrc/ex.v"
`include "./vsrc/ex_mem.v"
`include "./vsrc/mem.v"
`include "./vsrc/mem_wb.v"
`include "./vsrc/ctrl.v"
`include "./vsrc/defines.v"
`include "./vsrc/regfile.v"
module rvcpu (
    input           wire                                        clk            ,
    input           wire                                        rst            ,
    
    output          wire         [`ysyx22040228_PCBUS]          inst_addr      ,
   
    output          wire                                        inst_ready     ,
    input           wire         [`ysyx22040228_INSTBUS]        inst           ,
    input           wire                                        bui_inst_valid ,

    output          wire         [`ysyx22040228_DATAADDRBUS]    data_addr      ,
    output          wire         [7:0]                          wmask          ,
    output          wire         [`ysyx22040228_DATABUS]        data_o         ,
    input           wire         [`ysyx22040228_DATABUS]        data_i         ,
    output          wire                                        we             ,
    output          wire                                        re             ,
    input           wire                                        mem_finish     ,

    input           wire                                        timer_intr     
);
//about Pip_prediction
wire    [`ysyx22040228_REGBUS]           pip_regfile_x1     ;
wire                                     pip_refflie_x1_ena ;
wire    [`ysyx22040228_REGADDRBUS]       pip_regfile_x1_addr;
wire    [`ysyx22040228_PCBUS]            pip_pc             ;
//about if_id
wire                                    if_stall_req       ;
wire    [`ysyx22040228_PCBUS]           if_id_pc           ;
wire    [`ysyx22040228_INSTBUS]         if_id_inst         ;
wire                                    new_pc_sign        ;

//about ex
wire                                    ex_flush           ;
wire    [`ysyx22040228_REGBUS]          ex_id_rd_data      ;
wire    [`ysyx22040228_REGADDRBUS]      ex_id_rd_addr      ;
wire                                    ex_id_rd_ena       ;
wire    [ 7:0]                          ex_id_rd_type      ;
wire    [ 2:0]                          ex_mem_sel         ;
wire    [`ysyx22040228_DATABUS]         ex_mem_addr        ;
wire                                    ex_pc_branchena    ;
wire    [`ysyx22040228_PCBUS]           ex_pc_branchpc     ;
wire                                    ex_ctrl_req        ;

//about id
//wire                                   id_flush           ;
wire    [`ysyx22040228_REGADDRBUS]     id_reg_addr1       ;
wire                                   id_reg_ena1        ;
wire    [`ysyx22040228_REGADDRBUS]     id_reg_addr2       ;
wire                                   id_reg_ena2        ;
wire                                   id_ctrl_req        ;
wire    [ 7:0]                         id_ex_type         ;
wire    [ 7:0]                         id_ex_opcode       ;
wire    [`ysyx22040228_REGBUS]         id_ex_op           ;
wire    [`ysyx22040228_REGBUS]         id_ex_op2          ;
wire                                   id_ex_rd_ena       ;
wire    [`ysyx22040228_REGADDRBUS]     id_ex_rd_addr      ;
wire    [`ysyx22040228_PCBUS]          id_ex_pc           ;
wire    [11:0]                         id_ex_s_offset     ;
wire    [ 2:0]                         id_ex_memsel       ;
wire    [`ysyx22040228_PCBUS]          id_pip_jalrpc      ;
wire                                   id_pip_jalrena     ;
wire                                   id_if_flush        ;

  
//about ctrl
wire    [4:0]                          stall_ctrl         ;

//about regfile
wire    [`ysyx22040228_REGBUS]         regs_id_data1      ;
wire    [`ysyx22040228_REGBUS]         regs_id_data2      ;

//about mem
wire    [`ysyx22040228_REGBUS]         mem_id_data        ;
wire    [`ysyx22040228_REGADDRBUS]     mem_id_addr        ;
wire                                   mem_id_ena         ;
wire                                   mem_ctrl_req       ;
//about wb
wire    [`ysyx22040228_REGADDRBUS]     wb_id_addr         ;
wire                                   wb_id_ena          ;
wire    [`ysyx22040228_REGBUS]         wb_regfile_data    ;

//about id_ex
wire    [`ysyx22040228_PCBUS]          idex_ex_pc         ;
wire    [ 7:0]                         idex_ex_type       ;
wire    [ 7:0]                         idex_ex_opcode     ;
wire    [`ysyx22040228_REGBUS]         idex_ex_op1        ;
wire    [`ysyx22040228_REGBUS]         idex_ex_op2        ;
wire                                   idex_ex_rdena      ;
wire    [`ysyx22040228_REGADDRBUS]     idex_ex_rdaddr     ;
wire    [11:0]                         idex_ex_offset     ;
wire    [ 2:0]                         idex_ex_sel        ;
     
//about ex_eme
wire    [ 7:0]                         exmem_mem_type     ;
wire                                   exmem_mem_ena      ;
wire    [`ysyx22040228_REGBUS]         exmem_mem_data     ;
wire    [`ysyx22040228_REGADDRBUS]     exmem_mem_addr     ;
wire    [ 2:0]                         exmem_mem_sel      ;
wire    [`ysyx22040228_DATAADDRBUS]    exmem_mem_lsaddr   ;
//difftest use
wire    [`ysyx22040228_PCBUS]          ex_ex_mem_pc       ;
wire    [`ysyx22040228_PCBUS]          ex_mem_mem_pc      ;
wire    [`ysyx22040228_PCBUS]          mem_mem_wb_pc      ;

wire    [`ysyx22040228_INSTBUS]        id_id_ex_inst      ;
wire    [`ysyx22040228_INSTBUS]        id_ex_ex_inst      ;
wire    [`ysyx22040228_INSTBUS]        ex_ex_mem_inst     ;
wire    [`ysyx22040228_INSTBUS]        ex_mem_mem_inst    ;
wire    [`ysyx22040228_INSTBUS]        mem_mem_wb_inst    ;

pip_fore pip_fore0 (
    .rst                 (rst                  ),
    .pc_i                (inst_addr            ),
    .inst                (inst                 ),
    .x1_data             (pip_regfile_x1       ),
    .x1_ena              (pip_refflie_x1_ena   ),
    .x1_addr             (pip_regfile_x1_addr  ),
    .pc_o                (pip_pc               )
);

pc pc1 (
    .clk                 (clk                  ),
    .rst                 (rst                  ),
    .static_pc_i         (pip_pc               ),
    .id_pc_i             (id_pip_jalrpc        ),
    .id_pc_ena           (id_pip_jalrena       ),
    .ex_pc_ena           (ex_pc_branchena      ),
    .ex_pc_i             (ex_pc_branchpc       ),
    .pc_stall            (stall_ctrl[0]        ),
    .pc                  (inst_addr            ), 
    .new_sign            (new_pc_sign          )            
);

if_id if_id2 (
    .clk                 (clk                  ),
    .rst                 (rst                  ),
    .if_pc               (inst_addr            ),
    .if_inst             (inst                 ),
    .if_newpc            (new_pc_sign          ),
    .if_id_flush         (ex_flush             ),
    .if_id_bubble        (id_if_flush          ),
    .if_inst_valid       (bui_inst_valid       ),
    .if_inst_ready       (inst_ready           ),
    .stall_ctrl          (stall_ctrl           ),
    .if_stall_req        (if_stall_req         ),
    .id_pc               (if_id_pc             ),
    .id_inst             (if_id_inst           )
);

id id3 (
    //系统输入
    .rst                 (rst                  ),
    .inst_i              (if_id_inst           ),
    .pc_i                (if_id_pc             ),

    // regfile
    .op1_data_i          (regs_id_data1        ),
    .op2_data_i          (regs_id_data2        ),
    .op1_addr_o          (id_reg_addr1         ),
    .op2_addr_o          (id_reg_addr2         ),
    .op1_read_o          (id_reg_ena1          ),
    .op2_read_o          (id_reg_ena2          ),

    // ex 
    .ex_rd_data          (ex_id_rd_data        ),
    .ex_rd_addr          (ex_id_rd_addr        ),
    .ex_rd_ena           (ex_id_rd_ena         ),
    .ex_inst_type        (ex_id_rd_type        ), // load related data hazard

    // mem 
    .mem_rd_data         (mem_id_data          ),
    .mem_rd_addr         (mem_id_addr          ),
    .mem_rd_ena          (mem_id_ena           ),
    //regfile(wbm)
    .wb_rd_ena           (wb_id_ena            ),
    .wb_rd_addr          (wb_id_addr           ),
    
    //ctrl
    .id_stall_req        (id_ctrl_req          ),
    .if_stall_req        (if_stall_req         ),

    //id_exe
    .inst_type           (id_ex_type           ),
    .inst_opcode         (id_ex_opcode         ),
    .op1_o               (id_ex_op             ),
    .op2_o               (id_ex_op2            ),
    .rd_w_ena            (id_ex_rd_ena         ),
    .rd_w_addr           (id_ex_rd_addr        ),
    .pc_o                (id_ex_pc             ),
    .inst_o              (id_id_ex_inst        ),
    
    .store_addr_offset   (id_ex_s_offset       ),
    .mem_op_sel          (id_ex_memsel         ), //?


    // to pc and if_id
    .jalr_pc_ena         (id_pip_jalrena       ),
    .jalr_pc             (id_pip_jalrpc        ),
    .id_flush            (id_if_flush          )
);

id_ex id_ex4 (
    .clk                 (clk                  ),
    .rst                 (rst                  ),
    .id_ex_bubble        (ex_flush             ),

    .stall_ctrl          (stall_ctrl           ),
    
    .id_inst             (id_id_ex_inst        ),
    .id_pc               (id_ex_pc             ),
    .id_inst_type        (id_ex_type           ),
    .id_inst_opcode      (id_ex_opcode         ),
    .id_op1              (id_ex_op             ),
    .id_op2              (id_ex_op2            ),
    .id_rd_ena           (id_ex_rd_ena         ),
    .id_rd_addr          (id_ex_rd_addr        ),

    .id_addr_offset      (id_ex_s_offset       ), 
    .id_ls_sel           (id_ex_memsel         ),

    //output
    .ex_inst             (id_ex_ex_inst        ),
    .ex_pc               (idex_ex_pc           ),
    .ex_inst_type        (idex_ex_type         ),
    .ex_inst_opcode      (idex_ex_opcode       ),
    .ex_op1              (idex_ex_op1          ),
    .ex_op2              (idex_ex_op2          ),
    .ex_rd_ena           (idex_ex_rdena        ),
    .ex_rd_addr          (idex_ex_rdaddr       ),

    .ex_addr_offset      (idex_ex_offset       ),
    .ex_ls_sel           (idex_ex_sel          )
 );

ex ex5 (
    .clk                 (clk                  ),
    .rst                 (rst                  ),
    .pc_i                (idex_ex_pc           ),
    .id_ex_inst          (id_ex_ex_inst        ),

    .inst_type_i         (idex_ex_type         ),
    .inst_opcode_i       (idex_ex_opcode       ),
    .op1_i               (idex_ex_op1          ),
    .op2_i               (idex_ex_op2          ),
    .rd_ena_i            (idex_ex_rdena        ),
    .rd_addr_i           (idex_ex_rdaddr       ),

    .ls_sel_i            (idex_ex_sel          ),
    .addr_offsel_i       (idex_ex_offset       ),

    //output 
    .inst_type_o         (ex_id_rd_type        ),
    .rd_ena_o            (ex_id_rd_ena         ),
    .rd_addr_o           (ex_id_rd_addr        ),
    .rd_data_o           (ex_id_rd_data        ),
    .ex_pc_o             (ex_ex_mem_pc         ),
    .ex_inst_o           (ex_ex_mem_inst       ),

    .ls_sel_o            (ex_mem_sel           ),
    .ls_addr_o           (ex_mem_addr          ),

    .ex_flush            (ex_flush             ),
    .branch_pc_ena       (ex_pc_branchena      ),
    .branch_pc           (ex_pc_branchpc       ),
    
    //to ctrl
    .if_stell_req        (if_stall_req         ),
    .ex_stall_req        (ex_ctrl_req          ),
    
    //to interrupt
    .timer_intr          (timer_intr           ),
    .ex_stall            (stall_ctrl[3]        )//,
    
    //to difftest
    //.tmr_trap_ena_o      ()
);

ex_mem ex_mem6 (
    .clk                 (clk                  ),
    .rst                 (rst                  ),
    .ex_mem_pc_i         (ex_ex_mem_pc         ),
    .ex_mem_inst_i       (ex_ex_mem_inst       ),
    .stall_ctrl          (stall_ctrl           ),

    .ex_inst_type        (ex_id_rd_type        ),
    .ex_rd_ena           (ex_id_rd_ena         ),
    .ex_rd_data          (ex_id_rd_data        ),
    .ex_rd_addr          (ex_id_rd_addr        ),

    .ex_ls_sel           (ex_mem_sel           ),
    .ex_ls_addr          (ex_mem_addr          ),
    
    .mem_inst_type       (exmem_mem_type       ),
    .mem_rd_ena          (exmem_mem_ena        ),
    .mem_rd_data         (exmem_mem_data       ),
    .mem_rd_addr         (exmem_mem_addr       ),
    .ex_mem_pc_o         (ex_mem_mem_pc        ),
    .ex_mem_inst_o       (ex_mem_mem_inst      ),

    .mem_ls_sel          (exmem_mem_sel        ),
    .mem_ls_addr         (exmem_mem_lsaddr     )
);

mem mem7 (
   .rst                  (rst                  ),
   .inst_type_i          (exmem_mem_type       ),
   .rd_ena_i             (exmem_mem_ena        ),
   .rd_data_i            (exmem_mem_data       ),
   .rd_addr_i            (exmem_mem_addr       ),
   .mem_pc_i             (ex_mem_mem_pc        ),
   .mem_inst_i           (ex_mem_mem_inst      ),

   .ls_addr_i            (exmem_mem_lsaddr     ),
   .ls_sel_i             (exmem_mem_sel        ),

   .data_addr_o          (data_addr            ),
   .wmask_o              (wmask                ),
   .data_i               (data_i               ),
   .data_o               (data_o               ),
   .we                   (we                   ),
   .re                   (re                   ),
   .mem_finish           (mem_finish           ),
    
   .rd_ena_o             (mem_id_ena           ),
   .rd_data_o            (mem_id_data          ),
   .rd_addr_o            (mem_id_addr          ),
   .mem_pc_o             (mem_mem_wb_pc        ),
   .mem_inst_o           (mem_mem_wb_inst      ),

   .mem_stall_req        (mem_ctrl_req         )
);

mem_wb mem_wb8 (
   .clk                  (clk                  ),
   .rst                  (rst                  ),
   .wb_pc_i              (mem_mem_wb_pc        ),
   .wb_inst_i            (mem_mem_wb_inst      ),

   .stall_ctrl           (stall_ctrl           ),

   .mem_rd_data          (mem_id_data          ),
   .mem_rd_addr          (mem_id_addr          ),
   .mem_rd_ena           (mem_id_ena           ),

   .wb_rd_data           (wb_regfile_data      ),
   .wb_rd_addr           (wb_id_addr           ),
   .wb_rd_ena            (wb_id_ena            )
);

ctrl ctrl9 (
   .rst                  (rst                  ),
   .if_stall_req         (if_stall_req         ), 
   .id_stall_req         (id_ctrl_req          ),
   .ex_stall_req         (ex_ctrl_req          ),
   .mem_stall_req        (mem_ctrl_req         ),

   .stall_ctrl           (stall_ctrl           )
);

regfile regfile10 (
   .clk                  (clk                  ),
   .rst                  (rst                  ),

   .waddr                (wb_id_addr           ),
   .wdata                (wb_regfile_data      ),
   .we                   (wb_id_ena            ),

   .raddr1               (id_reg_addr1         ),
   .rdata1               (regs_id_data1        ),
   .re1                  (id_reg_ena1          ),

   .raddr2               (id_reg_addr2         ),
   .rdata2               (regs_id_data2        ),
   .re2                  (id_reg_ena2          ),     

   .x1_read_ena          (pip_refflie_x1_ena   ),
   .x1_data              (pip_regfile_x1       ),
   .x1_addr              (pip_regfile_x1_addr  )

   //.trap_code            () ,

   //.reg_a0               ()       
);

endmodule

