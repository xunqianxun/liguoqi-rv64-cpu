/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off BLKSEQ */
`timescale 1ns / 1ps


`define YSYX210576_HoldEnable 1'b1 //流水线暂停
`define YSYX210576_HoldDisable 1'b0 
`define YSYX210576_JumpEnable 1'b1  //跳转使能 
`define YSYX210576_JumpDisable 1'b0 
`define YSYX210576_Inst_Bus  31:0 //指令宽度 
`define YSYX210576_PC_START   64'h00000000_30000000  
`define YSYX210576_RegBus    63 : 0  
`define YSYX210576_RstEnable  1'b1   //复位有效 
`define YSYX210576_RstDisable 1'b0   //复位无效 
`define YSYX210576_Zeroword   64'h0000000000000000 //64位数值0 
`define YSYX210576_Zeroaddr   64'h0000000000000000 //64位数值0
`define YSYX210576_ZeroInst   32'h00000000 //64位数值0 
`define YSYX210576_ZeroReg 5'b00000 //寄存器位为零 
`define YSYX210576_WriteEnable 1'b1   //写使能 
`define YSYX210576_WriteDisable 1'b0  //禁止写 
`define YSYX210576_ReadEnable  1'b1   //读使能 
`define YSYX210576_ReadDisable 1'b0   //禁止读 
`define YSYX210576_AluOpBus 7:0        //译码阶段的操作码宽度
`define YSYX210576_AluSelBus 2:0       //操作码类型
`define YSYX210576_INST_NOP    32'h00000001
`define YSYX210576_INST_NOP_OP 7'b0000001 
//流水线暂停标志位
`define YSYX210576_Hold_None 1'b0 

//具体指令
`define YSYX210576_InstAddrBus 63:0 //地址总线长度
`define YSYX210576_InstDataBus 63:0 //数据总线长度 

//与通用寄存器 Regfile相关
`define YSYX210576_RegAddrBus 4:0    //寄存器地址长度  

// I type inst
`define YSYX210576_INST_TYPE_I 7'b0010011
`define YSYX210576_INST_ADDI   3'b000  
`define YSYX210576_INST_SLTI   3'b010  
`define YSYX210576_INST_SLTIU  3'b011  
`define YSYX210576_INST_XORI   3'b100  
`define YSYX210576_INST_ORI    3'b110  
`define YSYX210576_INST_ANDI   3'b111  
`define YSYX210576_INST_SLLI   3'b001  
`define YSYX210576_INST_SRI    3'b101   

//IW type inst
`define YSYX210576_INST_TYPE_IW 7'b0011011 
`define YSYX210576_INST_ADDIW  3'b000 
`define YSYX210576_INST_SLLIW  3'b001
`define YSYX210576_INST_SRIW   3'b101

// L type inst
`define YSYX210576_INST_TYPE_L 7'b0000011  
`define YSYX210576_INST_LB     3'b000  
`define YSYX210576_INST_LH     3'b001   
`define YSYX210576_INST_LW     3'b010  
`define YSYX210576_INST_LD     3'b011   
`define YSYX210576_INST_LBU    3'b100
`define YSYX210576_INST_LHU    3'b101
`define YSYX210576_INST_LWU    3'b110

// S type inst
`define YSYX210576_INST_TYPE_S 7'b0100011  
`define YSYX210576_INST_SB     3'b000  
`define YSYX210576_INST_SH     3'b001  
`define YSYX210576_INST_SW     3'b010  
`define YSYX210576_INST_SD     3'b011   

// R type inst
`define YSYX210576_INST_TYPE_R 7'b0110011  
`define YSYX210576_INST_ADD_SUB 3'b000  
`define YSYX210576_INST_SLL    3'b001 
`define YSYX210576_INST_SLT    3'b010  
`define YSYX210576_INST_SLTU   3'b011   
`define YSYX210576_INST_XOR    3'b100  
`define YSYX210576_INST_SR     3'b101   
`define YSYX210576_INST_OR     3'b110  
`define YSYX210576_INST_AND    3'b111   

// RW type inst
`define YSYX210576_INST_TYPE_RW 7'b0111011
`define YSYX210576_INST_ADDW_SUBW    3'b000    
`define YSYX210576_INST_SLLW   3'b001    
`define YSYX210576_INST_SRW    3'b101   

// J type inst
`define YSYX210576_INST_JAL    7'b1101111    
`define YSYX210576_INST_JALR   7'b1100111   
`define YSYX210576_INST_LUI    7'b0110111  
`define YSYX210576_INST_AUIPC  7'b0010111    

// J type inst
`define YSYX210576_INST_TYPE_B 7'b1100011    
`define YSYX210576_INST_BEQ    3'b000     
`define YSYX210576_INST_BNE    3'b001   
`define YSYX210576_INST_BLT    3'b100   
`define YSYX210576_INST_BGE    3'b101    
`define YSYX210576_INST_BLTU   3'b110    
`define YSYX210576_INST_BGEU   3'b111      

// CSR reg addr
`define YSYX210576_CSR_CYCLE   12'hc00    
`define YSYX210576_CSR_MTVEC   12'h305
`define YSYX210576_CSR_MCAUSE  12'h342   
`define YSYX210576_CSR_MEPC    12'h341    
`define YSYX210576_CSR_MIE     12'h304     
`define YSYX210576_CSR_MSTATUS 12'h300    
`define YSYX210576_CSR_MSCRATCH 12'h340      
`define YSYX210576_CSR_MIP      12'h344    

// CSR inst
`define YSYX210576_INST_CSR    7'b1110011   
`define YSYX210576_INST_CSRRW  3'b001     
`define YSYX210576_INST_CSRRS  3'b010    
`define YSYX210576_INST_CSRRC  3'b011   
`define YSYX210576_INST_CSRRWI 3'b101    
`define YSYX210576_INST_CSRRSI 3'b110     
`define YSYX210576_INST_CSRRCI 3'b111     
`define YSYX210576_INST_ECALL  32'h73    
`define YSYX210576_INST_EBREAK 32'h00100073    
`define YSYX210576_INST_MRET   32'h30200073    

//clint
`define YSYX210576_AXI_ADDR_WIDTH      64    
`define YSYX210576_AXI_DATA_WIDTH      64    
`define YSYX210576_AXI_ID_WIDTH        4   
`define YSYX210576_AXI_USER_WIDTH      1   
`define YSYX210576_B0XX_AXI_DATA_WIDTH   64    
`define YSYX210576_B0XX_AXI_ID_WIDTH     4    

module ysyx_210576(
    input  clock,
    input  reset,
    input  io_interrupt,
	
    output                                 io_slave_awready,
    input                                  io_slave_awvalid,
    input [31:0]                           io_slave_awaddr,
    input [3:0]                            io_slave_awid,
    input [7:0]                            io_slave_awlen,
    input [2:0]                            io_slave_awsize,
    input [1:0]                            io_slave_awburst,

    output                                 io_slave_wready,
    input                                  io_slave_wvalid,
    input [63:0]                           io_slave_wdata,
    input [7:0]                            io_slave_wstrb,
    input                                  io_slave_wlast,

    input                                  io_slave_bready,
    output                                 io_slave_bvalid,
    output  [1:0]                          io_slave_bresp,
    output  [3:0]                          io_slave_bid,

    output                                 io_slave_arready,
    input                                  io_slave_arvalid,
    input [31:0]                           io_slave_araddr,
    input [3:0]                            io_slave_arid,
    input [7:0]                            io_slave_arlen,
    input [2:0]                            io_slave_arsize,
    input [1:0]                            io_slave_arburst, 

    input                                  io_slave_rready,
    output                                 io_slave_rvalid,
    output  [1:0]                          io_slave_rresp,
    output  [63:0]                         io_slave_rdata,
    output                                 io_slave_rlast,
    output  [3:0]                          io_slave_rid,

    input                                 io_master_awready,
    output                                io_master_awvalid,
    output [31:0]                         io_master_awaddr,
    output [3:0]                          io_master_awid,
    output [7:0]                          io_master_awlen,
    output [2:0]                          io_master_awsize,
    output [1:0]                          io_master_awburst,
   
 
    input                                 io_master_wready,
    output                                io_master_wvalid,
    output [63:0]                         io_master_wdata,
    output [7:0]                          io_master_wstrb,
    output                                io_master_wlast,
 
    output                                io_master_bready,
    input                                 io_master_bvalid,
    input  [1:0]                          io_master_bresp,
    input  [3:0]                          io_master_bid,

    input                                 io_master_arready,
    output                                io_master_arvalid,
    output [31:0]                         io_master_araddr,
    output [3:0]                          io_master_arid,
    output [7:0]                          io_master_arlen,
    output [2:0]                          io_master_arsize,
    output [1:0]                          io_master_arburst,
    
    output                                io_master_rready,
    input                                 io_master_rvalid,
    input  [1:0]                          io_master_rresp,
    input  [63:0]                         io_master_rdata,
    input                                 io_master_rlast,
    input  [3:0]                          io_master_rid,

    output	[5:0]	                      io_sram0_addr,																			
    output			                      io_sram0_cen,																	
    output			                      io_sram0_wen,																	
    output	[127:0]	                      io_sram0_wmask,																			
    output	[127:0]	                      io_sram0_wdata,																			
    input	[127:0]	                      io_sram0_rdata,

    output	[5:0]	                      io_sram1_addr,																			
    output			                      io_sram1_cen,																
    output			                      io_sram1_wen,															
    output	[127:0]	                      io_sram1_wmask,																		
    output	[127:0]	                      io_sram1_wdata,																
    input	[127:0]	                      io_sram1_rdata,

    output	[5:0]	                      io_sram2_addr,																
    output			                      io_sram2_cen,																
    output			                      io_sram2_wen,															
    output	[127:0]	                      io_sram2_wmask,																	
    output	[127:0]	                      io_sram2_wdata,															
    input	[127:0]	                      io_sram2_rdata,															
    output	[5:0]	                      io_sram3_addr,																
    output			                      io_sram3_cen,																	
    output			                      io_sram3_wen,																
    output	[127:0]	                      io_sram3_wmask,																		
    output	[127:0]	                      io_sram3_wdata,																
    input	[127:0]	                      io_sram3_rdata,																
    output	[5:0]	                      io_sram4_addr,																
    output			                      io_sram4_cen,																
    output			                      io_sram4_wen,															
    output	[127:0]	                      io_sram4_wmask,																		
    output	[127:0]	                      io_sram4_wdata,																
    input	[127:0]	                      io_sram4_rdata,																
    output	[5:0]	                      io_sram5_addr,																
    output			                      io_sram5_cen,																
    output			                      io_sram5_wen,															
    output	[127:0]	                      io_sram5_wmask,																		
    output	[127:0]	                      io_sram5_wdata,																
    input	[127:0]	                      io_sram5_rdata,																
    output	[5:0]	                      io_sram6_addr,																
    output			                      io_sram6_cen,																
    output			                      io_sram6_wen,															
    output	[127:0]	                      io_sram6_wmask,																		
    output	[127:0]	                      io_sram6_wdata,																
    input	[127:0]	                      io_sram6_rdata,																
    output	[5:0]	                      io_sram7_addr,																
    output			                      io_sram7_cen,																
    output			                      io_sram7_wen,															
    output	[127:0]	                      io_sram7_wmask,																			
    output	[127:0]	                      io_sram7_wdata,																			
    input	[127:0]	                      io_sram7_rdata




);
    wire [127:0]share_rdata;
    wire [127:0]share_wdata;
    wire [127:0]share_mask;
    wire share_r;
    wire share_w;
    wire [5:0]share_ad;
    assign share_rdata = io_sram0_rdata;
    assign io_sram0_addr = share_ad;
    assign io_sram0_cen = share_r;
    assign io_sram0_wen = share_w;
    assign io_sram0_wmask = share_mask;
    assign io_sram0_wdata = share_wdata;

    assign io_sram1_addr = 6'b0;
    assign io_sram1_cen = 1'b1;
    assign io_sram1_wen = 1'b1;
    assign io_sram1_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    assign io_sram1_wdata = 128'h0;

    assign io_sram2_addr = 6'b0;
    assign io_sram2_cen = 1'b1;
    assign io_sram2_wen = 1'b1;
    assign io_sram2_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    assign io_sram2_wdata = 128'h0;

    assign io_sram3_addr = 6'b0;
    assign io_sram3_cen = 1'b1;
    assign io_sram3_wen = 1'b1;
    assign io_sram3_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    assign io_sram3_wdata = 128'h0;

    assign io_sram4_addr = 6'b0;
    assign io_sram4_cen = 1'b1;
    assign io_sram4_wen = 1'b1;
    assign io_sram4_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    assign io_sram4_wdata = 128'h0;

    assign io_sram5_addr = 6'b0;
    assign io_sram5_cen = 1'b1;
    assign io_sram5_wen = 1'b1;
    assign io_sram5_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    assign io_sram5_wdata = 128'h0;

    assign io_sram6_addr = 6'b0;
    assign io_sram6_cen = 1'b1;
    assign io_sram6_wen = 1'b1;
    assign io_sram6_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    assign io_sram6_wdata = 128'h0;

    assign io_sram7_addr = 6'b0;
    assign io_sram7_cen = 1'b1;
    assign io_sram7_wen = 1'b1;
    assign io_sram7_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    assign io_sram7_wdata = 128'h0;


    wire hold_line;
    wire if_ready;
    wire mem_ready_line;
    wire [2:0]mem_f_size;
    wire aw_ready;
    wire aw_valid;
    wire [`YSYX210576_AXI_ADDR_WIDTH-1:0] aw_addr;
    wire [`YSYX210576_AXI_ID_WIDTH-1:0] aw_id;
    wire [7:0] aw_len;
    wire [2:0] aw_size;
    wire [1:0] aw_burst;
    wire w_ready;
    wire w_valid;
    wire [`YSYX210576_AXI_DATA_WIDTH-1:0] w_data_1;
    wire [`YSYX210576_AXI_DATA_WIDTH/8-1:0] w_strb;
    wire w_last; 
    wire b_ready;
    wire b_valid;
    wire [1:0] b_resp;
    wire [`YSYX210576_AXI_ID_WIDTH-1:0] b_id;
    wire ar_ready;
    wire ar_valid;
    wire [`YSYX210576_AXI_ADDR_WIDTH-1:0] ar_addr;
    wire [`YSYX210576_AXI_ID_WIDTH-1:0] ar_id;
    wire  ar_user;
    wire [7:0] ar_len;
    wire [2:0] ar_size;
    wire [1:0] ar_burst;    
    wire r_ready;
    wire r_valid;
    wire [1:0] r_resp;
    wire [`YSYX210576_AXI_DATA_WIDTH-1:0] r_data;
    wire r_last;
    wire [`YSYX210576_AXI_ID_WIDTH-1:0] r_id;

    wire ram_aw_ready;
    wire ram_aw_valid;
    wire [63:0] ram_aw_addr;
    wire [`YSYX210576_B0XX_AXI_ID_WIDTH-1:0] ram_aw_id;
    wire [7:0] ram_aw_len;
    wire [2:0] ram_aw_size;
    wire [1:0] ram_aw_burst;

    wire ram_w_ready;
    wire ram_w_valid;
    wire [`YSYX210576_B0XX_AXI_DATA_WIDTH-1:0] ram_w_data;
    wire [`YSYX210576_B0XX_AXI_DATA_WIDTH/8-1:0] ram_w_strb;
    wire ram_w_last;

    wire ram_b_ready;
    wire ram_b_valid;
    wire [1:0] ram_b_resp;
    wire [`YSYX210576_B0XX_AXI_ID_WIDTH-1:0] ram_b_id;

    wire ram_ar_ready;
    wire ram_ar_valid;
    wire [63:0] ram_ar_addr;
    wire [`YSYX210576_B0XX_AXI_ID_WIDTH-1:0] ram_ar_id;
    wire [7:0] ram_ar_len;
    wire [2:0] ram_ar_size;
    wire [1:0] ram_ar_burst;

    wire ram_r_ready;
    wire ram_r_valid;
    wire [1:0] ram_r_resp;
    wire [`YSYX210576_B0XX_AXI_DATA_WIDTH-1:0] ram_r_data;
    wire ram_r_last;
    wire [`YSYX210576_B0XX_AXI_ID_WIDTH-1:0] ram_r_id;

    wire cache_r_last;
    wire cache_r_vaild;
    wire cache_r_ready;
    wire [63:0]cache_r_data;
    wire [63:0]cache_ar_addr;
    wire cache_ar_vaild;
    wire cache_ar_ready;
//顶层
    assign io_master_bready             = ram_b_ready;
    assign ram_b_valid                  = io_master_bvalid;
    assign ram_b_resp                   = io_master_bresp;
    assign ram_b_id                     = io_master_bid;


    assign ram_w_ready                  = io_master_wready;
    assign io_master_wvalid             = ram_w_valid;
    assign io_master_wdata              = ram_w_data;
    assign io_master_wstrb              = ram_w_strb;
    assign io_master_wlast              = ram_w_last;

    assign ram_aw_ready                 = io_master_awready;
    assign io_master_awvalid            = ram_aw_valid && ~reset;
    assign io_master_awaddr             = ram_aw_addr[31:0];
    assign io_master_awid               = ram_aw_id;
    assign io_master_awlen              = ram_aw_len;
    assign io_master_awsize             = ram_aw_size;
    assign io_master_awburst            = ram_aw_burst;
    

    assign ram_ar_ready                 = io_master_arready;
    assign io_master_arvalid            = ram_ar_valid && ~reset;
    assign io_master_araddr             = ram_ar_addr[31:0];
    assign io_master_arid               = ram_ar_id;
    assign io_master_arlen              = ram_ar_len;
    assign io_master_arsize             = ram_ar_size;
    assign io_master_arburst            = ram_ar_burst;

    
    assign io_master_rready             = ram_r_ready;
    assign ram_r_valid                  = io_master_rvalid;
    assign ram_r_resp                   = io_master_rresp;
    assign ram_r_data                   = io_master_rdata;
    assign ram_r_last                   = io_master_rlast;
    assign ram_r_id                     = io_master_rid;


    assign io_slave_rvalid  = 1'd0;//unused top output
    assign io_slave_rresp   = 2'd0;
    assign io_slave_rdata   = 64'd0;
    assign io_slave_rlast   = 1'd0;
    assign io_slave_rid     = 4'd0;
    assign io_slave_arready = 1'd0;
    assign io_slave_bvalid  = 1'd0;
    assign io_slave_bresp   = 2'd0;
    assign io_slave_bid     = 4'd0;
    assign io_slave_awready = 1'd0;
    assign io_slave_wready  = 1'd0;

    wire [`YSYX210576_AXI_ID_WIDTH-1:0]d_aw_id;
    wire [`YSYX210576_AXI_ADDR_WIDTH-1:0]d_aw_addr;
    wire [7:0]d_aw_len;
    wire [2:0]d_aw_size;
    wire [1:0]d_aw_burst;
    wire d_aw_valid;
    wire d_aw_ready;

    wire [`YSYX210576_AXI_DATA_WIDTH-1:0]d_w_data;
    wire [`YSYX210576_AXI_DATA_WIDTH/8-1:0]d_w_strb;
    wire d_w_last;
    wire d_w_valid;
    wire d_w_ready;

    wire [`YSYX210576_AXI_ID_WIDTH-1:0]d_b_id;
    wire [1:0]d_b_resp;
    wire d_b_valid;
    wire d_b_ready;

    wire [`YSYX210576_AXI_ID_WIDTH-1:0]d_ar_id;
    wire [`YSYX210576_AXI_ADDR_WIDTH-1:0]d_ar_addr;
    wire [7:0]d_ar_len;
    wire [2:0]d_ar_size;
    wire [1:0]d_ar_burst;
    wire d_ar_valid;
    wire d_ar_ready;

    wire [`YSYX210576_AXI_ID_WIDTH-1:0]d_r_id;
    wire [`YSYX210576_AXI_DATA_WIDTH-1:0]d_r_data;
    wire [1:0]d_r_resp;
    wire d_r_last;
    wire d_r_valid;
    wire d_r_ready;

// if_stage
wire [63 : 0] pc;
wire [63 : 0] inst_addr_line;
wire ena;
wire [31:0] oinst;

//if/id_id 
wire [`YSYX210576_InstAddrBus]  id_pc_i;
wire [31:0]   id_inst_i;


//id_id/ex 
wire [`YSYX210576_InstAddrBus]id_pc;
wire [31:0]   id_inst;
wire id_wreg_o;
wire [4 : 0]id_wd_o;
wire [`YSYX210576_InstDataBus] op1_imm;
wire [`YSYX210576_InstDataBus] op2_imm;
wire [`YSYX210576_InstDataBus] op1_jump;
wire [`YSYX210576_InstDataBus] op2_jump;
wire [`YSYX210576_InstDataBus] id_data1_o;
wire [`YSYX210576_InstDataBus] id_data2_o;
wire csr_w_ena;
wire [`YSYX210576_InstAddrBus]csr_w_addr ;
wire [`YSYX210576_InstDataBus]csr_r_data;
//
wire rs1_en ;
wire [4 : 0]rs1_addr;
wire rs2_en ;
wire [4 : 0]rs2_addr;
//
wire id_ctrl_hold;

//csr
wire [`YSYX210576_InstAddrBus]csr_r_addr;

//id/ex_ex
wire [`YSYX210576_InstDataBus] idex_op1_imm;
wire [`YSYX210576_InstDataBus] idex_op2_imm;
wire [`YSYX210576_InstDataBus] idex_op1_jump;
wire [`YSYX210576_InstDataBus] idex_op2_jump;
wire [`YSYX210576_InstDataBus] ex_data1_i;
wire [`YSYX210576_InstDataBus] ex_data2_i;
wire [`YSYX210576_InstAddrBus]  id_ex_pc;
wire [31:0]   id_ex_inst;
wire [4 : 0]ex_wd_i;
wire ex_wreg_i;
wire idex_csr_we;
wire [`YSYX210576_InstDataBus]idex_csr_rdata;
wire [`YSYX210576_InstAddrBus]idex_csr_waddr;

//ex_csr
wire [`YSYX210576_InstAddrBus] ex2csr_pc;
wire [3:0] ex2int_state;
wire [`YSYX210576_InstDataBus] ex2csr_wdata;
wire ex2csr_w_en;
wire [`YSYX210576_InstAddrBus] ex2csr_waddr;

