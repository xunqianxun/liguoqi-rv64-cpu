//system 
`define ysyx22040228_RSTENA    1'b1
//pip define 
`define ysyx22040228_PCBUS     63:0
`define ysyx22040228_INSTBUS   31:0
`define ysyx22040228_REGBUS    63:0
`define ysyx22040228_ZEROWORD  64'h0000000000000000
`define ysyx22040228_NEXTPC    64'h0000000000000004
//pc
`define ysyx22040228_START     64'h0000000080000000
//id
//`define ysyx22040228_REGBUS       63:0
`define ysyx22040228_REGADDRBUS   4:0
`define ysyx22040228_SYS          5'b11100
`define ysyx22040228_REGIMM        5'b00100
`define ysyx22040228_REGREG        5'b01100
`define ysyx22040228_REGIMMW      5'b00110
`define ysyx22040228_REGREGW      5'b01110
`define ysyx22040228_LUI            5'b01101
`define ysyx22040228_AUIPC          5'b00101
`define ysyx22040228_JAL            5'b11011
`define ysyx22040228_JALR           5'b11001
`define ysyx22040228_BRANCH             5'b11000
`define ysyx22040228_LOAD               5'b00000
`define ysyx22040228_STORE              5'b01000
`define FENCH              5'b00011
`define ysyx22040228_FLUSHDISABLE 1'b0
`define ysyx22040228_FLUSHABLE    1'b1
//ctrl
`define ysyx22040228_STOP      1'b1
`define ysyx22040228_NOSTOP    1'b0
//ex
`define ysyx22040228_WDISABLE  1'b0
`define ysyx22040228_WENABLE   1'b1
`define ysyx22040228_RDISABLE  1'b0
`define ysyx22040228_RENABLE   1'b1
`define ysyx22040228_DATAADDRBUS   63:0
`define ysyx22040228_DATABUS       63:0

//inst
`define EBREAK_TRAP        64'b00000000000100000000000001110011
`define INST_ADDI          8'b00000001
`define INST_SLTI          8'b00000010
`define INST_SLTIU         8'b00000100
`define INST_XORI          8'b00001000
`define INST_ORI           8'b00010000
`define INST_ANDI          8'b00100000
`define INST_SLLI          8'b01000000
`define INST_SRLI          8'b10000000
`define INST_SRAI          8'b00000011
`define INST_ADD           8'b00001100
`define INST_SUB           8'b00110000
`define INST_SLL           8'b11000000
`define INST_SLT           8'b00000101
`define INST_SLTU          8'b00001010
`define INST_XOR           8'b01010000
`define INST_SRL           8'b10100000
`define INST_SRA           8'b00010001
`define INST_OR            8'b00100010
`define INST_AND           8'b01000100
`define INST_LUI           8'b10001000
`define INST_AUIPC         8'b10000001
`define INST_ADDIW         8'b00011000
`define INST_SLLIW         8'b00001001
`define INST_SRLIW         8'b10010000
`define INST_SRAIW         8'b00000110
`define INST_ADDW          8'b01100000
`define INST_SUBW          8'b00100001
`define INST_SLLW          8'b00010010
`define INST_SRLW          8'b10000100
`define INST_SRAW          8'b01001000

`define INST_JAL           8'b01000010
`define INST_JALR          8'b00100100

`define INST_BEQ           8'b00000001
`define INST_BNE           8'b00000010
`define INST_BLT           8'b00000100
`define INST_BGE           8'b00001000
`define INST_BLTU          8'b00010000
`define INST_BGEU          8'b00100000

`define INST_CSRRW         8'b01000000
`define INST_CSRRS         8'b10000000
`define INST_CSRRC         8'b00000001
`define INST_CSRRWI        8'b00000010
`define INST_CSRRSI        8'b00000100
`define INST_CSRRCI        8'b00001000

`define INST_EBREAK        8'b00000111
`define INST_ECALL         8'b00010000
`define INST_MRET          8'b00100000

//mem
//`define DATA_BUS           63:0
`define LB_SEL             3'b000
`define LH_SEL             3'b001
`define LW_SEL             3'b010
`define LBU_SEL            3'b100
`define LHU_SEL            3'b101
`define LWU_SEL            3'b110
`define LD_SEL             3'b011

`define SB_SEL             3'b000
`define SH_SEL             3'b001
`define SW_SEL             3'b010
`define SD_SEL             3'b011
//defines
