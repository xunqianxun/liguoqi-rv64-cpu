/************************************************************
Author:LiGuoqi
Name:csr.v
Function:The necessary registers in machine mode are designed
         andimplented.
************************************************************/
`include "./vsrc/defines.v"
module csr (
    input          wire                                        clk              ,
    input          wire                                        rst              ,
    input          wire        [`ysyx22040228_PCBUS]           pc_i             ,

    input          wire                                        csr_wr_en        ,
    input          wire                                        csr_rd_en        ,
    input          wire        [11:0]                          csr_idx          ,

    input          wire                                        cmt_mret_ena     ,
    input          wire                                        ecall_trap_ena   ,
    input          wire        [`ysyx22040228_REGBUS]          trap_mcause_value,

    input          wire                                        tmr_intr_ena     ,
    output         wire                                        tmr_trap_ena     ,

    output         wire        [`ysyx22040228_REGBUS]          read_csr_data    ,
    input          wire        [`ysyx22040228_REGBUS]          wbck_csr_data    ,

    input          wire                                        ex_stall       
);

import "DPI-C" function void difftest_dut_regs(
    input longint mcycle_val, //0xb00
    input longint mstatus_val, //0x300
    input longint mtvec_val, //0x305
    input longint mepc_val, //0x341
    input longint mcause_val, //0x342
    input longint mie_val, //0x304
    input longint mip_val, //0x344
    input longint mscratch_val //0x340
);

always@(*)begin
difftest_dut_regs(    
    csr_mcycle  ,
    csr_mscrstch,
    csr_mtvec   ,
    csr_mepc    ,
    csr_mcause  ,
    csr_mie     ,
    csr_mip     
);
end
// 0xb00
wire       sel_mcycle  =  (csr_idx == 12'hb00) ;
wire       rd_mcycle   =  csr_rd_en && sel_mcycle  ;
wire       wr_mcycle   =  csr_wr_en && sel_mcycle  ;
reg [`ysyx22040228_REGBUS] csr_mcycle ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin csr_mcycle <= `ysyx22040228_ZEROWORD    ; end
    else if(wr_mcycle)     begin csr_mcycle <= wbck_csr_data ; end
    else                   begin csr_mcycle <= csr_mcycle + 64'd1 ;end 
end
//0x300
wire      sel_mstatus  =  (csr_idx == 12'h300) ;
wire      rd_mstatus   =  sel_mstatus && csr_rd_en  ;
wire      wr_mstatus   =  sel_mstatus && csr_wr_en  ;           
    
wire      mstatus_mpie_ena = wr_mstatus | cmt_mret_ena | (ecall_trap_ena | tmr_trap_ena) ;

wire      mstatus_mpie_nxt = (ecall_trap_ena | tmr_trap_ena) ? csr_mstatus_mie : 
                                               cmt_mret_ena  ? 1'b1            :
                                               wr_mstatus    ? wbck_csr_data[7]:
                                                               csr_mstatus_mpie;

reg csr_mstatus_mpie ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA)                begin csr_mstatus_mpie <= 1'b0 ; end
    else if(mstatus_mpie_ena & ~ex_stall) begin csr_mstatus_mpie <= mstatus_mpie_nxt ; end
    else                                  begin csr_mstatus_mpie <= csr_mstatus_mpie ; end
end

wire mstatus_mie_ena = mstatus_mpie_ena ;
wire mstatus_mie_nxt = (ecall_trap_ena | tmr_trap_ena) ? 1'b0            :
                                          cmt_mret_ena ? csr_mstatus_mpie:
                                            wr_mstatus ? wbck_csr_data[3]:
                                                         csr_mstatus_mie ;
reg csr_mstatus_mie ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA)               begin csr_mstatus_mie <= 1'b0 ; end
    else if(mstatus_mie_ena & ~ex_stall) begin csr_mstatus_mie <= mstatus_mie_nxt ; end 
    else                                 begin csr_mstatus_mie <= csr_mstatus_mie ; end 
end

wire mstatus_mpp_ena = mstatus_mpie_ena ;
wire [1:0] mstatus_mpp_nxt = (ecall_trap_ena | tmr_trap_ena) ? 2'b11                   :
                                                cmt_mret_ena ? 2'b00                   :
                                                  wr_mstatus ? wbck_csr_data[12:11]    :
                                                            csr_mstatus_mpp            ;
reg [1:0] csr_mstatus_mpp ;
always @(posedge clk ) begin
    if(rst == `ysyx22040228_RSTENA)   begin csr_mstatus_mpp <= 2'b00 ;  end
    else if(mstatus_mpp_ena) begin csr_mstatus_mpp <= mstatus_mpp_nxt ; end
    else                     begin csr_mstatus_mpp <= csr_mstatus_mpp ; end 