//ex_ex/mem
wire [`YSYX210576_InstDataBus] ex_mem_wdata;
wire [`YSYX210576_InstAddrBus] ex_mem_addr;
wire ex_mem_we_en;
wire ex_mem_rd_en;
wire [4 : 0]ex_wd_o;
wire ex_wreg_o;
wire [`YSYX210576_InstDataBus] ex_data_o;
wire [31:0]   ex_inst;
wire exmem_jump_flag;
wire [`YSYX210576_InstAddrBus]exmem_jump_addr;

//exe_id
wire [`YSYX210576_InstDataBus]exe_id_data;
wire [`YSYX210576_RegAddrBus]exe_id_waddr;
wire exe_id_wreg;
wire exe2id_rdline;

//ex/mem_mem
wire [`YSYX210576_InstDataBus] exmem_mem_wdata;
wire [`YSYX210576_InstAddrBus] exmem_mem_addr;
wire exmem_mem_we_en;
wire exmem_mem_rd_en;
wire [4 : 0]mem_wd_i;
wire mem_wreg_i;
wire [`YSYX210576_InstDataBus] mem_data_i;
wire [31:0]   ex_mem_inst;

//mem_mem/wb
wire [4 : 0]mem_wd_o;
wire mem_wreg_o;
wire [`YSYX210576_InstDataBus] mem_data_o;

//mem_id
wire [`YSYX210576_InstDataBus]mem_id_data;
wire [`YSYX210576_RegAddrBus]mem_id_waddr;
wire mem_id_wreg;
//
wire [`YSYX210576_InstDataBus]mask;
wire [`YSYX210576_InstDataBus]wrdata;
wire w_en;
wire r_en;
wire [`YSYX210576_InstAddrBus]addr;

//mem/wb_wb
wire [4 : 0]wb_wd_i;
wire wb_wreg_i;
wire [`YSYX210576_InstDataBus] wb_data_i;

//wb_regfile
wire [4 : 0]wb_wd_o;
wire wb_wreg_o;
wire [`YSYX210576_InstDataBus] wb_data_o;

//wb_diff

//regfile_id
wire [`YSYX210576_InstDataBus] reg1_data_o;
wire [`YSYX210576_InstDataBus] reg2_data_o;

//regfile_difftest

//ctrl
wire [`YSYX210576_InstAddrBus] ctrl_jimp_addr;
wire ctrl_jump_flag;
wire ctrl_jump_flag_IF_ID;
wire ctrl_jump_flag_ID_EX;
wire ctrl_hold_flag;
wire ctrl_hold_flag2if;
wire rib_hold_if;
wire rib_hold_ex_mem;
wire rib_hold_if_id;
wire rib_hold_mem_wb;
wire rib_hold_id_ex;

//ram
wire[63:0] inst_o;
wire[`YSYX210576_InstDataBus] mem_data;

//csr
wire [`YSYX210576_InstDataBus]csr_rdata_o;
wire [`YSYX210576_InstAddrBus]csr_j_addr;


//csr_mem/wb
wire [`YSYX210576_InstDataBus]csr2wb_mie;
wire [`YSYX210576_InstDataBus]csr2wb_mstatus;
wire [`YSYX210576_InstDataBus]csr2wb_mip;
wire  rib_hold_line;
    ysyx_210576_axi_rw ysyx_210576_axi_rw0 (
        .clock                          (clock),
        .reset                          (reset),

        .m0_r_en                        (ena),//pc读
        .rw_ready_o                     (if_ready),
        .data_read_o                    (inst_o),
        .rw_addr_i                      (inst_addr_line),

        .mem_ready_o                    (mem_ready_line),
        .m1_w_en                        (w_en),
        .m1_r_en                        (r_en),
        .mask                           (mask),
        .mem2ram_addr_i                 (addr),
        .mem_data_write_i               (wrdata),
        .mem_data_read_o                (mem_data),
        .mem2ram_size                   (mem_f_size),
        
        .axi_aw_ready_i                 (aw_ready),//五条通道
        .axi_aw_valid_o                 (aw_valid),
        .axi_aw_addr_o                  (aw_addr),
        .axi_aw_id_o                    (aw_id),
        .axi_aw_len_o                   (aw_len),
        .axi_aw_size_o                  (aw_size),
        .axi_aw_burst_o                 (aw_burst),

        .axi_w_ready_i                  (w_ready),
        .axi_w_valid_o                  (w_valid),
        .axi_w_data_o                   (w_data_1),
        .axi_w_strb_o                   (w_strb),
        .axi_w_last_o                   (w_last),
        
        .axi_b_ready_o                  (b_ready),
        .axi_b_valid_i                  (b_valid),
        .axi_b_resp_i                   (b_resp),
        .axi_b_id_i                     (b_id),

        .axi_ar_ready_i                 (ar_ready),
        .axi_ar_valid_o                 (ar_valid),
        .axi_ar_addr_o                  (ar_addr),

        .axi_ar_id_o                    (ar_id),
        .axi_ar_user_o                  (ar_user),
        .axi_ar_len_o                   (ar_len),
        .axi_ar_size_o                  (ar_size),
        .axi_ar_burst_o                 (ar_burst),
        
        .axi_r_ready_o                  (r_ready),
        .axi_r_valid_i                  (r_valid),
        .axi_r_resp_i                   (r_resp),
        .axi_r_data_i                   (r_data),
        .axi_r_last_i                   (r_last),
        .axi_r_id_i                     (r_id),

        .hold_flag_o                    (rib_hold_line)
    );
  wire time_stop;
    ysyx_210576_clint ysyx_210576_Clint(
        .clock(clock),
        .reset(reset),
        .clint_aw_id(d_aw_id),
        .clint_aw_addr(d_aw_addr),
        .clint_aw_len(d_aw_len),
        .clint_aw_size(d_aw_size),
        .clint_aw_burst(d_aw_burst),
        .clint_aw_valid(d_aw_valid),
        .clint_aw_ready(d_aw_ready),
        .clint_w_data(d_w_data),
        .clint_w_strb(d_w_strb),
        .clint_w_last(d_w_last),
        .clint_w_valid(d_w_valid),
        .clint_w_ready(d_w_ready),
        .clint_b_id(d_b_id),
        .clint_b_resp(d_b_resp),
        .clint_b_valid(d_b_valid),
        .clint_b_ready(d_b_ready),
        .clint_ar_id(d_ar_id),
        .clint_ar_addr(d_ar_addr),
        .clint_ar_len(d_ar_len),
        .clint_ar_size(d_ar_size),
        .clint_ar_burst(d_ar_burst),
        .clint_ar_valid(d_ar_valid),
        .clint_ar_ready(d_ar_ready),
        .clint_r_id(d_r_id),
        .clint_r_data(d_r_data),
        .clint_r_resp(d_r_resp),
        .clint_r_last(d_r_last),
        .clint_r_valid(d_r_valid),
        .clint_time_stop(time_stop),
        .clint_r_ready(d_r_ready)

    );
    ysyx_210576_axi_clint_ctrl  ysyx_210576_axi_clint_ctrl0 (
        .reset                            (reset),

        .ram_slave_awid                   (ram_aw_id),
        .ram_slave_awaddr                 (ram_aw_addr),
        .ram_slave_awlen                  (ram_aw_len),
        .ram_slave_awsize                 (ram_aw_size),
        .ram_slave_awburst                (ram_aw_burst),

        .ram_slave_awvalid                (ram_aw_valid),
        .ram_slave_awready                (ram_aw_ready),

        .ram_slave_wdata                  (ram_w_data),
        .ram_slave_wstrb                  (ram_w_strb),
        .ram_slave_wlast                  (ram_w_last),
        .ram_slave_wvalid                 (ram_w_valid),
        .ram_slave_wready                 (ram_w_ready),
        .ram_slave_bid                    (ram_b_id),
        .ram_slave_bresp                  (ram_b_resp),
        .ram_slave_bvalid                 (ram_b_valid),
        .ram_slave_bready                 (ram_b_ready),

        .ram_slave_arid                   (ram_ar_id),
        .ram_slave_araddr                 (cache_ar_addr),
        .ram_slave_arlen                  (ram_ar_len),
        .ram_slave_arsize                 (ram_ar_size),
        .ram_slave_arburst                (ram_ar_burst),

        .ram_slave_arvalid                (cache_ar_vaild),
        .ram_slave_arready                (cache_ar_ready),
        .ram_slave_rid                    (ram_r_id),
        .ram_slave_rdata                  (cache_r_data),
        .ram_slave_rresp                  (ram_r_resp),
        .ram_slave_rlast                  (cache_r_last),
        .ram_slave_rvalid                 (cache_r_vaild),
        .ram_slave_rready                 (cache_r_ready),
       
        .clint_slave_awid                 (d_aw_id),
        .clint_slave_awaddr               (d_aw_addr),
        .clint_slave_awlen                (d_aw_len),
        .clint_slave_awsize               (d_aw_size),
        .clint_slave_awburst              (d_aw_burst),

        .clint_slave_awvalid              (d_aw_valid),
        .clint_slave_awready              (d_aw_ready),

        .clint_slave_wdata                (d_w_data),
        .clint_slave_wstrb                (d_w_strb),
        .clint_slave_wlast                (d_w_last),
        .clint_slave_wvalid               (d_w_valid),
        .clint_slave_wready               (d_w_ready),

        .clint_slave_bid                  (d_b_id),
        .clint_slave_bresp                (d_b_resp),
        .clint_slave_bvalid               (d_b_valid),
        .clint_slave_bready               (d_b_ready),

        .clint_slave_arid                 (d_ar_id),
        .clint_slave_araddr               (d_ar_addr),
        .clint_slave_arlen                (d_ar_len),
        .clint_slave_arsize               (d_ar_size),
        .clint_slave_arburst              (d_ar_burst),

        .clint_slave_arvalid              (d_ar_valid),
        .clint_slave_arready              (d_ar_ready),

        .clint_slave_rid                  (d_r_id),
        .clint_slave_rdata                (d_r_data),
        .clint_slave_rresp                (d_r_resp),
        .clint_slave_rlast                (d_r_last),
        .clint_slave_rvalid               (d_r_valid),
        .clint_slave_rready               (d_r_ready),
       
        .master_axi_awid                  (aw_id),
        .master_axi_awaddr                (aw_addr),
        .master_axi_awlen                 (aw_len),
        .master_axi_awsize                (aw_size),
        .master_axi_awburst               (aw_burst),

        .master_axi_awvalid               (aw_valid),
        .master_axi_awready               (aw_ready),
     
        .master_axi_wdata                 (w_data_1),
        .master_axi_wstrb                 (w_strb),
        .master_axi_wlast                 (w_last),
        .master_axi_wvalid                (w_valid),
        .master_axi_wready                (w_ready),
        
        .master_axi_bid                   (b_id),
        .master_axi_bresp                 (b_resp),
        .master_axi_bvalid                (b_valid),
        .master_axi_bready                (b_ready),
        
        .master_axi_arid                  (ar_id),
        .master_axi_araddr                (ar_addr),
        .master_axi_arlen                 (ar_len),
        .master_axi_arsize                (ar_size),
        .master_axi_arburst               (ar_burst),

        .master_axi_arvalid               (ar_valid),
        .master_axi_arready               (ar_ready),
        
        .master_axi_rid                   (r_id),
        .master_axi_rdata                 (r_data),
        .master_axi_rresp                 (r_resp),
        .master_axi_rlast                 (r_last),
        .master_axi_rvalid                (r_valid), 
        .master_axi_rready                (r_ready)
    );


 ysyx_210576_cache ysyx_210576_cache0(
    .clock(clock),
    .reset(reset),

    .Q(share_rdata),
    .CEN(share_r),
    .BWEN(share_mask),
    .WEN(share_w),
    .A(share_ad),
    .D(share_wdata),

    .exejump_flag(exmem_jump_flag),
    .exejump_addr(exmem_jump_addr),
    .cache_d_r_last(cache_r_last),
    .cache_d_r_valid(cache_r_vaild),
    .cache_d_r_ready(cache_r_ready), 
    .cache_d_r_data(cache_r_data),

    .cache_d_ar_addr(cache_ar_addr),
    .cache_d_ar_valid(cache_ar_vaild),
    .cache_d_ar_ready(cache_ar_ready),
    .cache_d_ar_user(ar_user),

    .axi_cache_d_ar_addr(ram_ar_addr),
    .axi_cache_d_ar_valid(ram_ar_valid),
    .axi_cache_d_ar_ready(ram_ar_ready),

    .axi_cache_d_r_data(ram_r_data),
    .axi_cache_d_r_last(ram_r_last),
    .axi_cache_d_r_valid(ram_r_valid),
    .axi_cache_d_r_ready(ram_r_ready)

   );

//pc_reg例化
ysyx_210576_if_stage  ysyx_210576_if_stage0(
.clock(clock),
.reset(reset),
.pc(pc),
.inst_addr(inst_addr_line),
.inst_ena(ena),
.ram_inst(inst_o),
.inst(oinst),
.if_ready(if_ready),

//FROM CTRL
.jump_addr_i(ctrl_jimp_addr),
.hold_flag_ctrl2if(ctrl_hold_flag2if),
.rib_hold_if(rib_hold_if),
.jump_flag_i(ctrl_jump_flag)
);

//assign rom_addr_o=pc;指令存储器的输入地址就是pc的值

//if/id模块例化
ysyx_210576_if_id ysyx_210576_if_id0(
.clock(clock),
.reset(reset),

.jump_flag_i(ctrl_jump_flag_IF_ID),
.hold_flag_i(ctrl_hold_flag),
.if_pc(pc),
.id_pc(id_pc_i),
.if_inst(oinst),
.id_inst(id_inst_i),
.rib_hold_if_id(rib_hold_if_id)
);

//id模块例化
ysyx_210576_id_stage ysyx_210576_id_stage0(
.reset(reset),

.inst(id_inst_i),
.id_pc(id_pc_i),

//from csr
.csr_rdata_i(csr_rdata_o),

//from mem
.mem_wdata(mem_id_data),
.mem_waddr(mem_id_waddr),
.mem_wreg(mem_id_wreg),

//from exe
.exe_wdata(exe_id_data),
.exe_waddr(exe_id_waddr),
.exe_wreg(exe_id_wreg),
.exe2mem_rd(exe2id_rdline),

//来自regfile的输入
.rs1_data(reg1_data_o),
.rs2_data(reg2_data_o),

//送到regfile的信息
.rs1_r_ena(rs1_en),
.rs2_r_ena( rs2_en),
.rs1_r_addr(rs1_addr),
.rs2_r_addr(rs2_addr),

//to csr

.csr_raddr_o(csr_r_addr),

//to id/ex
.csr_we_o(csr_w_ena),
.csr_waddr_o(csr_w_addr),
.id_csr_rdata_i(csr_r_data),

//to ctrl
.Hold_Flag(id_ctrl_hold),
//送到id/ex模块的信息
.id_ex_pc_i(id_pc),
.op1(id_data1_o),
.op2(id_data2_o),
.rd_w_ena(id_wreg_o),
.rd_w_addr(id_wd_o),
.id_ex_inst_i(id_inst),
.op1_o(op1_imm),
.op2_o(op2_imm),
.op1_jump_o(op1_jump),
.op2_jump_o(op2_jump)

);


//regfile模块例化
ysyx_210576_regfile ysyx_210576_regfile1(
.clock(clock),
.reset(reset),
.w_ena(wb_wreg_o),
.w_addr(wb_wd_o),
.w_data(wb_data_o),
.r_ena1(rs1_en),
.r_ena2(rs2_en),
.r_addr1(rs1_addr),
.r_addr2(rs2_addr),
.r_data1(reg1_data_o),
.r_data2(reg2_data_o)
);

//id/ex模块例化
ysyx_210576_id_ex ysyx_210576_id_ex(
.clock(clock),
.reset(reset),

//ctrl
.jump_flag_i(ctrl_jump_flag_ID_EX),
.hold_flag_i(ctrl_hold_flag),
.rib_hold_id_ex(rib_hold_id_ex),

//从id传过来的信息
.id_ex_inst(id_inst),
.id_ex_pc(id_pc),
.id_op1(id_data1_o),
.id_op2(id_data2_o),
.id_w_ena(id_wreg_o),
.id_w_addr(id_wd_o),
.op1_i(op1_imm),
.op2_i(op2_imm),
.op1_jump_i(op1_jump),
.op2_jump_i(op2_jump),
//
.csr_r_data(csr_r_data),
.csr_we(csr_w_ena),
.csr_waddr(csr_w_addr),
//传递到ex的信息
.op1_o(idex_op1_imm),
.op2_o(idex_op2_imm),
.op1_jump_o(idex_op1_jump),
.op2_jump_o(idex_op2_jump),
.ex_op1_i(ex_data1_i),
.ex_op2_i(ex_data2_i),
.ex_w_ena_i(ex_wreg_i),
.ex_w_addr_i(ex_wd_i),
.ex_pc_i(id_ex_pc),
.ex_inst_i(id_ex_inst),
.csr_we2exe(idex_csr_we),
.csr_waddr2exe(idex_csr_waddr),
.csr_r_data2exe(idex_csr_rdata)
);

//ex模块例化
ysyx_210576_exe_stage ysyx_210576_exe_stage(
.reset(reset),
.clock(clock),

.hold_line(hold_line),
//from csr
.exe_mip_i(csr2wb_mip),
.exe_mie_i(csr2wb_mie),
.exe_mstatus_i(csr2wb_mstatus),
.int_addr_i(csr_j_addr),
.exe_clint_time_stop_i(time_stop),
//to id
.ex_rd_data_i1(exe_id_data),
.ex_mem_w_addr_i1(exe_id_waddr),
.ex_mem_w_ena_i1(exe_id_wreg),
.mem_rd2id(exe2id_rdline),

//从id/ex传递过来的信息
.csr_we_i(idex_csr_we),
.csr_waddr_i(idex_csr_waddr),
.csr_rdata_i(idex_csr_rdata),
//
.ex_op1(ex_data1_i),
.ex_op2(ex_data2_i),
.ex_w_ena(ex_wreg_i),
.ex_w_addr(ex_wd_i),
.ex_pc(id_ex_pc),
.ex_inst(id_ex_inst),
.op1_i(idex_op1_imm),
.op2_i(idex_op2_imm),
.op1_jump_i(idex_op1_jump),
.op2_jump_i(idex_op2_jump),
//
// .ex_mem_pc_i(ex_pc),
.ex_mem_ex_inst(ex_inst),
.ex_mem_w_ena_i(ex_wreg_o),
.ex_mem_w_addr_i(ex_wd_o),
.ex_rd_data_i(ex_data_o),
.mem_wdata_o(ex_mem_wdata),
.mem_addr_o(ex_mem_addr),
.mem_we_o(ex_mem_we_en),
.mem_rd_o(ex_mem_rd_en),

.jump_flag_o(exmem_jump_flag),
.jump_addr_o(exmem_jump_addr),

//to csr
.csr_we_o(ex2csr_w_en),
.csr_waddr_o(ex2csr_waddr),
.csr_wdata_o(ex2csr_wdata),
.int_state_o(ex2int_state),
.csr_pc(ex2csr_pc)
);

//ex/mem模块例化
ysyx_210576_ex_mem ysyx_210576_ex_mem0(
.clock(clock),
.reset(reset),

// .exmem_reg_pc(ex_pc),
.exmem_reg_inst(ex_inst),
.exmem_reg_w_ena(ex_wreg_o),
.exmem_reg_w_addr(ex_wd_o),
.exmem_reg_rd_data(ex_data_o),
.exmem_mem_wdata_i(ex_mem_wdata),
.exmem_mem_addr_i(ex_mem_addr),
.exmem_mem_we_i(ex_mem_we_en),
.exmem_mem_rd_i(ex_mem_rd_en),

//from ctrl
.hold_ex_mem(rib_hold_ex_mem),

//ex/mem_mem
.reg_w_ena_i(mem_wreg_i),
.reg_w_addr_i(mem_wd_i),
.reg_wdata_i(mem_data_i),
//.reg_pc_i(ex_mem_pc),
.reg_inst_i(ex_mem_inst),
.exmem_mem_wdata_o(exmem_mem_wdata),
.exmem_mem_addr_o(exmem_mem_addr),
.exmem_mem_we_o(exmem_mem_we_en),
.exmem_mem_rd_o(exmem_mem_rd_en)
);

//mem模块例化
ysyx_210576_mem_stage ysyx_210576_mem_stage0(
.reg_inst(ex_mem_inst),
.reg_w_ena(mem_wreg_i),
.reg_w_addr(mem_wd_i),
.reg_wdata(mem_data_i),
.mem_wdata_i(exmem_mem_wdata),
.mem_addr_i(exmem_mem_addr),
.mem_we_i(exmem_mem_we_en),
.mem_rd_i(exmem_mem_rd_en),

//to ram
.ram_wmask(mask),
.mem_wdata_o(wrdata),
.mem_we(w_en),
.mem_rd(r_en),
.mem_addr(addr),
.mem_size(mem_f_size),

//to exe

//to id
.reg_wdata_i1(mem_id_data),
.reg_w_addr_i1(mem_id_waddr),
.reg_w_ena_i1(mem_id_wreg),

//from ram
.mem_rdata_i(mem_data),
.mem_ready(mem_ready_line),

//mem_mem/wb
.reg_w_ena_i(mem_wreg_o),
.reg_w_addr_i(mem_wd_o),
.reg_wdata_i(mem_data_o)
);

//mem_wb模块例化
ysyx_210576_mem_wb ysyx_210576_mem_wb0(
.clock(clock),
.reset(reset),

//mem_mem/wb
.mem_wb_w_ena(mem_wreg_o),
.mem_wb_w_addr(mem_wd_o),
.mem_wb_wdata(mem_data_o),

//from ctrl
.hold_mem_wb(rib_hold_mem_wb),

//csr_mem/wb

//mem/wb_wb
.wb_w_ena_i(wb_wreg_i),
.wb_w_addr_i(wb_wd_i),
.wb_wdata_i(wb_data_i)
);

//wb模块例化
ysyx_210576_wb_stage ysyx_210576_wb_stage0(
.reset(reset),

//mem/wb_wb
.wb_w_ena(wb_wreg_i),
.wb_w_addr(wb_wd_i),
.wb_wdata(wb_data_i),
//
//wb_diff

//wb_regfile
.regfile_w_ena_i(wb_wreg_o),
.regfile_w_addr_i(wb_wd_o),
.regfile_wdata_i(wb_data_o)
);


//ctrl实例化
ysyx_210576_ctrl_stage  ysyx_210576_ctrl_stage0(
.reset(reset),
.jump_addr_i(exmem_jump_addr),
.jump_flag_i(exmem_jump_flag),
.jump_addr_o(ctrl_jimp_addr),
.jump_flag_IF(ctrl_jump_flag),
.jump_flag_IF_ID(ctrl_jump_flag_IF_ID),
.jump_flag_ID_EX(ctrl_jump_flag_ID_EX),
.hold_flag_o(ctrl_hold_flag),
.hold_flag1(ctrl_hold_flag2if),
.rib_hold_i(rib_hold_line),
.hold_flag_id_i(id_ctrl_hold),
.hold_line(hold_line),

// .hold_csr(csr_hold),
.rib_hold_if(rib_hold_if),
.rib_hold_ex_mem(rib_hold_ex_mem),
.rib_hold_if_id(rib_hold_if_id),
.rib_hold_mem_wb(rib_hold_mem_wb),
.rib_hold_id_ex(rib_hold_id_ex)

);


//csr例化
ysyx_210576_Csr_stage  ysyx_210576_Csr_stage(
.clock(clock),
.reset(reset),
//from ctrl
//from clint
.csr_clint_time_stop_i(time_stop),
//from id
.raddr_i(csr_r_addr),

//from exe
.we_i(ex2csr_w_en),
.waddr_i(ex2csr_waddr),
.data_i(ex2csr_wdata),
.csr_int_state(ex2int_state),
.csr_inst_addr_i(ex2csr_pc),

//to id
.csr_data_o(csr_rdata_o),


//to exe
.csr_int_addr_o(csr_j_addr),

//to mem/wb 
.csr_mie_o(csr2wb_mie),// to exe
.csr_mip_o(csr2wb_mip),// to exe
.csr_mstatus_o(csr2wb_mstatus)// to exe
);

// Difftest