end

wire  [1:0] csr_mstatus_xs ;
assign csr_mstatus_xs = 2'b00 ;

reg   [1:0] csr_mstatus_fs ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA)    begin csr_mstatus_fs <= 2'b00 ;end
    else if(wr_mstatus)       begin csr_mstatus_fs <= wbck_csr_data[14:13] ; end
    else                      begin csr_mstatus_fs <= csr_mstatus_fs ; end
end

wire csr_mstatus_sd = (csr_mstatus_xs == 2'b11) | (csr_mstatus_fs == 2'b11) ;

wire   [`ysyx22040228_REGBUS]             csr_mstatus         ;
assign csr_mstatus[63]        = csr_mstatus_sd    ;
assign csr_mstatus[62:36]     = 27'd0             ;
assign csr_mstatus[35:34]     = 2'b00             ;
assign csr_mstatus[33:32]     = 2'b00             ;
assign csr_mstatus[31:23]     = 9'd0              ;
assign csr_mstatus[22:17]     = 6'd0              ;
assign csr_mstatus[16:15]     = csr_mstatus_xs    ;
assign csr_mstatus[14:13]     = csr_mstatus_fs    ;
assign csr_mstatus[12:11]     = csr_mstatus_mpp   ;
assign csr_mstatus[10: 9]     = 2'b00             ;
assign csr_mstatus[8]         = 1'b0              ;
assign csr_mstatus[7]         = csr_mstatus_mpie  ;
assign csr_mstatus[6]         = 1'b0              ;
assign csr_mstatus[5]         = 1'b0              ;
assign csr_mstatus[4]         = 1'b0              ;
assign csr_mstatus[3]         = csr_mstatus_mie   ;
assign csr_mstatus[2]         = 1'b0              ;
assign csr_mstatus[1]         = 1'b0              ;
assign csr_mstatus[0]         = 1'b0              ;

//0x305
wire sel_mtvec = (csr_idx == 12'h305) ;
wire rd_mtvec  = (sel_mtvec && csr_rd_en) | ecall_trap_ena | tmr_trap_ena ;
wire wr_mtvec  = sel_mtvec && csr_wr_en ;

reg [63:2] csr_mtvec_base ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin csr_mtvec_base <= 62'd0 ; end
    else if(wr_mtvec)      begin csr_mtvec_base <= wbck_csr_data[63:2] ; end
    else                   begin csr_mtvec_base <= csr_mtvec_base ; end
end

wire [1:0] csr_mtvec_mode ;
assign csr_mtvec_mode = 2'b00 ;
wire [`ysyx22040228_REGBUS] csr_mtvec ;
assign csr_mtvec = {csr_mtvec_base , csr_mtvec_mode} ;

//0x341
wire sel_mepc = (csr_idx == 12'h341) ;
wire rd_mepc  = (sel_mepc && csr_rd_en) | cmt_mret_ena ;
wire wr_mepc  = (sel_mepc && csr_wr_en) | ecall_trap_ena | tmr_trap_ena ;

reg [`ysyx22040228_REGBUS] csr_mepc ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin csr_mepc <= `ysyx22040228_ZEROWORD ; end
    else if(wr_mepc)       begin csr_mepc <= {wbck_csr_data[63:2],2'b00} ; end
    else                   begin csr_mepc <= csr_mepc ; end 
end

//0x342
wire sel_mcause = (csr_idx == 12'h342) ;
wire rd_mcause  = sel_mcause && csr_rd_en ;
wire wr_mcause  = sel_mcause && csr_wr_en ;
wire csr_mcause_ena = wr_mcause | ecall_trap_ena | tmr_trap_ena ;
wire [`ysyx22040228_REGBUS] csr_mcause_nxt = (ecall_trap_ena | tmr_trap_ena) ? trap_mcause_value :
                                                       wr_mcause ? wbck_csr_data     :
                                                                   csr_mcause        ;

reg [`ysyx22040228_REGBUS] csr_mcause ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA)     begin csr_mcause <= `ysyx22040228_ZEROWORD ; end
    else if(csr_mcause_ena)    begin csr_mcause <= csr_mcause_nxt ; end
    else                       begin csr_mcause <= csr_mcause ; end
end

//0x304
wire sle_mie = (csr_idx == 12'h304) ;
wire rd_mie  = sle_mie && csr_rd_en ;
wire wr_mie  = sle_mie && csr_wr_en ;

reg csr_mie_mtie ;
always @(posedge clk) begin
    if(rst ==`ysyx22040228_RSTENA) begin csr_mie_mtie <= 1'b0 ; end
    else if(wr_mie)       begin csr_mie_mtie <= wbck_csr_data[7] ; end
    else                  begin csr_mie_mtie <= csr_mie_mtie ; end
end

wire [`ysyx22040228_REGBUS] csr_mie ;
assign csr_mie[6:0]  = 7'd0 ;
assign csr_mie[63:8] = 56'd0;
assign csr_mie[7]    = csr_mie_mtie ;

//0x344
wire sel_mip = (csr_idx == 12'h344) ;
wire rd_mip  = sel_mip && csr_rd_en ;

reg csr_mip_mtip ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin csr_mip_mtip <= 1'b0 ; end
    else                   begin csr_mip_mtip <= tmr_intr_ena ; end
end

wire [`ysyx22040228_REGBUS] csr_mip ;
assign csr_mip[6:0] = 7'd0 ;
assign csr_mip[7]   = csr_mip_mtip ;
assign csr_mip[63:8]= 56'd0 ;

assign tmr_trap_ena = csr_mip_mtip & csr_mstatus_mie & csr_mie_mtie && (pc_i != 64'd0) ;

//0x340
wire sel_mscratch = (csr_idx == 12'h340) ;
wire rd_mscrstch  = sel_mscratch && csr_rd_en ;
wire wr_mscrstch  = sel_mscratch && csr_wr_en ;

reg [`ysyx22040228_REGBUS] csr_mscrstch ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin csr_mscrstch <= `ysyx22040228_ZEROWORD ; end
    else if(wr_mscrstch)   begin csr_mscrstch <= wbck_csr_data ; end
    else                   begin csr_mscrstch <= csr_mscrstch ; end
end

//0x100
//wire [`ysyx22040228_REGBUS] csr_sstatus ;
//assign csr_sstatus[63]    = (csr_mstatus_fs == 2'b11) ;
//assign csr_sstatus[62:15] = 48'd0 ;
//assign csr_sstatus[14:13] = csr_mstatus_fs ;
//assign csr_sstatus[12:0]  = 13'd0 ;


assign read_csr_data = 64'd0 | ({64{rd_mcycle}} & csr_mcycle)
                             | ({64{rd_mstatus}} & csr_mstatus)
                             | ({64{rd_mtvec}} & csr_mtvec)
                             | ({64{rd_mepc}} & csr_mepc)
                             | ({64{rd_mcause}} & csr_mcause)
                             | ({64{rd_mie}} & csr_mie)
                             | ({64{rd_mip}} & csr_mip)
                             | ({64{rd_mscrstch}} & csr_mscrstch) ;
                            



endmodule 