wire _unused_ok = &{1'b0,
                    io_slave_awvalid,
                    io_slave_awaddr,
                    io_slave_awid,
                    io_slave_awlen,
                    io_slave_awsize,
                    io_slave_awburst,
                    io_slave_wvalid,
                    io_slave_wdata,
                    io_slave_wstrb,
                    io_slave_wlast,
                    io_slave_bready,
                    io_slave_arvalid,
                    io_slave_araddr,
                    io_slave_arid,
                    io_slave_arlen,
                    io_slave_arsize,
                    io_slave_arburst,
                    io_slave_rready, // To be fixed
                    ram_aw_addr,
                    ram_ar_addr,
                    io_interrupt,
                    1'b0};

endmodule

module ysyx_210576_axi_clint_ctrl #
(
    parameter DATA_WIDTH = 64,
    parameter ADDR_WIDTH = 64,
    parameter STRB_WIDTH = (DATA_WIDTH/8),
    parameter ID_WIDTH = 4   
) 
(
    input  wire                     reset,
  //ram
    output  reg [ID_WIDTH-1:0]    ram_slave_awid,
    output  reg [ADDR_WIDTH-1:0]  ram_slave_awaddr,
    output  reg [7:0]             ram_slave_awlen,
    output  reg [2:0]             ram_slave_awsize,
    output  reg [1:0]             ram_slave_awburst,
    output  reg                   ram_slave_awvalid,
    input wire                    ram_slave_awready,

    output  reg [DATA_WIDTH-1:0]  ram_slave_wdata,
    output  reg [STRB_WIDTH-1:0]  ram_slave_wstrb,
    output  reg                   ram_slave_wlast,
    output  reg                   ram_slave_wvalid,
    input wire                    ram_slave_wready,

    input wire [ID_WIDTH-1:0]     ram_slave_bid,
    input wire [1:0]              ram_slave_bresp,
    input wire                    ram_slave_bvalid,
    output  reg                   ram_slave_bready,

    output  reg [ID_WIDTH-1:0]    ram_slave_arid,
    output  reg [ADDR_WIDTH-1:0]  ram_slave_araddr,
    output  reg [7:0]             ram_slave_arlen,
    output  reg [2:0]             ram_slave_arsize,
    output  reg [1:0]             ram_slave_arburst,
 
    output  reg                   ram_slave_arvalid,
    input wire                    ram_slave_arready,

    input wire[ID_WIDTH-1:0]      ram_slave_rid, 
    input wire[DATA_WIDTH-1:0]    ram_slave_rdata, 
    input wire[1:0]               ram_slave_rresp, 
    input wire                    ram_slave_rlast, 
    input wire                    ram_slave_rvalid, 
    output  reg                   ram_slave_rready, 
//clint
    output  reg [ID_WIDTH-1:0]      clint_slave_awid,
    output  reg [ADDR_WIDTH-1:0]    clint_slave_awaddr,
    output  reg [7:0]               clint_slave_awlen,
    output  reg [2:0]               clint_slave_awsize,
    output  reg [1:0]               clint_slave_awburst, 

    output  reg                     clint_slave_awvalid, 
    input wire                      clint_slave_awready, 

    output  reg [DATA_WIDTH-1:0]    clint_slave_wdata, 
    output  reg [STRB_WIDTH-1:0]    clint_slave_wstrb, 
    output  reg                     clint_slave_wlast, 
    
    output  reg                     clint_slave_wvalid, 
    input wire                      clint_slave_wready, 
    input wire[ID_WIDTH-1:0]        clint_slave_bid, 
    input wire[1:0]                 clint_slave_bresp,     
    input wire                      clint_slave_bvalid, 
    output  reg                     clint_slave_bready, 

    output  reg [ID_WIDTH-1:0]      clint_slave_arid, 
    output  reg [ADDR_WIDTH-1:0]    clint_slave_araddr, 
    output  reg [7:0]               clint_slave_arlen, 
    output  reg [2:0]               clint_slave_arsize, 
    output  reg [1:0]               clint_slave_arburst, 
   
    output  reg                     clint_slave_arvalid, 
    input wire                      clint_slave_arready, 

    input wire[ID_WIDTH-1:0]        clint_slave_rid, 
    input wire[DATA_WIDTH-1:0]      clint_slave_rdata, 
    input wire[1:0]                 clint_slave_rresp, 
    input wire                      clint_slave_rlast, 
    input wire                      clint_slave_rvalid, 
    output  reg                     clint_slave_rready, 

    //master
    input wire [ID_WIDTH-1:0]        master_axi_awid, 
    input wire [ADDR_WIDTH-1:0]      master_axi_awaddr, 
    input wire [7:0]                 master_axi_awlen, 
    input wire [2:0]                 master_axi_awsize, 
    input wire [1:0]                 master_axi_awburst, 

    input wire                       master_axi_awvalid, 
    output  reg                      master_axi_awready, 

    input wire [DATA_WIDTH-1:0]      master_axi_wdata, 
    input wire [STRB_WIDTH-1:0]      master_axi_wstrb, 
    input wire                       master_axi_wlast,  
    input wire                       master_axi_wvalid,  
    output  reg                      master_axi_wready, 

    output  reg [ID_WIDTH-1:0]      master_axi_bid, 
    output  reg [1:0]               master_axi_bresp,  
    output  reg                     master_axi_bvalid, 
    input wire                      master_axi_bready,  

    input wire [ID_WIDTH-1:0]        master_axi_arid,  
    input wire [ADDR_WIDTH-1:0]      master_axi_araddr,  
    input wire [7:0]                 master_axi_arlen,  
    input wire [2:0]                 master_axi_arsize,  
    input wire [1:0]                 master_axi_arburst,  
   
    input wire                       master_axi_arvalid,  
    output  reg                      master_axi_arready,  

    output  reg [ID_WIDTH-1:0]      master_axi_rid,  
    output  reg [DATA_WIDTH-1:0]    master_axi_rdata, 
    output  reg [1:0]               master_axi_rresp, 
    output  reg                     master_axi_rlast,  
    output  reg                     master_axi_rvalid,  
    input wire                      master_axi_rready 
);
    always@(*)begin
         if(reset == 1'b1)begin
                ram_slave_awid                            = 4'b0000;          
                ram_slave_awaddr                          = 64'h0000_0000_0000_0000;
                ram_slave_awlen                           = 8'h00;
                ram_slave_awsize                          = 3'b000;  
                ram_slave_awburst                         = 2'b01; 
                ram_slave_awvalid                         = 1'b0;
                ram_slave_wdata                           = 64'h0000_0000_0000_0000;
                ram_slave_wstrb                           = 8'h00;
                ram_slave_wlast                           = 1'b0;
                ram_slave_wvalid                          = 1'b0;
                ram_slave_bready                          = 1'b0;
                ram_slave_arid                            = 4'h0;
                ram_slave_araddr                          = 64'h0000_0000_0000_0000;
                ram_slave_arlen                           = 8'h00;
                ram_slave_arsize                          = 3'b000;
                ram_slave_arburst                         = 2'b01;
                ram_slave_arvalid                         = 1'b0;
                ram_slave_rready                          = 1'b0;
                          
                clint_slave_awid                            = 4'b0000;         
                clint_slave_awaddr                          = 64'h0000_0000_0000_0000;
                clint_slave_awlen                           = 8'h00;
                clint_slave_awsize                          = 3'b000;
                clint_slave_awburst                         = 2'b01; 
                clint_slave_awvalid                         = 1'b0;
                clint_slave_wdata                           = 64'h0000_0000_0000_0000;
                clint_slave_wstrb                           = 8'h00;
                clint_slave_wlast                           = 1'b0;
                clint_slave_wvalid                          = 1'b0;
                clint_slave_bready                          = 1'b0;
                clint_slave_arid                            = 4'h0;
                clint_slave_araddr                          = 64'h0000_0000_0000_0000;
                clint_slave_arlen                           = 8'h00;
                clint_slave_arsize                          = 3'b000;
                clint_slave_arburst                         = 2'b01;
                clint_slave_arvalid                         = 1'b0;
                clint_slave_rready                          = 1'b0;           
         end if(((master_axi_awaddr | master_axi_araddr) < 64'h0000_0000_0201_0000) && ( 64'h0000_0000_01FF_FFFF < (master_axi_awaddr | master_axi_araddr) ))begin
                ram_slave_awid                            = 4'b0000;         
                ram_slave_awaddr                          = 64'h0000_0000_0000_0000;
                ram_slave_awlen                           = 8'h00;
                ram_slave_awsize                          = 3'b000;
                ram_slave_awburst                         = 2'b01; 
                ram_slave_awvalid                         = 1'b0;
                ram_slave_wdata                           = 64'h0000_0000_0000_0000;
                ram_slave_wstrb                           = 8'h00;
                ram_slave_wlast                           = 1'b0;
                ram_slave_wvalid                          = 1'b0;
                ram_slave_bready                          = 1'b0;
                ram_slave_arid                            = 4'h0;
                ram_slave_araddr                          = 64'h0000_0000_0000_0000;
                ram_slave_arlen                           = 8'h00;
                ram_slave_arsize                          = 3'b000;
                ram_slave_arburst                         = 2'b01;
                ram_slave_arvalid                         = 1'b0;
                ram_slave_rready                          = 1'b0;
                          
                clint_slave_awid                          = master_axi_awid;    
                clint_slave_awaddr                        = master_axi_awaddr;
                clint_slave_awlen                         = master_axi_awlen;
                clint_slave_awsize                        = master_axi_awsize;
                clint_slave_awburst                       = master_axi_awburst;
                clint_slave_awvalid                       = master_axi_awvalid;
                master_axi_awready                        = clint_slave_awready;

                clint_slave_wdata                         = master_axi_wdata;
                clint_slave_wstrb                         = master_axi_wstrb;
                clint_slave_wlast                         = master_axi_wlast;
                clint_slave_wvalid                        = master_axi_wvalid;
                master_axi_wready                         = clint_slave_wready;
                
                master_axi_bid                             = clint_slave_bid;
                master_axi_bresp                           = clint_slave_bresp;
                master_axi_bvalid                          = clint_slave_bvalid;
                clint_slave_bready                         = master_axi_bready;

                clint_slave_arid                           = master_axi_arid;
                clint_slave_araddr                         = master_axi_araddr;
                clint_slave_arlen                          = master_axi_arlen;
                clint_slave_arsize                         = master_axi_arsize;
                clint_slave_arburst                        = master_axi_arburst;
                clint_slave_arvalid                        = master_axi_arvalid;
                master_axi_arready                         = clint_slave_arready;

                master_axi_rid                             = clint_slave_rid;
                master_axi_rdata                           = clint_slave_rdata;
                master_axi_rresp                           = clint_slave_rresp;
                master_axi_rlast                           = clint_slave_rlast;
                master_axi_rvalid                          = clint_slave_rvalid;
                clint_slave_rready                         = master_axi_rready;                        
                            
         end else if(((master_axi_awaddr | master_axi_araddr) < 64'h0000_0000_1000_1000) && ( 64'h0000_0000_0FFF_FFFF < (master_axi_awaddr | master_axi_araddr)))begin
                ram_slave_awid                            = master_axi_awid;           
                ram_slave_awaddr                          = master_axi_awaddr;
                ram_slave_awlen                           = master_axi_awlen;
                ram_slave_awsize                          = 3'b010;
                ram_slave_awburst                         = master_axi_awburst;
                ram_slave_awvalid                         = master_axi_awvalid;
                master_axi_awready                        = ram_slave_awready;

                ram_slave_wdata                           = master_axi_wdata;
                ram_slave_wstrb                           = master_axi_wstrb;
                ram_slave_wlast                           = master_axi_wlast;
                ram_slave_wvalid                          = master_axi_wvalid;
                master_axi_wready                         = ram_slave_wready;

                master_axi_bid                            = ram_slave_bid;
                master_axi_bresp                          = ram_slave_bresp;
                master_axi_bvalid                         = ram_slave_bvalid;
                ram_slave_bready                          = master_axi_bready;

                ram_slave_arid                            = master_axi_arid;
                ram_slave_araddr                          = master_axi_araddr;
                ram_slave_arlen                           = master_axi_arlen;
                ram_slave_arsize                          = master_axi_arsize;
                ram_slave_arburst                         = master_axi_arburst;
                ram_slave_arvalid                         = master_axi_arvalid;
                master_axi_arready                        = ram_slave_arready;

                master_axi_rid                            = ram_slave_rid;
                master_axi_rdata                          = ram_slave_rdata;
                master_axi_rresp                          = ram_slave_rresp;
                master_axi_rlast                          = ram_slave_rlast;
                master_axi_rvalid                         = ram_slave_rvalid;
                ram_slave_rready                          = master_axi_rready;

                clint_slave_awid                            = 4'b0000;         
                clint_slave_awaddr                          = 64'h0000_0000_0000_0000;
                clint_slave_awlen                           = 8'h00;
                clint_slave_awsize                          = 3'b000;
                clint_slave_awburst                         = 2'b01; 
                clint_slave_awvalid                         = 1'b0;
                clint_slave_wdata                           = 64'h0000_0000_0000_0000;
                clint_slave_wstrb                           = 8'h00;
                clint_slave_wlast                           = 1'b0;
                clint_slave_wvalid                          = 1'b0;
                clint_slave_bready                          = 1'b0;
                clint_slave_arid                            = 4'h0;
                clint_slave_araddr                          = 64'h0000_0000_0000_0000;
                clint_slave_arlen                           = 8'h00;
                clint_slave_arsize                          = 3'b000;
                clint_slave_arburst                         = 2'b01;
                clint_slave_arvalid                         = 1'b0;
                clint_slave_rready                          = 1'b0;                     
             
         end else if((((master_axi_awaddr | master_axi_araddr) < 64'h0000_0000_8000_0000) && (64'h0000_0000_1000_0FFF < (master_axi_awaddr | master_axi_araddr))) || (((master_axi_awaddr | master_axi_araddr) < 64'h0000_0000_1000_0000) && (64'h0000_0000_0200_FFFF < (master_axi_awaddr | master_axi_araddr))) || (((master_axi_awaddr | master_axi_araddr) < 64'h0000_0000_0200_0000) && (64'h0000_0000_0000_0000 < (master_axi_awaddr | master_axi_araddr))))begin
                ram_slave_awid                            = master_axi_awid;           
                ram_slave_awaddr                          = master_axi_awaddr;
                ram_slave_awlen                           = master_axi_awlen;
                ram_slave_awsize                          = 3'b010;
                ram_slave_awburst                         = master_axi_awburst;
                ram_slave_awvalid                         = master_axi_awvalid;
                master_axi_awready                        = ram_slave_awready;

                ram_slave_wdata                           = master_axi_wdata;
                ram_slave_wstrb                           = master_axi_wstrb;
                ram_slave_wlast                           = master_axi_wlast;
                ram_slave_wvalid                          = master_axi_wvalid;
                master_axi_wready                         = ram_slave_wready;

                master_axi_bid                            = ram_slave_bid;
                master_axi_bresp                          = ram_slave_bresp;
                master_axi_bvalid                         = ram_slave_bvalid;
                ram_slave_bready                          = master_axi_bready;

                ram_slave_arid                            = master_axi_arid;
                ram_slave_araddr                          = master_axi_araddr;
                ram_slave_arlen                           = master_axi_arlen;
                ram_slave_arsize                          = master_axi_arsize;
                ram_slave_arburst                         = master_axi_arburst;
                ram_slave_arvalid                         = master_axi_arvalid;
                master_axi_arready                        = ram_slave_arready;

                master_axi_rid                            = ram_slave_rid;
                master_axi_rdata                          = ram_slave_rdata;
                master_axi_rresp                          = ram_slave_rresp;
                master_axi_rlast                          = ram_slave_rlast;
                master_axi_rvalid                         = ram_slave_rvalid;
                ram_slave_rready                          = master_axi_rready;

                clint_slave_awid                            = 4'b0000;         
                clint_slave_awaddr                          = 64'h0000_0000_0000_0000;
                clint_slave_awlen                           = 8'h00;
                clint_slave_awsize                          = 3'b000;
                clint_slave_awburst                         = 2'b01; 
                clint_slave_awvalid                         = 1'b0;
                clint_slave_wdata                           = 64'h0000_0000_0000_0000;
                clint_slave_wstrb                           = 8'h00;
                clint_slave_wlast                           = 1'b0;
                clint_slave_wvalid                          = 1'b0;
                clint_slave_bready                          = 1'b0;
                clint_slave_arid                            = 4'h0;
                clint_slave_araddr                          = 64'h0000_0000_0000_0000;
                clint_slave_arlen                           = 8'h00;
                clint_slave_arsize                          = 3'b000;
                clint_slave_arburst                         = 2'b01;
                clint_slave_arvalid                         = 1'b0;
                clint_slave_rready                          = 1'b0;     
             
         end else begin
                ram_slave_awid                            = master_axi_awid;           
                ram_slave_awaddr                          = master_axi_awaddr;
                ram_slave_awlen                           = master_axi_awlen;
                ram_slave_awsize                          = master_axi_awsize;
                ram_slave_awburst                         = master_axi_awburst;
                ram_slave_awvalid                         = master_axi_awvalid;
                master_axi_awready                        = ram_slave_awready;

                ram_slave_wdata                           = master_axi_wdata;
                ram_slave_wstrb                           = master_axi_wstrb;
                ram_slave_wlast                           = master_axi_wlast;
                ram_slave_wvalid                          = master_axi_wvalid;
                master_axi_wready                         = ram_slave_wready;

                master_axi_bid                            = ram_slave_bid;
                master_axi_bresp                          = ram_slave_bresp;
                master_axi_bvalid                         = ram_slave_bvalid;
                ram_slave_bready                          = master_axi_bready;

                ram_slave_arid                            = master_axi_arid;
                ram_slave_araddr                          = master_axi_araddr;
                ram_slave_arlen                           = master_axi_arlen;
                ram_slave_arsize                          = master_axi_arsize;
                ram_slave_arburst                         = master_axi_arburst;
                ram_slave_arvalid                         = master_axi_arvalid;
                master_axi_arready                        = ram_slave_arready;

                master_axi_rid                            = ram_slave_rid;
                master_axi_rdata                          = ram_slave_rdata;
                master_axi_rresp                          = ram_slave_rresp;
                master_axi_rlast                          = ram_slave_rlast;
                master_axi_rvalid                         = ram_slave_rvalid;
                ram_slave_rready                          = master_axi_rready;

                clint_slave_awid                            = 4'b0000;         
                clint_slave_awaddr                          = 64'h0000_0000_0000_0000;
                clint_slave_awlen                           = 8'h00;
                clint_slave_awsize                          = 3'b000;
                clint_slave_awburst                         = 2'b01; 
                clint_slave_awvalid                         = 1'b0;
                clint_slave_wdata                           = 64'h0000_0000_0000_0000;
                clint_slave_wstrb                           = 8'h00;
                clint_slave_wlast                           = 1'b0;
                clint_slave_wvalid                          = 1'b0;

                clint_slave_bready                          = 1'b0;
                clint_slave_arid                            = 4'h0;
                clint_slave_araddr                          = 64'h0000_0000_0000_0000;
                clint_slave_arlen                           = 8'h00;
                clint_slave_arsize                          = 3'b000;
                clint_slave_arburst                         = 2'b01;
                clint_slave_arvalid                         = 1'b0;
                clint_slave_rready                          = 1'b0;                       
        end

    end

endmodule


module ysyx_210576_axi_rw # (
    parameter YSYX210576_AXI_DATA_WIDTH    = 64,
    parameter YSYX210576_AXI_ADDR_WIDTH    = 64,
    parameter YSYX210576_AXI_ID_WIDTH      = 4,
    parameter YSYX210576_AXI_USER_WIDTH    = 1
)(
    input                                 clock,
    input                                 reset,

	output reg                            rw_ready_o,
    input                                 m0_r_en,
    output reg[63:0]                         data_read_o,
    input  [63:0]                      rw_addr_i,
    //mem
	output reg                            mem_ready_o,
    input                                 m1_r_en,
    input                                 m1_w_en,
    output reg[63:0]                         mem_data_read_o,
    input  [63:0]                         mem_data_write_i,
    input  [63:0]                         mem2ram_addr_i,
	input  [63:0]                         mask,
    input  [2:0]                          mem2ram_size,

    // Advanced eXtensible Interface
    input                                  axi_aw_ready_i,
    output reg                             axi_aw_valid_o,
    output reg[YSYX210576_AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,
    output reg[YSYX210576_AXI_ID_WIDTH-1:0]           axi_aw_id_o,
    output reg[7:0]                        axi_aw_len_o,
    output reg[2:0]                        axi_aw_size_o,
    output reg[1:0]                        axi_aw_burst_o,

    input                                  axi_w_ready_i,
    output reg                             axi_w_valid_o,
    output reg[YSYX210576_AXI_DATA_WIDTH-1:0]         axi_w_data_o,
    output reg[YSYX210576_AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,
    output reg                             axi_w_last_o,
    
    output reg                             axi_b_ready_o,
    input                                  axi_b_valid_i,
    input  [1:0]                           axi_b_resp_i,
    input  [YSYX210576_AXI_ID_WIDTH-1:0]              axi_b_id_i,

    input                                  axi_ar_ready_i,
    output reg                             axi_ar_valid_o,
    output reg[YSYX210576_AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,
    output reg[YSYX210576_AXI_ID_WIDTH-1:0]           axi_ar_id_o,
    output reg[YSYX210576_AXI_USER_WIDTH-1:0]         axi_ar_user_o,
    output reg[7:0]                        axi_ar_len_o,
    output reg[2:0]                        axi_ar_size_o,
    output reg[1:0]                        axi_ar_burst_o,
    
    output reg                             axi_r_ready_o,
    input                                  axi_r_valid_i,
    input  [1:0]                           axi_r_resp_i,
    input  [YSYX210576_AXI_DATA_WIDTH-1:0]            axi_r_data_i,
    input                                  axi_r_last_i,
    input  [YSYX210576_AXI_ID_WIDTH-1:0]              axi_r_id_i,

    output reg  hold_flag_o                 // 暂停流水线标志
);

    wire [1:0]grant0 = 2'b00;
    wire [1:0]grant1 = 2'b01;
    wire [1:0]grant3 = 2'b10;
    wire [1:0]grant2 = 2'b11;
    wire [1:0]grant;
//优先级

    assign grant =  (m1_w_en) ? grant3 :
                    (m1_r_en) ? grant1 :                      
                    (m0_r_en) ? grant0 :grant2;
                   
    //使能信号
    wire w_valid     = m1_w_en ;
    wire r_valid     = m1_r_en | m0_r_en ;
    // ------------------State Machine------------------
    wire [1:0] W_STATE_IDLE = 2'b00, W_STATE_ADDR = 2'b01, W_STATE_WRITE = 2'b10, W_STATE_RESP = 2'b11;
    wire [1:0] R_STATE_IDLE = 2'b00, R_STATE_ADDR = 2'b01, R_STATE_READ  = 2'b10;
    reg [1:0] r_state;
    reg [1:0] w_state;
    // Wirte State Machine
    always @(posedge clock) begin
        if (reset) begin
            w_state <= W_STATE_ADDR; 
        end
        else begin
            if (w_valid) begin
                case (w_state)
                    W_STATE_IDLE:                        w_state <= W_STATE_ADDR;
                    W_STATE_ADDR:  if (axi_aw_ready_i)   w_state <= W_STATE_WRITE;
                    W_STATE_WRITE: if (axi_w_ready_i & axi_w_valid_o & axi_w_last_o)    w_state <= W_STATE_RESP;
                    W_STATE_RESP:  if (axi_b_valid_i )    w_state <= W_STATE_IDLE;
                endcase
            end
        end
    end

    // Read State Machine
    always @(posedge clock) begin
        if (reset) begin
            r_state <= R_STATE_ADDR;
        end
        else begin
            if (r_valid) begin
                case (r_state)
                    R_STATE_IDLE:                        r_state <= R_STATE_ADDR;
                    R_STATE_ADDR: if (axi_ar_ready_i & axi_ar_valid_o)    r_state <= R_STATE_READ;
                    R_STATE_READ: if (axi_r_last_i & axi_r_valid_i )      r_state <= R_STATE_IDLE;

                    default:;
                endcase
            end
        end
    end
reg hs;
always @(posedge clock ) begin
    if(reset)begin
      hs = 1'b0;
    end else if (axi_ar_ready_i & axi_ar_valid_o)begin
      hs = 1'b1;
    end else begin
      hs = 1'b0;
    end
end

always @ (*) begin    
    hold_flag_o     = 1'b0;
    rw_ready_o      = 1'b0;
    mem_ready_o     = 1'b0;//
    axi_r_ready_o   = 1'b0;
    axi_ar_valid_o  = 1'b0;         
    axi_ar_len_o    = 8'h00;      
    axi_ar_burst_o  = 2'b01;       
    axi_ar_id_o     = 4'b0000;    
    axi_ar_size_o  = 3'b000;
    axi_ar_user_o   = 1'b0;       
    axi_ar_addr_o   = `YSYX210576_Zeroword;
    axi_aw_addr_o  = `YSYX210576_Zeroword;
    axi_aw_id_o    = 4'b0000;
    axi_aw_len_o   = 8'h00;
    axi_aw_size_o  = 3'b000;
    axi_aw_burst_o = 2'b0;
    axi_aw_valid_o  =1'b0;
    axi_w_valid_o  = 1'b0;
    axi_w_data_o   = 64'h0;
    axi_w_strb_o   = 8'b0;
    axi_w_last_o    = 1'b0;
    axi_b_ready_o   = 1'b0;
    mem_data_read_o = 64'h0;
    data_read_o     = 64'h0;

    case (grant)   
        grant1: begin   
            case (r_state)
            //pc 读通道
            R_STATE_IDLE:begin
                    hold_flag_o     = 1'b0;
                    rw_ready_o      = 1'b0;
                    mem_ready_o     = 1'b1;//
                    axi_r_ready_o   = 1'b0;
                    axi_ar_valid_o  = 1'b0;       
                    axi_ar_len_o    = 8'h00;      
                    axi_ar_burst_o  = 2'b0;       
                    axi_ar_id_o     = 4'b0000;    
                    axi_ar_user_o   = 1'b0;       
                    axi_aw_valid_o  =1'b0;
                    axi_w_valid_o  = 1'b0;
                    axi_b_ready_o   = 1'b0; 
                    axi_w_strb_o    =8'h00;
                    axi_ar_addr_o   = `YSYX210576_Zeroword;
                    mem_data_read_o = axi_r_data_i;
                    data_read_o     = `YSYX210576_Zeroword;
                    
                end
                R_STATE_ADDR : begin
                //pc读通道
                    axi_ar_valid_o  = (mem2ram_addr_i[31] == 1 )?axi_ar_ready_i:~hs;//地址握手
                    axi_ar_addr_o   =  mem2ram_addr_i;
                    axi_ar_size_o   = (mem2ram_addr_i[31] == 1 )? 3'b011 :3'b010;//
                    axi_ar_len_o    = 8'h00;
                    axi_ar_burst_o  = 2'b01;
                    axi_ar_id_o     = 4'b0000;
                    axi_ar_user_o   = 1'b0;
                    rw_ready_o      = 1'b0;
                    mem_ready_o     = 1'b0;
                    hold_flag_o     = 1'b1;
                    mem_data_read_o = `YSYX210576_Zeroword;
                    data_read_o     = 64'h0;
                    axi_aw_valid_o  =1'b0;
                    axi_w_valid_o   = 1'b0;
                    axi_b_ready_o   = 1'b0;  
                    axi_w_strb_o    =8'h00;                                    
            end
                 R_STATE_READ: begin
                    hold_flag_o     = 1'b1;
                    axi_ar_valid_o  = 1'b0;
                    axi_ar_addr_o   = mem2ram_addr_i; 
                    axi_r_ready_o   = 1'b1;//握手转换
                    mem_data_read_o = axi_r_data_i;
                    axi_ar_len_o    = 8'h00;
                    axi_ar_size_o   = 3'b000;
                    axi_ar_burst_o  = 2'b0;
                    rw_ready_o      = 1'b0;
                    mem_ready_o     = 1'b0;
                    axi_ar_id_o     = 4'b0000;
                    axi_ar_user_o   = 1'b0;
                    axi_aw_valid_o  =1'b0;
                    axi_w_strb_o    = 8'h00;
                    axi_w_valid_o   = 1'b0;
                    axi_b_ready_o   = 1'b0; 
                    data_read_o     = `YSYX210576_Zeroword;              
                end

                default:;
            endcase
        end
        grant3:begin
            case (w_state)    

                 W_STATE_IDLE:begin
                    hold_flag_o    = 1'b0;
                    axi_aw_valid_o = 1'b0;
                    axi_aw_addr_o  = `YSYX210576_Zeroword;
                    axi_aw_id_o    = 4'b0000;
                    axi_aw_len_o   = 8'h00;
                    axi_aw_size_o  = 3'b000;
                    axi_aw_burst_o = 2'b0;
                    axi_w_valid_o  = 1'b0;
                    axi_w_data_o   = mem_data_write_i;
                    axi_w_strb_o   = {mask[63],mask[55],mask[47],mask[39],mask[31],mask[23],mask[15],mask[7]};
                    axi_w_last_o    = 1'b0;
                    axi_b_ready_o   = 1'b0;
                    mem_ready_o     = 1'b1;
                    rw_ready_o     = 1'b0;  
                    axi_r_ready_o  = 1'b0;
                    axi_ar_valid_o = 1'b0;  
                    mem_data_read_o = 64'h0;
                    data_read_o     = 64'h0;                                       
                end
                W_STATE_ADDR :begin

                //写地址通道
                    hold_flag_o   = 1'b1;
                    axi_aw_valid_o = 1'b1;
                    axi_aw_addr_o  = mem2ram_addr_i;
                    axi_ar_addr_o  = `YSYX210576_Zeroword;
                    axi_aw_id_o    = 4'b0000;
                    axi_aw_len_o   = 8'h00;
                    axi_aw_size_o  = (mem2ram_addr_i[31] == 1 )? mem2ram_size : 3'b010;
                    axi_aw_burst_o = 2'b01;
                    axi_w_valid_o   = 1'b0;
                    axi_w_data_o    = mem_data_write_i;
                    axi_w_strb_o    = {mask[63],mask[55],mask[47],mask[39],mask[31],mask[23],mask[15],mask[7]};
                    axi_w_last_o    = 1'b0;
                    axi_b_ready_o   = 1'b0;
                    mem_ready_o     = 1'b0;
                    rw_ready_o     = 1'b0;
                    axi_r_ready_o  = 1'b0;
                    axi_ar_valid_o = 1'b0;
                    mem_data_read_o = 64'h0;
                    data_read_o     = 64'h0;
                end
                W_STATE_WRITE:begin
                //mem 写数据通道
                    hold_flag_o    = 1'b1;
                    axi_aw_valid_o = 1'b0;
                    axi_aw_addr_o  = mem2ram_addr_i;
                    axi_ar_addr_o  = `YSYX210576_Zeroword;
                    axi_aw_id_o    = 4'b0000;
                    axi_aw_len_o   = 8'h00;
                    axi_aw_size_o  = 3'b000;
                    axi_aw_burst_o = 2'b0;
                    axi_w_valid_o  = 1'b1;
                    axi_w_data_o   = mem_data_write_i;
                    axi_w_strb_o   = {mask[63],mask[55],mask[47],mask[39],mask[31],mask[23],mask[15],mask[7]};
                    axi_w_last_o    = 1'b1;
                    axi_b_ready_o   = 1'b0;
                    mem_ready_o     = 1'b0;
                    rw_ready_o     = 1'b0;
                    axi_r_ready_o  = 1'b0;
                    axi_ar_valid_o = 1'b0;
                    mem_data_read_o = 64'h0;
                    data_read_o     = 64'h0;
                end
                W_STATE_RESP :begin
                    hold_flag_o    = 1'b1;
                    axi_aw_valid_o = 1'b0;
                    axi_aw_addr_o  = mem2ram_addr_i;
                    axi_ar_addr_o  = `YSYX210576_Zeroword;
                    axi_aw_id_o    = 4'b0000;
                    axi_aw_len_o   = 8'h00;
                    axi_aw_size_o  = 3'b000;
                    axi_aw_burst_o = 2'b01;
                    axi_w_valid_o  = 1'b0;
                    axi_w_data_o   = mem_data_write_i;
                    axi_w_strb_o   = {mask[63],mask[55],mask[47],mask[39],mask[31],mask[23],mask[15],mask[7]};
                    axi_w_last_o    = 1'b1;
                    axi_b_ready_o   = 1'b1;
                    mem_ready_o     = 1'b0;
                    rw_ready_o     = 1'b0;
                    axi_r_ready_o  = 1'b0;
                    axi_ar_valid_o = 1'b0;                 
                    mem_data_read_o = 64'h0;
                    data_read_o     = 64'h0;
                end

                default:; 
        endcase
                
        end
      grant0: begin
        case (r_state)
                R_STATE_IDLE:begin
                    hold_flag_o     = 1'b0;
                    rw_ready_o      = 1'b1;
                    mem_ready_o     = 1'b1;//
                    axi_r_ready_o   = 1'b0;
                    axi_ar_valid_o  = 1'b0;
                    axi_ar_len_o    = 8'h00;
                    axi_ar_burst_o  = 2'b0;
                    axi_ar_id_o     = 4'b0000;
                    axi_ar_user_o   = 1'b1;
                    axi_aw_valid_o  =1'b0;
                    axi_w_strb_o    =8'h00;
                    axi_w_valid_o  = 1'b0;
                    axi_b_ready_o   = 1'b0;
                    mem_data_read_o = 64'h0;
                    data_read_o     = axi_r_data_i;   
                    axi_ar_addr_o   =  (rw_addr_i[31] == 1)?rw_addr_i:64'h0;                 
                end

                R_STATE_ADDR : begin
                //pc读通道
                    hold_flag_o     = 1'b1;
                    axi_ar_valid_o  = (rw_addr_i[31] == 1 )?axi_ar_ready_i:~hs;//地址握手
                    axi_ar_addr_o   =  rw_addr_i;
                    axi_ar_size_o   = (rw_addr_i[31] == 1)?3'b011:3'b010;//
                    axi_ar_len_o    = (rw_addr_i[31] == 1)?8'b0000_0001:8'h00;
                    axi_ar_burst_o  = 2'b01;
                    axi_ar_id_o     = 4'b0000;
                    axi_ar_user_o   = 1'b1;
                    axi_r_ready_o   = 1'b0;
                    rw_ready_o      = 1'b0;
                    mem_ready_o     = 1'b0;
                    mem_data_read_o = 64'h0;                    
                    data_read_o     = 64'h0;
                    axi_aw_valid_o  =1'b0;
                    axi_w_valid_o  = 1'b0;
                    axi_b_ready_o   = 1'b0;
                    axi_w_strb_o    =8'h00;                    
                end

                 R_STATE_READ: begin
                    hold_flag_o     = 1'b1;                     
                    axi_ar_valid_o  = 1'b0;
                    axi_ar_addr_o   = rw_addr_i;
                    axi_r_ready_o   = 1'b1;//握手转换
                    data_read_o     = axi_r_data_i;
                    mem_data_read_o = 64'h0;                   
                    axi_ar_len_o    = 8'h00;
                    axi_ar_size_o   = 3'b000;
                    axi_ar_burst_o  = 2'b0;
                    rw_ready_o      = 1'b0;
                    mem_ready_o     = 1'b0;
                    axi_ar_id_o     = 4'b0000;
                    axi_ar_user_o   = 1'b1;
                    axi_aw_valid_o  =1'b0;
                    axi_w_strb_o    =8'h00;
                    axi_w_valid_o  = 1'b0;
                    axi_b_ready_o   = 1'b0;                    
                    axi_w_data_o   = mem_data_write_i;
                    axi_w_strb_o   = {mask[63],mask[55],mask[47],mask[39],mask[31],mask[23],mask[15],mask[7]};                    
                end

                default:;
        endcase
          end
        grant2:begin
                    hold_flag_o = 1'b0;
                    rw_ready_o     = 1'b1;
                    mem_ready_o    = 1'b1;
                    //data_read_o     = 64'h0;
                    //mem_data_read_o = 64'h0;  
                    // axi_ar_valid_o  = 1'b0;
                    // axi_aw_valid_o  =1'b0;
                    // axi_w_valid_o  = 1'b0;
                    // axi_b_ready_o   = 1'b0; 
                    // axi_r_ready_o   = 1'b0;
        end
          default:; 
    endcase
end

wire _unused_ok = &{1'b0,
                    axi_b_resp_i,
                    axi_b_id_i,
                    axi_r_resp_i,
                    axi_r_id_i,
                    mask,
                    1'b0};
endmodule

module ysyx_210576_cache(
    input clock,
    input reset,

    //connect with axi_clint_ctrl
    input wire exejump_flag,
    input wire [63:0]exejump_addr,
    input wire [`YSYX210576_AXI_ADDR_WIDTH-1:0]cache_d_ar_addr,
    input wire cache_d_ar_user,
    input wire cache_d_ar_valid,

    input [127:0] Q,
    output CEN,
    output WEN,
    output [127:0] BWEN,
    output [5:0]A,
    output [127:0]D,

    output reg cache_d_ar_ready,

    output wire [`YSYX210576_AXI_DATA_WIDTH-1:0]cache_d_r_data,
    output reg cache_d_r_last,
    output reg cache_d_r_valid,
    input wire cache_d_r_ready, 

    //to ram
    output wire [`YSYX210576_AXI_ADDR_WIDTH-1:0]axi_cache_d_ar_addr,
    output wire axi_cache_d_ar_valid,
    // output wire axi_cache_d_ar_user,
    input wire axi_cache_d_ar_ready,

    input wire [`YSYX210576_AXI_DATA_WIDTH-1:0]axi_cache_d_r_data,
    input wire axi_cache_d_r_last,
    input wire axi_cache_d_r_valid,
    output wire axi_cache_d_r_ready


);
wire [5:0]I_index = cache_d_ar_addr[9:4];
wire I_line_offset = cache_d_ar_addr[3];
wire [20:0]pc_cp_tag  = cache_d_ar_addr[30:10];
wire [127:0]cache_r_data;//命中读数据
reg [63:0]pc2;
reg [31:0] regs[0 : 63];
wire [31:0]REG_DATA = regs[I_index];
wire [20:0]I_tag = REG_DATA[30:10];
assign cache_r_data = Q;
integer i;
reg [63:0]begin_data;
always @(posedge clock ) begin
    if(reset)begin
      begin_data <= 64'h0; 
    end else if ((cache_d_ar_addr == 64'h0000_0000_3000_0000) && axi_cache_d_r_valid && axi_cache_d_r_last)begin
      begin_data <= axi_cache_d_r_data;
    end else begin
      begin_data <= begin_data;
    end
end

always @(posedge clock) begin
    if(reset )begin
        pc2 <= 64'h0; 
    end else begin
        pc2 <= cache_d_ar_addr;  
    end     
end
wire pc_change  = (pc2 == cache_d_ar_addr)?0:1;//pc改变标识
wire I_cache_hit2 = ((pc_cp_tag == I_tag)  & (REG_DATA[31] == 1'b1 ) & (cache_d_ar_user == 1'b1)  & ~(cache_d_ar_addr == 64'h80000000) )?1:0;
//pc hit保持
reg I_cache_hit1;
always @(posedge clock) begin
    if(reset == `YSYX210576_RstEnable)begin
        I_cache_hit1 <= 1'b0;
    end else if (pc_change)begin
        I_cache_hit1 <= I_cache_hit2;
    end else begin
        I_cache_hit1 <= I_cache_hit1;
    end
end

//命中判断
    //wire [4:0]I_offset = {2'b0,cache_d_ar_addr[2:0]};
    wire I_cache_hit3 = (pc_change)?I_cache_hit2:I_cache_hit1;//keep hit status
    wire I_cache_hit = I_cache_hit3 & (cache_d_ar_addr[31] == 1'b1);


reg [63:0]jump_addr_keep; 
always @(posedge clock) begin
    if(reset == `YSYX210576_RstEnable)begin
        jump_addr_keep <= 64'h0000_0000_0000_0000;
    end else if (exejump_flag)begin
        jump_addr_keep <= exejump_addr;
    end else begin
        jump_addr_keep <= jump_addr_keep;
    end
end

wire jump_equal_tag = ((cache_d_ar_addr == jump_addr_keep) & (cache_d_ar_addr[31] == 1))?1:0;//跳转判断，后四位的偏移位置零



    //外部tag判断与写入 & 复位

	
	always @(posedge clock) begin
		if ( reset == 1'b1 ) begin
            for (i = 0; i < 64; i = i + 1) begin
                regs[i] <= 32'h0000_0000;
            end
        end else begin
			if (~I_cache_hit  & (cache_d_ar_user == 1'b1) & ~(cache_d_ar_addr == 64'h0000_0000_0000_0000) & (cache_d_ar_addr[31] == 1'b1)) 
				regs[I_index] <= cache_d_ar_addr[31:0];
		end
    end

    reg [63:0]axi_r_data1 ;//高低
    always @(posedge clock) begin
        if(reset == `YSYX210576_RstEnable)begin
            axi_r_data1 <= 64'h0000_0000_0000_0000;//低32指令
        end else if(~I_cache_hit & ~axi_cache_d_r_last & ~(cache_d_ar_addr == 64'h0000_0000_0000_0000) & axi_cache_d_r_valid & (cache_d_ar_addr[31] == 1) & (cache_d_ar_user == 1'b1)) begin
            axi_r_data1 <= axi_cache_d_r_data;     
        end else begin
            axi_r_data1 <= axi_r_data1;   
        end  
    end
    reg [63:0]axi_r_data2;//高32指令
    always @(posedge clock) begin
        if(reset == `YSYX210576_RstEnable)begin
            axi_r_data2 <= 64'h0000_0000_0000_0000;
        end else if(~I_cache_hit & axi_cache_d_r_last & ~(cache_d_ar_addr == 64'h0000_0000_0000_0000) & axi_cache_d_r_valid & (cache_d_ar_addr[31] == 1) & (cache_d_ar_user == 1'b1)) begin
            axi_r_data2 <= axi_cache_d_r_data;     
        end else begin
            axi_r_data2 <= axi_r_data2;   
        end  
    end

    reg [63:0]axi_r_data4;//ram data
    always @(posedge clock) begin
        if(reset == `YSYX210576_RstEnable)begin
            axi_r_data4 <= 64'h0000_0000_0000_0000;
        end else if(~I_cache_hit & axi_cache_d_r_last & ~(cache_d_ar_addr == 64'h0000_0000_0000_0000)) begin
            axi_r_data4 <= axi_cache_d_r_data;     
        end else begin
            axi_r_data4 <= axi_r_data4;   
        end  
    end

    reg [63:0]axi_r_data3;//mem_stage_data
    always @(posedge clock) begin
        if(reset == `YSYX210576_RstEnable)begin
            axi_r_data3 <= 64'hFFEE_FFFF_FFFF_FFFF;
        end else if( ~I_cache_hit & axi_cache_d_r_last & ~(cache_d_ar_addr == 64'h0000_0000_0000_0000) & (cache_d_ar_user == 1'b0)) begin
            axi_r_data3 <= axi_cache_d_r_data;     
        end else begin
            axi_r_data3 <= axi_r_data3;   
        end  
    end
    wire [63:0]axi_choose_data = (cache_d_ar_addr[3:0] == 4'b0000 | cache_d_ar_addr[3:0] == 4'b0100 )?axi_r_data1:axi_r_data2;
    wire [63:0]choose_cache_rdata = (I_line_offset == 1'b0)?cache_r_data[63:0]:cache_r_data[127:64];//数据筛选
    //unhit 
    assign axi_cache_d_ar_addr  = (~ I_cache_hit & jump_equal_tag & (cache_d_ar_addr[31] == 1))? {cache_d_ar_addr[63:4],4'b0000}:(~ I_cache_hit)? cache_d_ar_addr:64'h0000_0000_0000_0000;
    assign axi_cache_d_ar_valid = (~ I_cache_hit)? cache_d_ar_valid:1'b0;
    assign axi_cache_d_r_ready  = 1'b1; 
    assign cache_d_r_data = ((cache_d_ar_user == 1'b1) & (cache_d_ar_addr[31] == 1) & I_cache_hit)?choose_cache_rdata:
                            ((cache_d_ar_user == 1'b1) & (cache_d_ar_addr[31] == 1) & ~I_cache_hit)?axi_choose_data:
                            axi_r_data4;
    wire   wen_ram = (~I_cache_hit & axi_cache_d_r_last & (cache_d_ar_user == 1'b1) & ~(cache_d_ar_addr == 64'h0000_0000_0000_0000) & (cache_d_ar_addr[31] == 1))?1'b1:0;//不命中写数据
    wire   [127:0]cache_w_data = (wen_ram & ~I_cache_hit)?{axi_cache_d_r_data,axi_r_data1}:128'b0;//
    
    //cache读数据

    wire cache_cen = ( I_cache_hit  &  cache_d_r_ready )?1'b1:0;//命中读使能
    wire [127:0]bwen = (~I_cache_hit)?128'd0:128'hFFFF_FFFF_FFFF_FFFF_FFFF_FFFF_FFFF_FFFF;

    assign CEN = ~cache_cen & I_cache_hit;
    assign WEN = ~wen_ram;
    assign BWEN = bwen;
    assign D = cache_w_data;
    assign A = I_index;

    //读握手 命中情况下
    always @ (posedge clock) begin
            if (reset == `YSYX210576_RstEnable) begin
                cache_d_ar_ready <= 1'b0;
            end else if ( I_cache_hit & (cache_d_ar_addr[31] == 1) & ~cache_d_r_last) begin
                cache_d_ar_ready <= 1'b1;
            end else if( ~I_cache_hit  )begin
                cache_d_ar_ready <= axi_cache_d_ar_ready;
            end else begin
                cache_d_ar_ready <= 1'b0;
            end
        end 

    always @(posedge clock) begin
            if(reset == `YSYX210576_RstEnable)begin
                cache_d_r_valid <= 1'b0;
                cache_d_r_last <= 1'b0;    
            end else if((cache_d_ar_addr == 64'h0000_0000_3000_0004) && (axi_cache_d_r_data == begin_data) ) begin
                cache_d_r_valid <= 1'b0;
                cache_d_r_last <= 1'b0; 
            end else if(I_cache_hit & cache_d_r_ready)begin
                cache_d_r_valid <= 1'b1;
                cache_d_r_last <= 1'b1;                
            end else if(axi_cache_d_r_last & ~I_cache_hit)begin
                cache_d_r_valid <= ((axi_cache_d_r_data == axi_r_data3) & ~(cache_d_ar_addr == 64'h0000_0000_8000_04D0) & (cache_d_ar_user == 1'b1) & & (cache_d_ar_addr[31]) == 1)?1'b0:axi_cache_d_r_valid;//
                cache_d_r_last <= axi_cache_d_r_last;               
            end else begin
                cache_d_r_valid <= 1'b0;
                cache_d_r_last <= 1'b0;               
            end
            
        end

wire _unused_ok = &{1'b0,
                    REG_DATA,
                    1'b0};


endmodule
   

module ysyx_210576_clint(

    input wire clock,
    input wire reset,

    input wire [`YSYX210576_AXI_ID_WIDTH-1:0]clint_aw_id,
    input wire [`YSYX210576_AXI_ADDR_WIDTH-1:0]clint_aw_addr,
    input wire [7:0]clint_aw_len,
    input wire [2:0]clint_aw_size,
    input wire [1:0]clint_aw_burst,
    input wire clint_aw_valid,
    output reg clint_aw_ready,

    input wire [`YSYX210576_AXI_DATA_WIDTH-1:0]clint_w_data,
    input wire [`YSYX210576_AXI_DATA_WIDTH/8-1:0]clint_w_strb,
    input wire clint_w_last,
    input wire clint_w_valid,
    output reg clint_w_ready,

    output wire [`YSYX210576_AXI_ID_WIDTH-1:0]clint_b_id,
    output wire [1:0]clint_b_resp,
    output reg clint_b_valid,
    input wire clint_b_ready,

    input wire [`YSYX210576_AXI_ID_WIDTH-1:0]clint_ar_id,
    input wire [`YSYX210576_AXI_ADDR_WIDTH-1:0]clint_ar_addr,
    input wire [7:0]clint_ar_len,
    input wire [2:0]clint_ar_size,
    input wire [1:0]clint_ar_burst,
    input wire clint_ar_valid,
    output reg clint_ar_ready,

    output [`YSYX210576_AXI_ID_WIDTH-1:0]clint_r_id,
    output reg [`YSYX210576_AXI_DATA_WIDTH-1:0]clint_r_data,
    output [1:0]clint_r_resp,
    output reg clint_r_last,
    output reg clint_r_valid,
    input wire clint_r_ready,

    output reg clint_time_stop
    );
    assign clint_r_resp = 2'b0;
    assign clint_r_id = 4'b0000;
    assign clint_b_resp =2'b0;
    assign clint_b_id =4'b0000;
    reg[`YSYX210576_RegBus] mtime;
    reg[`YSYX210576_RegBus] mtimecmp;
    reg[`YSYX210576_RegBus] addr;
    reg hs_ar;

    // 读地址
    always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
            addr <= 64'h0000_0000_0000_0000;
        end else if (clint_ar_valid & clint_ar_ready == 1'b1) begin
            addr <= clint_ar_addr;
        end else if (clint_aw_valid & clint_aw_ready ==1'b1 ) begin
            addr <= clint_aw_addr;
        end else begin
            addr <= 64'h0000_0000_0000_0000;
        end
    end

    always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
            clint_ar_ready <= 1'b0;
        end else if (clint_ar_valid == 1'b1) begin
             clint_ar_ready <= 1'b1;
        end else begin
             clint_ar_ready <= 1'b0;
        end
    end

     // 读数据
    always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
            clint_r_valid <= 1'b0;
        end else if (hs_ar == 1'b1) begin
            clint_r_valid <= 1'b1;
        end else begin
            clint_r_valid <= 1'b0;
        end
    end
    always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
            hs_ar <= 1'b0;
        end else if (clint_ar_valid & clint_ar_ready == 1'b1) begin
            hs_ar <=1'b1; 
        end else if (clint_r_ready & clint_r_valid == 1'b1) begin
            hs_ar <= 1'b0;
        end 
    end

    always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
            clint_r_data <= 64'h0000_0000_0000_0000;
        end else if ( clint_r_ready == 1'b1) begin
            clint_r_last <= 1'b1;
            case (addr)
                64'h0000_0000_0200_4000:clint_r_data <= mtimecmp;
                64'h0000_0000_0200_BFF8:clint_r_data <= mtime; 
                default: clint_r_data <= 64'h0000_0000_0000_0000;
            endcase
        end else begin
             clint_r_last <= 1'b0;
             clint_r_data <= 64'h0000_0000_0000_0000;
        end
    end

    // 写地址
    always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
            clint_aw_ready <= 1'b0;
        end else if (clint_aw_valid == 1'b1) begin
             clint_aw_ready <= 1'b1;
        end else begin
             clint_aw_ready <= 1'b0;
        end
    end


    //写数据
    always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
            clint_w_ready <= 1'b0;
        end else if (clint_w_valid == 1'b1) begin
            clint_w_ready <= 1'b1;
        end else begin
            clint_w_ready <= 1'b0;
        end
    end
     always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
            mtimecmp <= 64'h0000_0000_0000_8888;
        end else if (clint_w_valid & clint_w_ready ==1'b1 ) begin
            mtimecmp <= clint_w_data;
        end
    end
    //写完成
    always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
            clint_b_valid <= 1'b0;
        end else if (clint_w_valid & clint_w_ready ==1'b1 ) begin
            clint_b_valid <= 1'b1;
        end else begin
            clint_b_valid <= 1'b0;
        end
    end

    always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
            mtime <= 64'h0000_0000_0000_0000;
        end else begin
            mtime <= mtime + 1'b1;
        end
    end

    always @ (*) begin
        if (mtime > mtimecmp ) begin
            clint_time_stop = 1'b1;
        end else begin
            clint_time_stop = 1'b0;
        end
    end
            
wire _unused_ok = &{1'b0,
                    clint_aw_id,
                    clint_aw_len,  // To be fixed
                    clint_aw_size,
                    clint_aw_burst,
                    clint_w_strb,
                    clint_w_last,
                    clint_b_ready,
                    clint_ar_id,
                    clint_ar_len,
                    clint_ar_size,
                    clint_ar_burst,
                    1'b0};

    

endmodule

module ysyx_210576_Csr_stage(

    input wire clock,
    input wire reset,

    //from id
    input wire [`YSYX210576_RegBus] raddr_i,        // id模块读寄存器地址
    
    // form ex
    input wire  we_i,                        // ex模块写寄存器标志
    input wire [`YSYX210576_RegBus] waddr_i,        // ex模块写寄存器地址
    input wire [`YSYX210576_RegBus] data_i,             // ex模块写寄存器数据
    //from ctrl
    // form ex
    input wire [3:0] csr_int_state,
    input wire [`YSYX210576_RegBus] csr_inst_addr_i,
    input wire           csr_clint_time_stop_i,

    // to id
    output reg [`YSYX210576_RegBus] csr_data_o,              // id模块读寄存器数据
    // to ex
    output wire [`YSYX210576_RegBus] csr_int_addr_o,

    output  [`YSYX210576_RegBus] csr_mie_o,
    output  [`YSYX210576_RegBus] csr_mstatus_o,
    output  [`YSYX210576_RegBus] csr_mip_o
    );

localparam S_INT_IDLE            = 4'b0001;
localparam S_INT_SYNC_ASSERT     = 4'b0010;      //同步中断 
localparam S_INT_ASYNC_ASSERT    = 4'b0100;      //异步中断
localparam S_INT_MRET            = 4'b1000;      //中断返回
wire flag = csr_int_state == S_INT_ASYNC_ASSERT;
reg interrupt_tag;
reg[`YSYX210576_RegBus] mtvec;
reg[`YSYX210576_RegBus] mcause;
reg[`YSYX210576_RegBus] mepc;
reg[`YSYX210576_RegBus] mie;
reg[`YSYX210576_RegBus] mstatus;
reg[`YSYX210576_RegBus] mscratch;             //它暂时存放一个字大小的数据 
reg[`YSYX210576_RegBus] mip;                 
reg[`YSYX210576_RegBus] cycle;

always @(posedge clock) begin
    if(reset)begin
        interrupt_tag <= 1'b0;
    end if(flag)begin
        interrupt_tag <= 1'b1;
    end else if(csr_int_state == S_INT_SYNC_ASSERT)begin
        interrupt_tag <= 1'b0;
    end else begin
        interrupt_tag <= interrupt_tag;
    end
    
end

    assign csr_int_addr_o = (flag)?mtvec:
                            (csr_int_state == S_INT_SYNC_ASSERT )?mtvec:
                            (csr_int_state == S_INT_MRET )?mepc:
                            (csr_int_state == S_INT_IDLE )?64'h0000_0000_0000_0000:64'h0000_0000_0000_0000;
    wire [63:0]dirty_data = (data_i[16:15] == 2'b11 | data_i[14:13] == 2'b11 )?{1'b1,data_i[62:0]}:data_i;
   
always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
             mip <= `YSYX210576_Zeroword;
        end else if(csr_clint_time_stop_i==1'b1) begin
             mip <= 64'h0000_0000_0000_0080;
        end else begin
             mip <= 64'h0000_0000_0000_0000;
        end
    end

 assign       csr_mie_o     = mie;
 assign       csr_mstatus_o = mstatus;
 assign       csr_mip_o     = mip;

 reg [63:0]mstatus_idle;
 always @(posedge clock) begin
     if(reset )begin
         mstatus_idle <= 64'd0; 
     end else if(csr_int_state == S_INT_IDLE )begin
         mstatus_idle <= mstatus; 
     end else begin
         mstatus_idle <= mstatus_idle;
     end
     
 end

    always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
            cycle <= `YSYX210576_Zeroword;
        end else begin
            cycle <= cycle + 1'b1;
        end
    end
    // write reg
    // 写寄存器操作
    always @ (posedge clock) begin
        if (reset == `YSYX210576_RstEnable) begin
            mtvec <= `YSYX210576_Zeroword;
            mcause <= `YSYX210576_Zeroword;
            mepc <= `YSYX210576_Zeroword;
            mie <= `YSYX210576_Zeroword;
            mstatus <= `YSYX210576_Zeroword;
            mscratch <= `YSYX210576_Zeroword;
        end else begin
            // 优先响应ex模块的写操作
            if (we_i == `YSYX210576_WriteEnable ) begin
                case (waddr_i[11:0])
                    `YSYX210576_CSR_MTVEC: begin
                        mtvec <= data_i;
                    end
                    `YSYX210576_CSR_MCAUSE: begin
                        mcause <= data_i;
                    end
                    `YSYX210576_CSR_MEPC: begin
                        mepc <= data_i;
                    end
                    `YSYX210576_CSR_MIE: begin
                        mie <= data_i;
                    end
                    `YSYX210576_CSR_MSTATUS: begin
                        mstatus <= dirty_data;
                    end
                    `YSYX210576_CSR_MSCRATCH: begin
                        mscratch <= data_i;
                    end
                    default: begin

                    end
                endcase
            // 异常执行模块写操作
            end else if (csr_int_state == S_INT_IDLE ) begin
                        mtvec     <= mtvec;
                        mcause    <= mcause;                   
                        mepc      <= mepc;
                        mie       <= mie;
                        mstatus   <= mstatus;
                        mscratch  <= mscratch;
            end else if (csr_int_state == S_INT_SYNC_ASSERT ) begin
                        mtvec     <= mtvec;
                        mcause    <= 64'd11;                   
                        mepc      <= csr_inst_addr_i;
                        mie       <= mie;
                        mstatus   <= {mstatus[63:32],mstatus[31:13],2'b11,mstatus[10:8],mstatus_idle[3],mstatus[6:4],1'b0, mstatus[2:0]};                                   
                        mscratch  <= mscratch;
            end else if (csr_int_state == S_INT_ASYNC_ASSERT ) begin
                        mtvec     <= mtvec;
                        mcause    <= 64'h8000_0000_0000_0007;                   
                        mepc      <= csr_inst_addr_i;
                        mie       <= mie;
                        mstatus   <= {mstatus[63:32],mstatus[31:13],2'b11,mstatus[10:8],1'b1,mstatus[6:4],1'b0, mstatus[2:0]};
                        mscratch  <= mscratch;
            end  else if (csr_int_state == S_INT_MRET ) begin
                        mtvec     <= mtvec;
                        mcause    <= mcause;                   
                        mepc      <= mepc;
                        mie       <= mie;
                        mstatus   <= {mstatus[63:32],mstatus[31:13],2'b00,mstatus[10:8],1'b1,mstatus[6:4],mstatus_idle[7], mstatus[2:0]};
                                    //  (interrupt_tag)?:{mstatus[63:32],mstatus[31:13],2'b00,mstatus[10:8],1'b1,mstatus[6:4],1'b1, mstatus[2:0]};
                        mscratch  <= mscratch;
            end 
        end
    end

    // read reg
    // id模块读CSR寄存器
    always @ (*) begin
        if ((waddr_i[11:0] == raddr_i[11:0]) && (we_i == `YSYX210576_WriteEnable)) begin
            if (raddr_i[11:0] == `YSYX210576_CSR_MSTATUS)begin
                csr_data_o = dirty_data;
            end else begin
                csr_data_o = data_i;
            end
        end 
        else begin
            case (raddr_i[11:0])
                `YSYX210576_CSR_CYCLE: begin
                    csr_data_o = cycle[63:0];
                end
                `YSYX210576_CSR_MTVEC: begin
                    csr_data_o = mtvec;
                end
                `YSYX210576_CSR_MCAUSE: begin
                    csr_data_o = mcause;
                end
                `YSYX210576_CSR_MEPC: begin
                    csr_data_o = mepc;
                end
                `YSYX210576_CSR_MIE: begin
                    csr_data_o = mie;
                end
                `YSYX210576_CSR_MSTATUS: begin
                    csr_data_o = mstatus;
                end
                `YSYX210576_CSR_MSCRATCH: begin
                    csr_data_o = mscratch;
                end
                default: begin
                    csr_data_o = `YSYX210576_Zeroword;
                end
            endcase
        end
    end
wire _unused_ok = &{1'b0,
                    waddr_i,
                    raddr_i,  // To be fixed
                    1'b0};


endmodule

module ysyx_210576_ctrl_stage(
    // input wire clock,
    input wire reset,
    input wire rib_hold_i,
    // from id
    input wire jump_flag_i,  //跳转输入
    input wire[`YSYX210576_InstAddrBus] jump_addr_i, //跳转地址
    input wire hold_flag_id_i,

    output wire hold_line,
    output reg rib_hold_if_id,
    output reg rib_hold_if,
    output reg rib_hold_id_ex,
    output reg rib_hold_ex_mem,
    output reg rib_hold_mem_wb,
    output reg hold_flag_o,
    output reg hold_flag1,
    // to pc_reg
    output reg jump_flag_IF_ID,
    output reg jump_flag_ID_EX,
    output reg jump_flag_IF,
    output reg[`YSYX210576_InstAddrBus] jump_addr_o

    );
    assign hold_line = (rib_hold_i | hold_flag_id_i)?1:0;
    always @ (*) begin
            jump_addr_o     = `YSYX210576_Zeroword;
            jump_flag_IF    = 0;
            jump_flag_IF_ID = 0;
            jump_flag_ID_EX = 0;
            // 默认不暂停
            rib_hold_ex_mem = 0;
            rib_hold_mem_wb = 0;
            rib_hold_id_ex  = 0;
            rib_hold_if_id  = 0;
            rib_hold_if     = 0;
            hold_flag_o     = `YSYX210576_Hold_None;
            hold_flag1      = `YSYX210576_Hold_None;

        if (reset == 1) begin
            rib_hold_if_id  = 1'b0;
            rib_hold_if     = 1'b0;
            rib_hold_id_ex  = 1'b0;
            rib_hold_ex_mem = 1'b0;
            rib_hold_mem_wb = 1'b0;
            hold_flag_o     = 1'b0;
            hold_flag1      = 1'b0;
        // to pc_reg
            jump_flag_IF_ID = 1'b0;
            jump_flag_ID_EX = 1'b0;
            jump_flag_IF    = 1'b0;
            jump_addr_o     = `YSYX210576_Zeroword;
        end
        else if (rib_hold_i == 1)begin 
            rib_hold_ex_mem = rib_hold_i;
            rib_hold_mem_wb = rib_hold_i;
            rib_hold_id_ex  = rib_hold_i;
            rib_hold_if_id  = rib_hold_i;
            rib_hold_if     = rib_hold_i;
            jump_addr_o     = jump_addr_o;
            jump_flag_IF    = jump_flag_IF;
            jump_flag_IF_ID = jump_flag_IF_ID;
            jump_flag_ID_EX = jump_flag_ID_EX;
        end else if ( hold_flag_id_i == 1 ) begin
            hold_flag_o     = hold_flag_id_i; 
            hold_flag1      = hold_flag_id_i; 
            jump_addr_o     = jump_addr_o;
            jump_flag_IF    = jump_flag_IF;
            jump_flag_IF_ID = jump_flag_IF_ID;
            jump_flag_ID_EX = jump_flag_ID_EX;                   
        end 
        else begin
            jump_addr_o     = jump_addr_i;
            jump_flag_IF    = jump_flag_i;
            jump_flag_IF_ID = jump_flag_i;
            jump_flag_ID_EX = jump_flag_i;
            // 默认不暂停
            rib_hold_ex_mem = 0;
            rib_hold_mem_wb = 0;
            rib_hold_id_ex  = 0;
            rib_hold_if_id  = 0;
            rib_hold_if     = 0;
            hold_flag_o     = `YSYX210576_Hold_None;
            hold_flag1      = `YSYX210576_Hold_None;
            
        end
    end
 
   
endmodule






module ysyx_210576_exe_stage(
  input wire clock,
  input wire reset,

  input wire [`YSYX210576_InstAddrBus] ex_pc,
  input wire [`YSYX210576_Inst_Bus]ex_inst,
  input wire [4 : 0] ex_w_addr,
  input wire  ex_w_ena,
  input wire [`YSYX210576_InstDataBus]ex_op1,
  input wire [`YSYX210576_InstDataBus]ex_op2,
  input wire [`YSYX210576_InstDataBus] op1_i,
  input wire [`YSYX210576_InstDataBus] op2_i,
  input wire [`YSYX210576_InstDataBus] op1_jump_i,
  input wire [`YSYX210576_InstDataBus] op2_jump_i,
  //clint
  input wire           exe_clint_time_stop_i,
  //from ctrl
  input wire hold_line,
  //from csr
  input wire[`YSYX210576_RegBus]        exe_mip_i,
  input wire[`YSYX210576_RegBus]        exe_mie_i,
  input wire[`YSYX210576_RegBus]        exe_mstatus_i,  

  // to mem
  output reg[`YSYX210576_InstDataBus] mem_wdata_o,        // 写内存数据
  output reg[`YSYX210576_InstAddrBus] mem_addr_o,    // 内存地址
  output wire  mem_we_o,                   // 是否要写内存
  output wire  mem_rd_o,                  // 请求访问内存标志

  // to regs
  output wire  [4 : 0] ex_mem_w_addr_i1,
  output wire  ex_mem_w_ena_i1,
  output wire  [`YSYX210576_InstDataBus]ex_rd_data_i1,

  //to id
  output wire mem_rd2id,
  // to regs
  output wire  [4 : 0] ex_mem_w_addr_i,
  output wire  ex_mem_w_ena_i,
  output wire  [`YSYX210576_InstDataBus]ex_rd_data_i,
  output [`YSYX210576_Inst_Bus]ex_mem_ex_inst,
  //    
  input wire csr_we_i,                    // 是否写CSR寄存器
  input wire[`YSYX210576_InstAddrBus] csr_waddr_i,    // 写CSR寄存器地址
  input wire[`YSYX210576_InstDataBus] csr_rdata_i,        // CSR寄存器输入数据
  input wire [`YSYX210576_InstAddrBus]        int_addr_i,                        // 中断跳转地址
  output reg[3:0]                 int_state_o,
      // to csr reg
  output reg  [`YSYX210576_InstDataBus] csr_wdata_o,        // 写CSR寄存器数据
  output wire  csr_we_o,                   // 是否要写CSR寄存器
  output wire [`YSYX210576_InstAddrBus] csr_waddr_o,   // 写CSR寄存器地址
  output wire [`YSYX210576_InstAddrBus] csr_pc,

 // to ctrl
  //output wire  hold_flag_o,                // 是否暂停标志
  output wire  jump_flag_o,                // 是否跳转标志
  output wire [`YSYX210576_InstAddrBus] jump_addr_o   // 跳转目的地址
);

reg[`YSYX210576_RegBus] reg_wdata;
reg [`YSYX210576_InstAddrBus] jump_addr;
reg mem_we;
reg mem_rd;
wire[6:0] opcode;
wire[2:0] funct3;
assign opcode = ex_inst[6:0];
assign funct3 = ex_inst[14:12];
// csr
    localparam S_INT_IDLE            = 4'b0001;
    localparam S_INT_SYNC_ASSERT     = 4'b0010;      //同步中断 
    localparam S_INT_ASYNC_ASSERT    = 4'b0100;      //异步中断
    localparam S_INT_MRET            = 4'b1000;      //中断返回

// 中断限制条件
reg [63:0]pc1;
reg jump_flag;
always @(posedge clock) begin
    pc1 <= ex_pc;
    
end
wire pc_change  = (pc1 == ex_pc)?0:1;

reg keep;
// reg keep1;
always @(posedge clock) begin
    if(reset == `YSYX210576_RstEnable)begin
        keep <= 1'b1;
    end
    else if(ex_inst == `YSYX210576_INST_ECALL)begin
        keep <= 1'b0;
    end else if(ex_inst == `YSYX210576_INST_MRET)begin
        keep <= 1'b1;
    end else begin
        keep <= keep;
    end
end
reg intterrupt_keep;
always @ (posedge clock) begin
        if ((hold_line == 1'b1) & (int_state_o == S_INT_ASYNC_ASSERT)) begin
            intterrupt_keep <= 1'b1;
        end else begin
            intterrupt_keep <= 1'b0;
        end
    end
wire intterrupt_banning = ((ex_inst == `YSYX210576_INST_ECALL) | (ex_inst == `YSYX210576_INST_MRET) | jump_flag | csr_we_i | (opcode == `YSYX210576_INST_TYPE_L) | (opcode == `YSYX210576_INST_TYPE_S))?0:1;
//中断限制条件
 always @ (*) begin
        if (reset == `YSYX210576_RstEnable) begin
            int_state_o = S_INT_IDLE;
        end else begin  if (ex_inst == `YSYX210576_INST_ECALL || ex_inst == `YSYX210576_INST_EBREAK) begin
                int_state_o = S_INT_SYNC_ASSERT;           
            end  else if (exe_clint_time_stop_i & exe_mie_i[7] & exe_mip_i[7] & exe_mstatus_i[3] & ~(ex_inst ==32'h0000_0000) & intterrupt_banning & pc_change)  begin
                int_state_o = S_INT_ASYNC_ASSERT;       
            end else if (ex_inst == `YSYX210576_INST_MRET )begin
                int_state_o = S_INT_MRET;
            end else begin
                int_state_o = (intterrupt_keep)?S_INT_ASYNC_ASSERT:S_INT_IDLE;
            end
        end
    end
//csr
assign csr_pc = ex_pc;
wire[63:0] op1_add_op2_res;
wire[63:0] op1_jump_add_op2_jump_res;
wire op1_eq_op2;
wire op1_ge_op2_signed;
wire op1_ge_op2_unsigned;
wire [31:0]addw_data;
wire [31:0]subw_data;
wire [31:0]sllw_data;
wire [31:0]srlw_data;
wire [31:0]sraw_data;
wire [31:0]addiw_data;
wire [31:0]slliw_data;
wire [31:0]srliw_data;
wire [31:0]sraiw_data;


//Rw
    assign addw_data = op1_i[31:0] + op2_i[31:0];
    assign subw_data = op1_i[31:0] - op2_i[31:0];
    assign sllw_data = op1_i[31:0] << op2_i[4:0];
    assign srlw_data = $signed ($signed(ex_op1[31:0]) >>> $signed (ex_op2[4:0]));
    assign sraw_data = ex_op1[31:0] >> ex_op2[4:0];

//IW
    assign addiw_data = op1_i[31:0] + op2_i[31:0];
    assign slliw_data = ex_op1[31:0] << {26'b0,ex_inst[25:20]};
    assign srliw_data = $signed ($signed(ex_op1[31:0]) >>> $signed (ex_inst[25:20]));
    assign sraiw_data = ex_op1[31:0] >> {26'b0,ex_inst[25:20]};
// 有符号数比较
    assign op1_ge_op2_signed = $signed(op1_i) >= $signed(op2_i);
// 无符号数比较
    assign op1_ge_op2_unsigned = op1_i >= op2_i;
    assign op1_eq_op2 = (op1_i == op2_i);
//操作数相加结果赋值
    assign op1_add_op2_res = op1_i + op2_i;
    assign op1_jump_add_op2_jump_res = op1_jump_i + op2_jump_i;
//访存地址读写有效位确定
    assign ex_rd_data_i = reg_wdata;
    // to mem
    assign mem_we_o =  mem_we;
    assign mem_rd_o =  mem_rd;
    //to ctrl
    assign jump_flag_o = jump_flag | ((int_state_o == S_INT_IDLE)?1'b0:(int_state_o == S_INT_ASYNC_ASSERT)?1'b1:
    (int_state_o == S_INT_SYNC_ASSERT)?1'b1:(int_state_o == S_INT_MRET)?1'b1:1'b0);
    assign jump_addr_o = (reset == 1'b1)?`YSYX210576_Zeroword: (int_state_o == S_INT_ASYNC_ASSERT)?int_addr_i:((int_state_o == S_INT_IDLE)?jump_addr:
    (int_state_o == S_INT_SYNC_ASSERT)?int_addr_i:(int_state_o == S_INT_MRET)?int_addr_i:jump_addr);
    assign ex_mem_w_ena_i1 = ex_w_ena;
    assign ex_mem_w_addr_i1 = ex_w_addr;
    assign ex_rd_data_i1 = reg_wdata;
    assign ex_mem_w_ena_i = (int_state_o == S_INT_ASYNC_ASSERT)?0:ex_w_ena;
    assign ex_mem_w_addr_i = ex_w_addr;
    assign ex_mem_ex_inst = (int_state_o == S_INT_ASYNC_ASSERT)?0:ex_inst;
    assign mem_rd2id = mem_rd;
    //csr
    assign csr_we_o = (int_state_o == S_INT_ASYNC_ASSERT)?0 : csr_we_i ;
    assign csr_waddr_o = csr_waddr_i;

always @ (*) begin
        csr_wdata_o = `YSYX210576_Zeroword;
        case (opcode)
            `YSYX210576_INST_TYPE_I: begin
                case (funct3)
                    `YSYX210576_INST_ADDI: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = op1_add_op2_res;
                  end
            `YSYX210576_INST_SLTI: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = {64{(~op1_ge_op2_signed)}} & 64'h1;
                    end      
            `YSYX210576_INST_SLTIU: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = {64{(~op1_ge_op2_unsigned)}} & 64'h1;        
                     end
              `YSYX210576_INST_XORI: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = op1_i ^ op2_i;           
                end
              `YSYX210576_INST_ORI: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = op1_i | op2_i;
                    end
              `YSYX210576_INST_ANDI: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = op1_i & op2_i;
                    end
              `YSYX210576_INST_SLLI: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = ex_op1 << ex_inst[25:20];
                    end
              `YSYX210576_INST_SRI: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        if (ex_inst[30] == 1'b1) begin
                            reg_wdata = $signed ($signed(ex_op1) >>> $signed (ex_inst[25:20]));
                        end else begin
                            reg_wdata = ex_op1 >> ex_inst[25:20];
                        end
                    end
                    default: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = `YSYX210576_Zeroword;
                    end
                endcase
            end      

             `YSYX210576_INST_TYPE_IW: begin
                case (funct3)
                    `YSYX210576_INST_ADDIW: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = {{32{addiw_data[31]}}, addiw_data};
                  end
           
              `YSYX210576_INST_SLLIW: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = {{32{slliw_data[31]}}, slliw_data[31:0]};
                    end
              `YSYX210576_INST_SRIW: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        if (ex_inst[30] == 1'b1) begin
                            reg_wdata = {{32{srliw_data[31]}}, srliw_data[31:0]};;
                        end else begin
                            reg_wdata = {{32{sraiw_data[31]}}, sraiw_data[31:0]};;
                        end
                    end
                    default: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = `YSYX210576_Zeroword;
                    end
                endcase
            end      

        `YSYX210576_INST_TYPE_R: begin
                    case (funct3)
                        `YSYX210576_INST_ADD_SUB: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            if (ex_inst[30] == 1'b0) begin
                                reg_wdata = op1_add_op2_res;
                            end else begin
                                reg_wdata = op1_i - op2_i;
                            end
                        end

                         `YSYX210576_INST_SLL: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            reg_wdata = op1_i << op2_i[5:0];
                        end

                        `YSYX210576_INST_SLT: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            reg_wdata = {64{(~op1_ge_op2_signed)}} & 64'h1;
                        end

                        `YSYX210576_INST_SLTU: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            reg_wdata = {64{(~op1_ge_op2_unsigned)}} & 64'h1;
                        end

                        `YSYX210576_INST_XOR: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            reg_wdata = op1_i ^ op2_i;
                        end

                        `YSYX210576_INST_SR: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            if (ex_inst[30] == 1'b1) begin
                                reg_wdata = $signed ($signed(ex_op1) >>> $signed (ex_op2[5:0]));
                            end else begin
                                reg_wdata = ex_op1 >> ex_op2[5:0];
                            end
                        end


                        `YSYX210576_INST_OR: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            reg_wdata = op1_i | op2_i;
                        end

                         `YSYX210576_INST_AND: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            reg_wdata = op1_i & op2_i;
                        end
                    default: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            reg_wdata = `YSYX210576_Zeroword;
                        end
                    endcase
                end

                `YSYX210576_INST_TYPE_RW: begin
                    case (funct3)
                        `YSYX210576_INST_ADDW_SUBW: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            if (ex_inst[30] == 1'b0) begin
                                reg_wdata = {{32{addw_data[31]}}, addw_data}; 
                            end else begin
                                reg_wdata = {{32{subw_data[31]}}, subw_data};
                            end
                        end

                         `YSYX210576_INST_SLLW: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            reg_wdata = {{32{sllw_data[31]}}, sllw_data};
                        end

                        `YSYX210576_INST_SRW: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            if (ex_inst[30] == 1'b1) begin
                                reg_wdata = {{32{srlw_data[31]}}, srlw_data};
                            end else begin
                                reg_wdata = {{32{sraw_data[31]}}, sraw_data};
                            end
                        end

                       
                    default: begin
                            jump_flag = `YSYX210576_JumpDisable;
                            jump_addr = `YSYX210576_Zeroword;
                            mem_wdata_o = `YSYX210576_Zeroword;
                            mem_addr_o = `YSYX210576_Zeroword;
                            mem_we = `YSYX210576_WriteDisable;
                            mem_rd = `YSYX210576_ReadDisable;
                            reg_wdata = `YSYX210576_Zeroword;
                        end
                    endcase
                end

            `YSYX210576_INST_TYPE_L: begin
                case (funct3)
                    `YSYX210576_INST_LB: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadEnable;
                        mem_addr_o = op1_add_op2_res; 
                        reg_wdata = `YSYX210576_Zeroword;
                    end

                    `YSYX210576_INST_LH: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadEnable;
                        mem_addr_o = op1_add_op2_res;                       
                        reg_wdata = `YSYX210576_Zeroword;    
                    end

                    `YSYX210576_INST_LW: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadEnable;
                        mem_addr_o = op1_add_op2_res;
                        reg_wdata = `YSYX210576_Zeroword;
                    end

                     `YSYX210576_INST_LD: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadEnable;
                        mem_addr_o = op1_add_op2_res;
                        reg_wdata = `YSYX210576_Zeroword;
                    end

                    `YSYX210576_INST_LBU: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadEnable;
                        mem_addr_o = op1_add_op2_res;
                        reg_wdata = `YSYX210576_Zeroword;
                           
                    end
                    `YSYX210576_INST_LHU: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadEnable;
                        mem_addr_o = op1_add_op2_res;
                        reg_wdata = `YSYX210576_Zeroword;
                       
                    end

                     `YSYX210576_INST_LWU: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadEnable;
                        mem_addr_o = op1_add_op2_res;
                        reg_wdata = `YSYX210576_Zeroword;
                       
                    end
                    default: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = `YSYX210576_Zeroword;
                    end
                endcase
            end
            `YSYX210576_INST_TYPE_S: begin
                case (funct3)
                    `YSYX210576_INST_SB: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        reg_wdata = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteEnable;
                        mem_rd = `YSYX210576_ReadDisable;
                        mem_addr_o = op1_add_op2_res;
                        mem_wdata_o = {56'h0000_0000_0000_00, ex_op2[7:0]};

                    end

                    `YSYX210576_INST_SH: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        reg_wdata = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteEnable;
                        mem_rd = `YSYX210576_ReadDisable;
                        mem_addr_o = op1_add_op2_res;
                        mem_wdata_o = {48'h0000_0000_0000, ex_op2[15:0]};                        
                    end

                    `YSYX210576_INST_SW: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        reg_wdata = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteEnable;
                        mem_rd = `YSYX210576_ReadDisable;
                        mem_addr_o = op1_add_op2_res;
                        mem_wdata_o = {32'h0000_0000, ex_op2[31:0]};
                    end

                    `YSYX210576_INST_SD: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        reg_wdata = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteEnable;
                        mem_rd = `YSYX210576_ReadDisable;
                        mem_addr_o = op1_add_op2_res;
                        mem_wdata_o = ex_op2[63:0];
                    end

                    default: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = `YSYX210576_Zeroword;
                    end
                endcase
            end

            `YSYX210576_INST_TYPE_B: begin
                case (funct3)
                    `YSYX210576_INST_BEQ: begin
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = `YSYX210576_Zeroword;
                        jump_flag = op1_eq_op2 & `YSYX210576_JumpEnable;
                        jump_addr = {64{op1_eq_op2}} & op1_jump_add_op2_jump_res;
                    end

                    `YSYX210576_INST_BNE: begin
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;                 
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = `YSYX210576_Zeroword;
                        jump_flag = (~op1_eq_op2) & `YSYX210576_JumpEnable;
                        jump_addr = {64{(~op1_eq_op2)}} & op1_jump_add_op2_jump_res;
                    end

                    `YSYX210576_INST_BLT: begin
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = `YSYX210576_Zeroword;
                        jump_flag = (~op1_ge_op2_signed) & `YSYX210576_JumpEnable;
                        jump_addr = {64{(~op1_ge_op2_signed)}} & op1_jump_add_op2_jump_res;
                    end

                    `YSYX210576_INST_BGE: begin
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = `YSYX210576_Zeroword;
                        jump_flag = (op1_ge_op2_signed) & `YSYX210576_JumpEnable;
                        jump_addr = {64{(op1_ge_op2_signed)}} & op1_jump_add_op2_jump_res;
                    end

                    `YSYX210576_INST_BLTU: begin
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = `YSYX210576_Zeroword;
                        jump_flag = (~op1_ge_op2_unsigned) & `YSYX210576_JumpEnable;
                        jump_addr = {64{(~op1_ge_op2_unsigned)}} & op1_jump_add_op2_jump_res;
                    end

                    `YSYX210576_INST_BGEU: begin
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = `YSYX210576_Zeroword;
                        jump_flag = (op1_ge_op2_unsigned) & `YSYX210576_JumpEnable;
                        jump_addr = {64{(op1_ge_op2_unsigned)}} & op1_jump_add_op2_jump_res;
                    end

                    default: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        mem_rd = `YSYX210576_ReadDisable;
                        reg_wdata = `YSYX210576_Zeroword;
                    end
                endcase
            end

                `YSYX210576_INST_JAL, `YSYX210576_INST_JALR: begin
                    mem_wdata_o = `YSYX210576_Zeroword;
                    mem_addr_o = `YSYX210576_Zeroword;
                    mem_we = `YSYX210576_WriteDisable;
                    mem_rd = `YSYX210576_ReadDisable;
                    jump_flag = `YSYX210576_JumpEnable;
                    jump_addr = op1_jump_add_op2_jump_res;
                    reg_wdata = op1_add_op2_res;
                end

                `YSYX210576_INST_LUI, `YSYX210576_INST_AUIPC: begin
                mem_wdata_o = `YSYX210576_Zeroword;
                mem_addr_o = `YSYX210576_Zeroword;
                mem_we = `YSYX210576_WriteDisable;
                mem_rd = `YSYX210576_ReadDisable;
                jump_addr = `YSYX210576_Zeroword;
                jump_flag = `YSYX210576_JumpDisable;
                reg_wdata = op1_add_op2_res;
            end
            `YSYX210576_INST_NOP_OP: begin
                jump_flag = `YSYX210576_JumpDisable;
                jump_addr = `YSYX210576_Zeroword;
                mem_wdata_o = `YSYX210576_Zeroword;
                mem_addr_o = `YSYX210576_Zeroword;
                mem_we = `YSYX210576_WriteDisable;
                mem_rd = `YSYX210576_ReadDisable;
                reg_wdata = `YSYX210576_Zeroword;
            end
            `YSYX210576_INST_CSR: begin
                jump_flag = `YSYX210576_JumpDisable;
                jump_addr = `YSYX210576_Zeroword;
                mem_wdata_o = `YSYX210576_Zeroword;
                mem_addr_o = `YSYX210576_Zeroword;
                mem_we = `YSYX210576_WriteDisable;
                mem_rd = `YSYX210576_ReadDisable;
                
                case (funct3)
                    `YSYX210576_INST_CSRRW: begin
                        csr_wdata_o = ex_op1;
                        reg_wdata = csr_rdata_i;
                    end
                    `YSYX210576_INST_CSRRS: begin
                        csr_wdata_o = ex_op1 | csr_rdata_i;
                        reg_wdata = csr_rdata_i;
                    end
                    `YSYX210576_INST_CSRRC: begin
                        csr_wdata_o = csr_rdata_i & (~ex_op1);
                        reg_wdata = csr_rdata_i;
                    end
                    `YSYX210576_INST_CSRRWI: begin
                        csr_wdata_o = {59'd0, ex_inst[19:15]};
                        reg_wdata = csr_rdata_i;
                    end
                    `YSYX210576_INST_CSRRSI: begin
                        csr_wdata_o = {59'd0, ex_inst[19:15]} | csr_rdata_i;
                        reg_wdata = csr_rdata_i;
                    end
                    `YSYX210576_INST_CSRRCI: begin
                        csr_wdata_o = (~{59'd0, ex_inst[19:15]}) & csr_rdata_i;
                        reg_wdata = csr_rdata_i;
                    end
                    default: begin
                        jump_flag = `YSYX210576_JumpDisable;
                        jump_addr = `YSYX210576_Zeroword;
                        mem_wdata_o = `YSYX210576_Zeroword;
                        mem_addr_o = `YSYX210576_Zeroword;
                        mem_we = `YSYX210576_WriteDisable;
                        reg_wdata = `YSYX210576_Zeroword;
                    end
                endcase
            end

            default: begin
                jump_flag = `YSYX210576_JumpDisable;
                jump_addr = `YSYX210576_Zeroword;
                mem_wdata_o = `YSYX210576_Zeroword;
                mem_addr_o = `YSYX210576_Zeroword;
                mem_we = `YSYX210576_WriteDisable;
                mem_rd = `YSYX210576_ReadDisable;
                reg_wdata = `YSYX210576_Zeroword;
            end
        endcase
    end
wire _unused_ok = &{1'b0,
                    exe_mip_i,
                    exe_mie_i,  // To be fixed
                    exe_mstatus_i,
                    1'b0};


endmodule
module ysyx_210576_ex_mem(
	input wire clock,
	input reset,

	//from ctrl
	input wire hold_ex_mem,
	//来自执行阶段
	input wire[4 : 0] exmem_reg_w_addr,
	input wire exmem_reg_w_ena,
	input wire[`YSYX210576_InstDataBus] exmem_reg_rd_data,
	//input wire [`YSYX210576_InstAddrBus] exmem_reg_pc,
  	input wire [`YSYX210576_Inst_Bus]exmem_reg_inst,
	//to mem
	input wire[`YSYX210576_InstDataBus] exmem_mem_wdata_i,        // 写内存数据
	input wire[`YSYX210576_InstAddrBus] exmem_mem_addr_i,    // 内存地址    
	input wire exmem_mem_we_i,                   // 是否要写内存
	input wire exmem_mem_rd_i,                  // 是否要读内存
	//from csr

	//送到访存的信息
	output reg[`YSYX210576_InstDataBus] exmem_mem_wdata_o,        // 写内存数据
	output reg[`YSYX210576_InstAddrBus] exmem_mem_addr_o,    // 内存地址
	output reg exmem_mem_we_o,                   // 是否要写内存
	output reg exmem_mem_rd_o,                  // 请求访问内存标志
	
	//送到写回的信息
	output reg[4 : 0] reg_w_addr_i,
	output reg reg_w_ena_i,
	output reg[`YSYX210576_InstDataBus] reg_wdata_i,
	// output wire[`YSYX210576_InstAddrBus] reg_pc_i,
  	output reg[`YSYX210576_Inst_Bus]reg_inst_i
     );

	always@(posedge clock) begin
		if(reset==`YSYX210576_RstEnable) begin
			reg_w_addr_i <= 5'b00000;
			reg_w_ena_i <= 1'b0;
			reg_wdata_i <= `YSYX210576_Zeroword;
			reg_inst_i <=32'h00000000;
			exmem_mem_wdata_o <= `YSYX210576_Zeroword;       // 写内存数据
			exmem_mem_addr_o <= `YSYX210576_Zeroword;    // 写内存地址
			exmem_mem_we_o <= 1'b0;                   // 是否要写内存
			exmem_mem_rd_o <= 1'b0;                 // 是否要读内存

		end else if (hold_ex_mem == 1) begin
			reg_w_addr_i <= reg_w_addr_i;
			reg_w_ena_i <= reg_w_ena_i;
			reg_wdata_i <= reg_wdata_i;
			reg_inst_i <= reg_inst_i;
			exmem_mem_wdata_o <= exmem_mem_wdata_o;       // 写内存数据
			exmem_mem_addr_o <= exmem_mem_addr_o;    // 内存地址
			exmem_mem_we_o <= exmem_mem_we_o;                   // 是否要写内存
			exmem_mem_rd_o <= exmem_mem_rd_o;                 // 是否要读内存

		end
		else begin 
			reg_w_addr_i <= exmem_reg_w_addr;
			reg_w_ena_i <= exmem_reg_w_ena;
			reg_wdata_i <= exmem_reg_rd_data;
			reg_inst_i <=exmem_reg_inst;
			exmem_mem_wdata_o <= exmem_mem_wdata_i;       // 写内存数据
			exmem_mem_addr_o <= exmem_mem_addr_i;    // 内存地址
			exmem_mem_we_o <= exmem_mem_we_i;                   // 是否要写内存
			exmem_mem_rd_o <= exmem_mem_rd_i;                 // 是否要读内存

		end
	end

endmodule

module ysyx_210576_id_ex (
	input wire clock,
	input wire reset,
	
	//译码传送的信息
	input wire[4 : 0] id_w_addr,
	input wire id_w_ena,
	input wire[`YSYX210576_InstDataBus] id_op1,
	input wire[`YSYX210576_InstDataBus] id_op2,
	input wire [`YSYX210576_InstAddrBus] id_ex_pc,
  	input wire [`YSYX210576_Inst_Bus]id_ex_inst,
	input wire[`YSYX210576_InstDataBus] op1_i,
    input wire[`YSYX210576_InstDataBus] op2_i,
    input wire[`YSYX210576_InstDataBus] op1_jump_i,
    input wire[`YSYX210576_InstDataBus] op2_jump_i,
	input wire jump_flag_i,
    input wire hold_flag_i, // 流水线暂停标志
	input wire rib_hold_id_ex,
	input wire csr_we,
	input wire [`YSYX210576_InstDataBus] csr_r_data,
	input wire [`YSYX210576_InstAddrBus] csr_waddr,

	//传递到执行的信息
	output reg  csr_we2exe,
	output reg [`YSYX210576_InstDataBus] csr_r_data2exe,
	output reg [`YSYX210576_InstAddrBus] csr_waddr2exe,
	output reg [`YSYX210576_InstDataBus] op1_o,
    output reg [`YSYX210576_InstDataBus] op2_o,
    output reg [`YSYX210576_InstDataBus] op1_jump_o,
    output reg [`YSYX210576_InstDataBus] op2_jump_o,
	output reg [`YSYX210576_InstAddrBus] ex_pc_i,
   	output reg [`YSYX210576_Inst_Bus]ex_inst_i,
	output reg [4 : 0] ex_w_addr_i,
	output reg  ex_w_ena_i,
	// output reg if_fetch6,
	output reg [`YSYX210576_InstDataBus] ex_op1_i,
	output reg [`YSYX210576_InstDataBus] ex_op2_i
	
    );

wire flush_flag1;
assign flush_flag1 = jump_flag_i;

	always@(posedge clock) begin
		if(reset==`YSYX210576_RstEnable || flush_flag1 == 1'b1) begin
			ex_inst_i <= 32'h0000_0000;
			ex_pc_i <=`YSYX210576_Zeroword;
			ex_w_ena_i <= `YSYX210576_WriteDisable;
			ex_w_addr_i <= `YSYX210576_ZeroReg;
			ex_op1_i <= `YSYX210576_Zeroword;
			ex_op2_i <= `YSYX210576_Zeroword;
			op1_o  <= `YSYX210576_Zeroword;
   			op2_o  <= `YSYX210576_Zeroword;
    		op1_jump_o  <= `YSYX210576_Zeroword;
    		op2_jump_o  <= `YSYX210576_Zeroword;
			csr_we2exe  <=	`YSYX210576_WriteDisable;
			csr_r_data2exe <= `YSYX210576_Zeroword;
			csr_waddr2exe <=  `YSYX210576_Zeroword; 
			
		end 
		 else if(hold_flag_i == 1'b1) begin
			ex_inst_i <= 32'h0000_0000;
			ex_pc_i <=`YSYX210576_Zeroword;
			ex_w_ena_i <= `YSYX210576_WriteDisable;
			ex_w_addr_i <= `YSYX210576_ZeroReg;
			ex_op1_i <= `YSYX210576_Zeroword;
			ex_op2_i <= `YSYX210576_Zeroword;
			op1_o  <= `YSYX210576_Zeroword;
   			op2_o  <= `YSYX210576_Zeroword;
    		op1_jump_o  <= `YSYX210576_Zeroword;
    		op2_jump_o  <= `YSYX210576_Zeroword;
			csr_we2exe  <=	`YSYX210576_WriteDisable;
			csr_r_data2exe <= `YSYX210576_Zeroword;
			csr_waddr2exe <=  `YSYX210576_Zeroword; 

	  end  
	  else if(rib_hold_id_ex == 1'b1) begin
			ex_inst_i <= ex_inst_i;
			ex_pc_i <= ex_pc_i;
			ex_w_ena_i <= ex_w_ena_i;
			ex_w_addr_i <= ex_w_addr_i;
			ex_op1_i <= ex_op1_i;
			ex_op2_i <= ex_op2_i;
			op1_o  <= op1_o;
   			op2_o  <= op2_o;
    		op1_jump_o  <= op1_jump_o;
    		op2_jump_o  <= op2_jump_o;
			csr_we2exe  <=	csr_we2exe;
			csr_r_data2exe <= csr_r_data2exe;
			csr_waddr2exe <=  csr_waddr2exe; 

	  end
	  		
		else begin
			ex_op1_i <= id_op1;
			ex_op2_i <= id_op2;
			ex_w_addr_i <= id_w_addr;
			ex_w_ena_i <= id_w_ena;
			ex_pc_i <=id_ex_pc;
			ex_inst_i <=id_ex_inst;
			op1_o  <= op1_i;
   			op2_o  <= op2_i;
    		op1_jump_o  <= op1_jump_i;
    		op2_jump_o  <= op2_jump_i;
			csr_we2exe  <=	csr_we;		
			csr_r_data2exe <= csr_r_data;
			csr_waddr2exe <=  csr_waddr; 

		end
	end
endmodule

module ysyx_210576_id_stage(
  input wire reset,
  input wire [`YSYX210576_InstAddrBus] id_pc,
  input wire [31 : 0]inst,
  input wire [`YSYX210576_InstDataBus]rs1_data,
  input wire [`YSYX210576_InstDataBus]rs2_data,

  //from exe
  input wire  exe_wreg,
  input wire [`YSYX210576_RegAddrBus]exe_waddr,
  input wire [`YSYX210576_InstDataBus]exe_wdata,
  input wire exe2mem_rd,

  //from mem
  input wire  mem_wreg,
  input wire [`YSYX210576_RegAddrBus]mem_waddr,
  input wire [`YSYX210576_InstDataBus]mem_wdata,

  // from csr reg
  input wire[`YSYX210576_InstDataBus] csr_rdata_i,         // CSR寄存器输入数据
  
  // to regs
  output reg rs1_r_ena,
  output reg [4 : 0]rs1_r_addr,
  output reg rs2_r_ena,
  output reg [4 : 0]rs2_r_addr,

  // to ex
  output [`YSYX210576_InstAddrBus] id_ex_pc_i,
  output [`YSYX210576_Inst_Bus]id_ex_inst_i,
  output reg rd_w_ena,
  output reg [4 : 0]rd_w_addr,
  
  output reg[`YSYX210576_InstDataBus] op1_o,      //立即数操作数
  output reg[`YSYX210576_InstDataBus] op2_o,
  output reg[`YSYX210576_InstDataBus] op1_jump_o, //跳转操作数
  output reg[`YSYX210576_InstDataBus] op2_jump_o,
  output reg[`YSYX210576_InstDataBus]op1,
  output reg[`YSYX210576_InstDataBus]op2,
  //
  output reg   [`YSYX210576_InstAddrBus] csr_waddr_o,
  output reg    csr_we_o,
  output wire  [`YSYX210576_InstDataBus] id_csr_rdata_i,  
  //to ctrl
  output wire Hold_Flag,

  //to csr
  output reg   [`YSYX210576_InstAddrBus] csr_raddr_o 
  
);

// I-type
wire [6  : 0]opcode;
wire [4  : 0]rd;
wire [2  : 0]funct3;
wire [4  : 0]rs1;
wire [4  : 0]rs2;
wire [63 : 0]op3;
wire [63 : 0]op4;

assign  id_csr_rdata_i = csr_rdata_i;
assign op3 = (reset == 1'b1)?`YSYX210576_Zeroword:
             (rs1_r_addr == 5'b00000)?`YSYX210576_Zeroword:
             (exe_wreg == `YSYX210576_WriteEnable && exe_waddr == rs1_r_addr && rs1_r_ena == `YSYX210576_ReadEnable)?exe_wdata:
             (mem_wreg == `YSYX210576_WriteEnable && mem_waddr == rs1_r_addr && rs1_r_ena == `YSYX210576_ReadEnable)?mem_wdata:
             (rs1_r_ena == `YSYX210576_ReadEnable)?rs1_data:`YSYX210576_Zeroword;

assign op4 = (reset == 1'b1)?`YSYX210576_Zeroword:
             (rs2_r_addr == 5'b00000)?`YSYX210576_Zeroword:
             (exe_wreg == `YSYX210576_WriteEnable && exe_waddr == rs2_r_addr && rs2_r_ena == `YSYX210576_ReadEnable)?exe_wdata:
             (mem_wreg == `YSYX210576_WriteEnable && mem_waddr == rs2_r_addr && rs2_r_ena == `YSYX210576_ReadEnable)?mem_wdata:
             (rs2_r_ena == `YSYX210576_ReadEnable)?rs2_data:`YSYX210576_Zeroword;
assign Hold_Flag =( exe2mem_rd == 1 && rs1_r_ena ==1 && rs1_r_addr == exe_waddr|| exe2mem_rd == 1 && rs2_r_ena ==1 && rs2_r_addr == exe_waddr)?1:0;
assign opcode = inst[6  :  0];
assign rd     = inst[11 :  7];
assign funct3  = inst[14 : 12];
assign rs1    = inst[19 : 15];
assign rs2    = inst[24 : 20];
assign  id_ex_inst_i = inst ;
assign  id_ex_pc_i = id_pc;
always @ (*) begin
        op1 = op3;
        op2 = op4;
        op1_o = `YSYX210576_Zeroword;
        op2_o = `YSYX210576_Zeroword;
        op1_jump_o = `YSYX210576_Zeroword;
        op2_jump_o = `YSYX210576_Zeroword;
        csr_raddr_o = `YSYX210576_Zeroword;
        csr_waddr_o = `YSYX210576_Zeroword;
        csr_we_o = `YSYX210576_WriteDisable;
        rs1_r_ena = `YSYX210576_ReadDisable;
        rs2_r_ena = `YSYX210576_ReadDisable;
        rd_w_ena = `YSYX210576_WriteDisable;
        rd_w_addr = `YSYX210576_ZeroReg;
        rs1_r_addr = `YSYX210576_ZeroReg;
        rs2_r_addr = `YSYX210576_ZeroReg;        
        case (opcode)
            `YSYX210576_INST_TYPE_I: begin
                        rd_w_ena = `YSYX210576_WriteEnable;
                        rd_w_addr = rd;
                        rs1_r_ena = `YSYX210576_ReadEnable;
                        rs2_r_ena = `YSYX210576_ReadDisable;
                        rs1_r_addr = rs1;
                        rs2_r_addr = `YSYX210576_ZeroReg;
                        op1_o = op3;
                        op2_o = {{52{inst[31]}}, inst[31:20]};
             end

            `YSYX210576_INST_TYPE_IW: begin
                case (funct3)
                    `YSYX210576_INST_ADDIW,  `YSYX210576_INST_SLLIW, `YSYX210576_INST_SRIW: begin
                        rd_w_ena = `YSYX210576_WriteEnable;
                        rd_w_addr = rd;
                        rs1_r_ena = `YSYX210576_ReadEnable;
                        rs2_r_ena = `YSYX210576_ReadDisable;
                        rs1_r_addr = rs1;
                        rs2_r_addr = `YSYX210576_ZeroReg;
                        op1_o = op3;
                        op2_o = {{52{inst[31]}}, inst[31:20]};
                    end
                    default: begin
                        rd_w_ena = `YSYX210576_WriteDisable;
                        rd_w_addr = `YSYX210576_ZeroReg;
                        rs1_r_addr = `YSYX210576_ZeroReg;
                        rs2_r_addr = `YSYX210576_ZeroReg;
                        rs1_r_ena = `YSYX210576_ReadDisable;
                        rs2_r_ena = `YSYX210576_ReadDisable;
                        op1_o = `YSYX210576_Zeroword;
                        op2_o = `YSYX210576_Zeroword;                        
                    end
                endcase
            end

            `YSYX210576_INST_TYPE_R: begin
                            rd_w_ena = `YSYX210576_WriteEnable;
                            rd_w_addr = rd;
                            rs1_r_ena = `YSYX210576_ReadEnable;
                            rs2_r_ena = `YSYX210576_ReadEnable;
                            rs1_r_addr = rs1;
                            rs2_r_addr = rs2;
                            op1_o = op3;
                            op2_o = op4;
            end

             `YSYX210576_INST_TYPE_RW: begin
                    case (funct3)
                        `YSYX210576_INST_ADDW_SUBW, `YSYX210576_INST_SLLW, `YSYX210576_INST_SRW: begin
                            rd_w_ena = `YSYX210576_WriteEnable;
                            rd_w_addr = rd;
                            rs1_r_ena = `YSYX210576_ReadEnable;
                            rs2_r_ena = `YSYX210576_ReadEnable;
                            rs1_r_addr = rs1;
                            rs2_r_addr = rs2;
                            op1_o = op3;
                            op2_o = op4;
                        end
                        default: begin
                            rd_w_ena = `YSYX210576_WriteDisable;
                            rd_w_addr = `YSYX210576_ZeroReg;
                            rs1_r_addr = `YSYX210576_ZeroReg;
                            rs2_r_addr = `YSYX210576_ZeroReg;
                            rs1_r_ena = `YSYX210576_ReadDisable;
                            rs2_r_ena = `YSYX210576_ReadDisable;
                            op1_o = `YSYX210576_Zeroword;
                            op2_o = `YSYX210576_Zeroword;                            
                        end
                    endcase
            end

            `YSYX210576_INST_TYPE_L: begin
                case (funct3)
                    `YSYX210576_INST_LB, `YSYX210576_INST_LH, `YSYX210576_INST_LW, `YSYX210576_INST_LBU, `YSYX210576_INST_LHU,`YSYX210576_INST_LD,`YSYX210576_INST_LWU: begin
                        rs1_r_addr = rs1;
                        rs2_r_addr = `YSYX210576_ZeroReg;
                        rd_w_ena = `YSYX210576_WriteEnable;
                        rd_w_addr = rd;
                        op1_o = op3;
                        op2_o = {{52{inst[31]}}, inst[31:20]};
                        rs1_r_ena = `YSYX210576_ReadEnable;
                        rs2_r_ena = `YSYX210576_ReadDisable;
                    end
                    default: begin
                        rd_w_ena = `YSYX210576_WriteDisable;
                        rd_w_addr = `YSYX210576_ZeroReg;
                        rs1_r_addr = `YSYX210576_ZeroReg;
                        rs2_r_addr = `YSYX210576_ZeroReg;
                        rs1_r_ena = `YSYX210576_ReadDisable;
                        rs2_r_ena = `YSYX210576_ReadDisable;
                        op1_o = `YSYX210576_Zeroword;
                        op2_o = `YSYX210576_Zeroword;                        
                    end
                endcase
            end
            `YSYX210576_INST_TYPE_S: begin
                case (funct3)
                    `YSYX210576_INST_SB, `YSYX210576_INST_SW, `YSYX210576_INST_SH,`YSYX210576_INST_SD: begin
                        rs1_r_addr = rs1;
                        rs2_r_addr = rs2;
                        rd_w_ena = `YSYX210576_WriteDisable;
                        rd_w_addr = `YSYX210576_ZeroReg;
                        op1_o = op3;
                        op2_o = {{52{inst[31]}}, inst[31:25], inst[11:7]};
                        rs1_r_ena =`YSYX210576_ReadEnable;
                        rs2_r_ena = `YSYX210576_ReadEnable;
                    end
                    default: begin
                        rd_w_ena = `YSYX210576_WriteDisable;
                        rd_w_addr = `YSYX210576_ZeroReg;
                        rs1_r_addr = `YSYX210576_ZeroReg;
                        rs2_r_addr = `YSYX210576_ZeroReg;
                        rs1_r_ena = `YSYX210576_ReadDisable;
                        rs2_r_ena = `YSYX210576_ReadDisable;
                        op1_o = `YSYX210576_Zeroword;
                        op2_o = `YSYX210576_Zeroword;                        
                    end
                endcase
            end
            `YSYX210576_INST_TYPE_B: begin
                case (funct3)
                    `YSYX210576_INST_BEQ, `YSYX210576_INST_BNE, `YSYX210576_INST_BLT, `YSYX210576_INST_BGE, `YSYX210576_INST_BLTU, `YSYX210576_INST_BGEU: begin
                        rs1_r_addr = rs1;
                        rs2_r_addr = rs2;
                        rd_w_ena = `YSYX210576_WriteDisable;
                        rd_w_addr = `YSYX210576_ZeroReg;
                        op1_o = op3;
                        op2_o = op4;
                        op1_jump_o = id_pc;
                        op2_jump_o = {{52{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
                        rs1_r_ena = `YSYX210576_ReadEnable;
                        rs2_r_ena = `YSYX210576_ReadEnable;
                    end
                    default: begin
                        rd_w_ena = `YSYX210576_WriteDisable;
                        rd_w_addr = `YSYX210576_ZeroReg;
                        rs1_r_addr = `YSYX210576_ZeroReg;
                        rs2_r_addr = `YSYX210576_ZeroReg;
                        rs1_r_ena = `YSYX210576_ReadDisable;
                        rs2_r_ena = `YSYX210576_ReadDisable;
                        op1_o = `YSYX210576_Zeroword;
                        op2_o = `YSYX210576_Zeroword;     
                        op1_jump_o = `YSYX210576_Zeroword;
                        op2_jump_o = `YSYX210576_Zeroword;                                           
                    end
                endcase
            end
            `YSYX210576_INST_JAL: begin
                rd_w_ena = `YSYX210576_WriteEnable;
                rd_w_addr = rd;
                rs1_r_addr = `YSYX210576_ZeroReg;
                rs2_r_addr = `YSYX210576_ZeroReg;
                rs1_r_ena = `YSYX210576_ReadDisable;
                rs2_r_ena = `YSYX210576_ReadDisable;
                op1_o = id_pc;
                op2_o = 64'h4;
                op1_jump_o = id_pc;
                op2_jump_o = {{44{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
            end
            `YSYX210576_INST_JALR: begin
                rd_w_ena = `YSYX210576_WriteEnable;
                rs1_r_addr = rs1;
                rs2_r_addr = `YSYX210576_ZeroReg;
                rs1_r_ena = `YSYX210576_ReadEnable;
                rs2_r_ena = `YSYX210576_ReadDisable;
                rd_w_addr = rd;
                op1_o = id_pc;
                op2_o = 64'h4;
                op1_jump_o = op3;
                op2_jump_o = {{52{inst[31]}}, inst[31:20]};
            end
            `YSYX210576_INST_NOP_OP: begin
                rd_w_ena = `YSYX210576_WriteDisable;
                rs1_r_addr = `YSYX210576_ZeroReg;
                rs2_r_addr = `YSYX210576_ZeroReg;
                rs1_r_ena = `YSYX210576_ReadDisable;
                rs2_r_ena = `YSYX210576_ReadDisable;
                rd_w_addr = `YSYX210576_ZeroReg;
                op1_o = `YSYX210576_Zeroword;
                op2_o = `YSYX210576_Zeroword;
                op1_jump_o = `YSYX210576_Zeroword;
                op2_jump_o = `YSYX210576_Zeroword;
            end
            `YSYX210576_INST_LUI: begin
                rd_w_ena = `YSYX210576_WriteEnable;
                rd_w_addr = rd;
                rs1_r_addr = `YSYX210576_ZeroReg;
                rs2_r_addr = `YSYX210576_ZeroReg;
                rs1_r_ena = `YSYX210576_ReadDisable;
                rs2_r_ena = `YSYX210576_ReadDisable;
                op1_o = {{32{inst[31]}},inst[31:12], 12'b0};
                op2_o = `YSYX210576_Zeroword;
            end
            `YSYX210576_INST_AUIPC: begin
                rd_w_ena = `YSYX210576_WriteEnable;
                rd_w_addr = rd;
                rs1_r_addr = `YSYX210576_ZeroReg;
                rs2_r_addr = `YSYX210576_ZeroReg;
                rs1_r_ena = `YSYX210576_ReadDisable;
                rs2_r_ena = `YSYX210576_ReadDisable;
                op1_o = id_pc;
                op2_o = {{32{inst[31]}},inst[31:12], 12'b0};
            end
            `YSYX210576_INST_CSR: begin
                rd_w_ena = `YSYX210576_WriteDisable;
                rd_w_addr = `YSYX210576_ZeroReg;
                rs1_r_addr = `YSYX210576_ZeroReg;
                rs2_r_addr = `YSYX210576_ZeroReg;
                csr_raddr_o = {52'h0, inst[31:20]};
                csr_waddr_o = {52'h0, inst[31:20]};
                case (funct3)
                    `YSYX210576_INST_CSRRW, `YSYX210576_INST_CSRRS, `YSYX210576_INST_CSRRC: begin
                        rs1_r_addr = rs1;
                        rs2_r_addr = `YSYX210576_ZeroReg;
                        rd_w_ena = `YSYX210576_WriteEnable;
                        rd_w_addr = rd;
                        csr_we_o = `YSYX210576_WriteEnable;
                        rs1_r_ena = `YSYX210576_ReadEnable;
                        rs2_r_ena = `YSYX210576_ReadDisable;
                    end
                    `YSYX210576_INST_CSRRWI, `YSYX210576_INST_CSRRSI, `YSYX210576_INST_CSRRCI: begin
                        rs1_r_addr = `YSYX210576_ZeroReg;
                        rs2_r_addr = `YSYX210576_ZeroReg;
                        rd_w_ena = `YSYX210576_WriteEnable;
                        rd_w_addr = rd;
                        csr_we_o = `YSYX210576_WriteEnable;
                        rs1_r_ena = `YSYX210576_ReadDisable;
                        rs2_r_ena = `YSYX210576_ReadDisable;
                    end
                    default: begin
                        rd_w_ena = `YSYX210576_WriteDisable;
                        rd_w_addr = `YSYX210576_ZeroReg;
                        rs1_r_addr = `YSYX210576_ZeroReg;
                        rs2_r_addr = `YSYX210576_ZeroReg;
                        csr_we_o = `YSYX210576_WriteDisable;
                        rs1_r_ena = `YSYX210576_ReadDisable;
                        rs2_r_ena = `YSYX210576_ReadDisable;
                    end
                endcase
            end
            
         default: begin
            rd_w_ena = `YSYX210576_WriteDisable;
            rd_w_addr = `YSYX210576_ZeroReg;
            rs1_r_addr = `YSYX210576_ZeroReg;
            rs2_r_addr = `YSYX210576_ZeroReg;
            rs1_r_ena = `YSYX210576_ReadDisable;
            rs2_r_ena = `YSYX210576_ReadDisable;
            end
     endcase
    end
endmodule
module ysyx_210576_if_id (
	input wire clock,
	input wire reset,
	//来自取指的信号
	input wire[`YSYX210576_InstAddrBus] if_pc,
	input wire[`YSYX210576_Inst_Bus] if_inst,
	input wire jump_flag_i,
	input wire hold_flag_i, // 流水线暂停标志
    input wire rib_hold_if_id,

	//对应译码的信号
	output reg[`YSYX210576_InstAddrBus] id_pc,
	output reg[`YSYX210576_Inst_Bus] id_inst

     );

wire flush_flag;
assign flush_flag = jump_flag_i;

always@(posedge clock) begin
	if (reset==`YSYX210576_RstEnable || flush_flag == 1'b1) begin
		id_pc <= `YSYX210576_Zeroword;
		id_inst <= 32'h00000000;

	end else if(hold_flag_i == 1'b1 || rib_hold_if_id == 1'b1 ) begin
		id_pc <= id_pc;
		id_inst <= id_inst;

	end
	
	else begin
		id_pc <= if_pc;
		id_inst <= if_inst;
		
	end
  end
endmodule


module ysyx_210576_if_stage(
  input wire clock,
  input wire reset,
  input wire hold_flag_ctrl2if,
  input wire [`YSYX210576_InstDataBus]ram_inst,
  input wire[`YSYX210576_InstAddrBus] jump_addr_i,   // 跳转地址
  input wire jump_flag_i,  // 跳转标志
  input wire rib_hold_if,

  output reg  [`YSYX210576_InstAddrBus]inst_addr,
  output wire inst_ena,
  output reg [63 : 0] pc,
  input  if_ready,
  output wire [`YSYX210576_Inst_Bus] inst
);



parameter PC_START_RESET = `YSYX210576_PC_START  ;

assign inst  = (pc[2:0] == 3'b000)?ram_inst[31:0]:
               (pc[2:0] == 3'b100)?ram_inst[63:32]:`YSYX210576_ZeroInst; 

assign inst_ena  = ( reset == 1'b1 )  ? 0 : 1;
wire handshake_done = inst_ena & if_ready;
always@( posedge clock ) begin
  if( reset == 1'b1 )begin
      inst_addr <= PC_START_RESET ;
      pc <= PC_START_RESET ;
    end
   else if 
   (hold_flag_ctrl2if == 1'b1 || rib_hold_if  == 1'b1) begin
            inst_addr <=  inst_addr + 0;
            pc <=  inst_addr + 0;
        // 暂停
    end else if (jump_flag_i == `YSYX210576_JumpEnable ) begin
            inst_addr <= jump_addr_i;
            pc <= jump_addr_i;
        // 暂停
    end
    else if ( handshake_done ) begin
     inst_addr <= inst_addr + 4;
     pc <= inst_addr + 4;
    end
    else begin
    inst_addr <= inst_addr;
    pc <= inst_addr ;
    end
end




endmodule
module ysyx_210576_mem_stage(
	
	//来自执行阶段的信息
	input wire[4 : 0] reg_w_addr,
	input wire reg_w_ena,
	input wire[`YSYX210576_InstDataBus] reg_wdata,
  	input wire [`YSYX210576_Inst_Bus]reg_inst,
	//读写内存
	input wire[`YSYX210576_InstAddrBus] mem_wdata_i,        // 写内存数据
	input wire[`YSYX210576_InstAddrBus] mem_addr_i,     // 内存地址
	input wire mem_we_i,                   // 写内存标志
	input wire mem_rd_i,                  // 读内存标志

	// from mem
    input wire[`YSYX210576_InstAddrBus] mem_rdata_i,        // 内存输入数据
	input wire mem_ready,//还未配置
	//to id
	output wire[4 : 0] reg_w_addr_i1,
	output wire reg_w_ena_i1,
	output wire[`YSYX210576_InstDataBus] reg_wdata_i1,
	//访存结果
	output reg[4 : 0] reg_w_addr_i,
	output reg reg_w_ena_i,
	output [`YSYX210576_InstDataBus] reg_wdata_i,
	
	//to ram
	output reg [`YSYX210576_InstDataBus] mem_wdata_o,   // 写内存数据
	output wire [`YSYX210576_InstAddrBus] mem_addr,     // 内存地址
	output wire mem_we,                 // 写内存标志
	output wire mem_rd,
	output reg [2:0]mem_size,
	output reg [63:0]ram_wmask

);

	wire[6:0] opcode;
    wire[2:0] funct3;
    wire[2:0] mem_raddr_index;
    wire[2:0] mem_waddr_index;      
	reg [`YSYX210576_InstAddrBus]reg_wdata1;
	wire [`YSYX210576_InstAddrBus]reg_wdata2;
	assign mem_raddr_index = mem_addr_i[2:0];
	assign mem_waddr_index = mem_addr_i[2:0];
	assign opcode = reg_inst[6:0];
    assign funct3 = reg_inst[14:12];
	//
	assign reg_wdata_i1 = reg_wdata + reg_wdata2;
	assign reg_w_addr_i1 = reg_w_addr;
	assign reg_w_ena_i1 = reg_w_ena;
	//assign	mem_wdata_o = mem_wdata_i;
	assign	mem_addr =	mem_addr_i;
	assign	mem_we = mem_we_i;
	assign	mem_rd = mem_rd_i;
	assign reg_wdata_i = reg_wdata + reg_wdata2;
	assign reg_wdata2 = (opcode == `YSYX210576_INST_TYPE_L)? reg_wdata1 & {64{mem_ready}}: `YSYX210576_Zeroword;
	 
	always@(*) begin
			reg_w_addr_i = reg_w_addr;
			reg_w_ena_i = reg_w_ena;
            mem_wdata_o = 64'h0;
            reg_wdata1 = 64'h0;
            mem_size  = 3'b0;
            ram_wmask = 64'h0;

 		case (opcode)
		  `YSYX210576_INST_TYPE_L: begin
                case (funct3)
                    `YSYX210576_INST_LB: begin
						  case (mem_raddr_index)
                            3'b000: begin
                                reg_wdata1 = {{56{mem_rdata_i[7]}}, mem_rdata_i[7:0]};
                            end
                            3'b001: begin
                                reg_wdata1 = {{56{mem_rdata_i[15]}}, mem_rdata_i[15:8]};
                            end
                            3'b010: begin
                                reg_wdata1 = {{56{mem_rdata_i[23]}}, mem_rdata_i[23:16]};
                            end
                            3'b011: begin
                                reg_wdata1 = {{56{mem_rdata_i[31]}}, mem_rdata_i[31:24]};
                            end
							3'b100: begin
                                reg_wdata1 = {{56{mem_rdata_i[39]}}, mem_rdata_i[39:32]};
                            end
							3'b101: begin
                                reg_wdata1 = {{56{mem_rdata_i[47]}}, mem_rdata_i[47:40]};
                            end
							3'b110: begin
                                reg_wdata1 = {{56{mem_rdata_i[55]}}, mem_rdata_i[55:48]};
                            end
							default: begin
                                reg_wdata1 = {{56{mem_rdata_i[63]}}, mem_rdata_i[63:56]};
                            end
                        endcase
                    end
					`YSYX210576_INST_LH: begin
						  case(mem_raddr_index[2:1]) 
						   	  2'b00: begin
                                reg_wdata1 = {{48{mem_rdata_i[15]}}, mem_rdata_i[15:0]};
                            end
							  2'b01: begin
                                reg_wdata1 = {{48{mem_rdata_i[31]}}, mem_rdata_i[31:16]};
                            end
							  2'b10: begin
                                reg_wdata1 = {{48{mem_rdata_i[47]}}, mem_rdata_i[47:32]};
                            end
							  default: begin
                                reg_wdata1 = {{48{mem_rdata_i[63]}}, mem_rdata_i[63:48]};
                            end
						 endcase
					end

					 `YSYX210576_INST_LW: begin
						 if (mem_raddr_index[2]== 1'b0) begin

                            reg_wdata1 = {{32{mem_rdata_i[31]}}, mem_rdata_i[31:0]};
                        end else if(mem_raddr_index[2]== 1'b1) begin

                            reg_wdata1 = {{32{mem_rdata_i[63]}}, mem_rdata_i[63:32]};
						end else begin
							reg_wdata1 = `YSYX210576_Zeroword;
                      end
					 end
					`YSYX210576_INST_LD: begin
                            reg_wdata1 =  mem_rdata_i;
                        end

					`YSYX210576_INST_LBU: begin
						 case (mem_raddr_index)
                            3'b000: begin

                                reg_wdata1 = {56'h0000_0000_0000_00, mem_rdata_i[7:0]};
                            end
                            3'b001: begin

                                reg_wdata1 = {56'h0000_0000_0000_00, mem_rdata_i[15:8]};
                            end
                            3'b010: begin

                                reg_wdata1 = {56'h0000_0000_0000_00, mem_rdata_i[23:16]};
                            end
                            3'b011: begin

                                reg_wdata1 = {56'h0000_0000_0000_00, mem_rdata_i[31:24]};
                            end
							3'b100: begin

                                reg_wdata1 = {56'h0000_0000_0000_00, mem_rdata_i[39:32]};
                            end
							3'b101: begin

                                reg_wdata1 = {56'h0000_0000_0000_00, mem_rdata_i[47:40]};
                            end
							3'b110: begin

                                reg_wdata1 = {56'h0000_0000_0000_00, mem_rdata_i[55:48]};
                            end
							default: begin

                                reg_wdata1 = {56'h0000_0000_0000_00, mem_rdata_i[63:56]};
                            end
                        endcase
                    end
					`YSYX210576_INST_LHU: begin
						 case(mem_raddr_index[2:1]) 
						   	  2'b00: begin

                                reg_wdata1 = {48'h0000_0000_0000, mem_rdata_i[15:0]};
                            end
							  2'b01: begin

                                reg_wdata1 = {48'h0000_0000_0000, mem_rdata_i[31:16]};
                            end
							  2'b10: begin

                                reg_wdata1 = {48'h0000_0000_0000, mem_rdata_i[47:32]};
                            end
							default: begin

                                reg_wdata1= {48'h0000_0000_0000, mem_rdata_i[63:48]};
                            end
						 endcase
                    end

					`YSYX210576_INST_LWU: begin
						 case(mem_raddr_index[2])						   	  
							  1'b0: begin

                                reg_wdata1 = {32'h0000_0000, mem_rdata_i[31:0]};
                            end
							default: begin
								
                                reg_wdata1= {32'h0000_0000, mem_rdata_i[63:32]};
                            end
						 endcase
                    end
					 default: begin
						 
						 reg_wdata1 =`YSYX210576_Zeroword;
					 end
                endcase
            end	 
			`YSYX210576_INST_TYPE_S: begin
                case (funct3)
                    `YSYX210576_INST_SB: begin
						case (mem_waddr_index)
                            3'b000: begin
								ram_wmask = 64'h0000_0000_0000_00FF;
                                mem_wdata_o = {56'h0000_0000_0000_00, mem_wdata_i[7:0]};
								mem_size = 3'b011;								
                            end
                            3'b001: begin
								ram_wmask = 64'h0000_0000_0000_FF00;
                                mem_wdata_o = {48'h0000_0000_0000, mem_wdata_i[7:0],8'h00}; 
								mem_size = 3'b011;								
                            end
                            3'b010: begin
								ram_wmask = 64'h0000_0000_00FF_0000;
                                mem_wdata_o = {40'h0000_0000_00, mem_wdata_i[7:0], 16'h0000}; 
								mem_size = 3'b011;
                            end
                             3'b011: begin
								 ram_wmask = 64'h0000_0000_FF00_0000;
                                mem_wdata_o = {32'h0000_0000,mem_wdata_i[7:0],24'h000000};  
								mem_size = 3'b011;
                            end
							 3'b100: begin
								ram_wmask = 64'h0000_00FF_0000_0000;
                                mem_wdata_o = {24'h000000,mem_wdata_i[7:0], 32'h0000_0000};
								mem_size = 3'b011;
                            end
							 3'b101: begin
								ram_wmask = 64'h0000_FF00_0000_0000;
                                mem_wdata_o = {16'h0000,mem_wdata_i[7:0], 40'h0000_0000_00}; 
								mem_size = 3'b011;
                            end
							 3'b110: begin
								ram_wmask = 64'h00FF_0000_0000_0000;
                                mem_wdata_o = {8'h00,mem_wdata_i[7:0], 48'h0000_0000_0000}; 
								mem_size = 3'b011;
                            end
							 default: begin
								ram_wmask = 64'hFF00_0000_0000_0000;
                                mem_wdata_o = {mem_wdata_i[7:0], 56'h0000_0000_0000_00};  
								mem_size = 3'b011;
                            end
                        endcase
                    end
					`YSYX210576_INST_SH: begin

						 case(mem_raddr_index[2:1]) 
						   	  2'b00: begin
								ram_wmask = 64'h0000_0000_0000_FFFF;
                                mem_wdata_o = {48'h0000_0000_0000, mem_wdata_i[15:0]};
						        mem_size = 3'b011;
                            end
							  2'b01: begin
								ram_wmask = 64'h0000_0000_FFFF_0000;
                                mem_wdata_o = {32'h0000_0000, mem_wdata_i[15:0],16'h0000};
						    	mem_size = 3'b011;								
                            end
							  2'b10: begin
								ram_wmask = 64'h0000_FFFF_0000_0000;
                                mem_wdata_o = {16'h0000, mem_wdata_i[15:0],32'h0000_0000};
								mem_size = 3'b011;					
                            end
							  default: begin
								ram_wmask = 64'hFFFF_0000_0000_0000;
                                mem_wdata_o = {mem_wdata_i[15:0], 48'h0000_0000_0000};
								mem_size = 3'b011;				
                            end
						endcase
					end
					`YSYX210576_INST_SW: begin
						
						if (mem_raddr_index[2]== 1'b0) begin
							ram_wmask = 64'h0000_0000_FFFF_FFFF;
                            mem_wdata_o = {32'h0000_0000, mem_wdata_i[31:0]};
							mem_size = 3'b011;
                        end else begin
							ram_wmask = 64'hFFFF_FFFF_0000_0000;
                            mem_wdata_o = {mem_wdata_i[31:0], 32'h0000_0000};
							mem_size = 3'b011;
                        end
                    end

					`YSYX210576_INST_SD: begin
						
							ram_wmask = 64'hFFFF_FFFF_FFFF_FFFF;
                            mem_wdata_o = mem_wdata_i;
							mem_size = 3'b011;
                        end 

					default: begin
								ram_wmask = 64'h0000_0000_0000_0000;
                                mem_wdata_o =`YSYX210576_Zeroword;
								mem_size = 3'b011;
                            end
                        endcase
                    end
				default: begin
								ram_wmask = 64'h0000_0000_0000_0000;
                                reg_wdata1 =`YSYX210576_Zeroword;
								mem_wdata_o =`YSYX210576_Zeroword;
                            end
                        endcase
                    end
		
wire _unused_ok = &{1'b0,
                    reg_inst,
                    1'b0};
		

endmodule
module ysyx_210576_mem_wb(
	input wire clock,
	input wire reset,
	//from ctrl
	input wire hold_mem_wb,
	//访存的结果
	input wire[4:0] mem_wb_w_addr,
	input wire  mem_wb_w_ena,
	input wire[`YSYX210576_InstDataBus] mem_wb_wdata,
	
	//送到回写的信息
	output reg[4:0] wb_w_addr_i,
	output reg  wb_w_ena_i,
	output reg[`YSYX210576_InstDataBus] wb_wdata_i

);
	
	always@(posedge clock) begin
		if(reset==`YSYX210576_RstEnable) begin
			wb_w_addr_i <= 5'b00000;
			wb_w_ena_i <= 1'b0;
			wb_wdata_i <= `YSYX210576_Zeroword;
	
		end else if(hold_mem_wb == 1)begin
			wb_w_addr_i <= wb_w_addr_i;
			wb_w_ena_i <= wb_w_ena_i;
			wb_wdata_i <= wb_wdata_i;
			
		end
		else begin
			wb_w_addr_i <= mem_wb_w_addr;
			wb_w_ena_i <= mem_wb_w_ena;
			wb_wdata_i <= mem_wb_wdata;

		end
	end
endmodule


module ysyx_210576_regfile(
    input  wire clock,
	input  wire reset,
	
	input  wire  [4  : 0] w_addr,
	input  wire  [`YSYX210576_InstDataBus] w_data,
	input  wire 		  w_ena,
	
	input  wire  [4  : 0] r_addr1,
	output reg   [`YSYX210576_InstDataBus] r_data1,
	input  wire 		  r_ena1,
	
	input  wire  [4  : 0] r_addr2,
	output reg   [`YSYX210576_InstDataBus] r_data2,
	input  wire 		  r_ena2

    );

    // 32 registers
	reg [`YSYX210576_InstDataBus] 	regs[0 : 31];
	
	always @(posedge clock) 
	begin
		if ( reset == 1'b1 ) 
		begin
			regs[ 0] <= `YSYX210576_Zeroword;
			regs[ 1] <= `YSYX210576_Zeroword;
			regs[ 2] <= `YSYX210576_Zeroword;
			regs[ 3] <= `YSYX210576_Zeroword;
			regs[ 4] <= `YSYX210576_Zeroword;
			regs[ 5] <= `YSYX210576_Zeroword;
			regs[ 6] <= `YSYX210576_Zeroword;
			regs[ 7] <= `YSYX210576_Zeroword;
			regs[ 8] <= `YSYX210576_Zeroword;
			regs[ 9] <= `YSYX210576_Zeroword;
			regs[10] <= `YSYX210576_Zeroword;
			regs[11] <= `YSYX210576_Zeroword;
			regs[12] <= `YSYX210576_Zeroword;
			regs[13] <= `YSYX210576_Zeroword;
			regs[14] <= `YSYX210576_Zeroword;
			regs[15] <= `YSYX210576_Zeroword;
			regs[16] <= `YSYX210576_Zeroword;
			regs[17] <= `YSYX210576_Zeroword;
			regs[18] <= `YSYX210576_Zeroword;
			regs[19] <= `YSYX210576_Zeroword;
			regs[20] <= `YSYX210576_Zeroword;
			regs[21] <= `YSYX210576_Zeroword;
			regs[22] <= `YSYX210576_Zeroword;
			regs[23] <= `YSYX210576_Zeroword;
			regs[24] <= `YSYX210576_Zeroword;
			regs[25] <= `YSYX210576_Zeroword;
			regs[26] <= `YSYX210576_Zeroword;
			regs[27] <= `YSYX210576_Zeroword;
			regs[28] <= `YSYX210576_Zeroword;
			regs[29] <= `YSYX210576_Zeroword;
			regs[30] <= `YSYX210576_Zeroword;
			regs[31] <= `YSYX210576_Zeroword;
		end
		else 
		begin
			if ((w_ena == 1'b1) && (w_addr != 5'b00000))	
				regs[w_addr] <= w_data;
		end
	end
	
	always @(*) begin
		if (reset == 1'b1)
			r_data1 = `YSYX210576_Zeroword;
		
		else if ((r_ena1 == 1'b1) && (w_ena == 1'b1) && (w_addr == r_addr1))
			r_data1 = w_data;
		else if (r_ena1 == 1'b1)
			r_data1 = regs[r_addr1];

		else
			r_data1 = `YSYX210576_Zeroword;
	end
	
	always @(*) begin
		if (reset == 1'b1)
			r_data2 = `YSYX210576_Zeroword;
		else if ((r_ena2 == 1'b1) && (w_ena == 1'b1) && (w_addr == r_addr2))
			r_data2 = w_data;
		else if (r_ena2 == 1'b1)
			r_data2 = regs[r_addr2];
		else
			r_data2 = `YSYX210576_Zeroword;
	end

endmodule

module ysyx_210576_wb_stage(
	input wire reset,
	
	//来自执行阶段的信息
	input wire[4 : 0] wb_w_addr,
	input wire wb_w_ena,
	input wire[`YSYX210576_InstDataBus] wb_wdata,

	//访存结果
	output reg[4 : 0] regfile_w_addr_i,
	output reg regfile_w_ena_i,
	output reg[`YSYX210576_InstDataBus] regfile_wdata_i

    );
	


	always@(*) begin
		if(reset==`YSYX210576_RstEnable) begin
			regfile_w_addr_i = 5'b00000;
			regfile_w_ena_i = 1'b0;
			regfile_wdata_i = `YSYX210576_Zeroword;

		end
		else begin
			regfile_w_addr_i= wb_w_addr;
			regfile_w_ena_i = wb_w_ena;
			regfile_wdata_i = wb_wdata;
	
		end
	end
endmodule

