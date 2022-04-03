#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N, TYPE_J  , TYPE_B,
  TYPE_R,
   // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t j_of(uint32_t i) { return (SEXT(BITS(i, 31, 31), 1) << 19) | (BITS(i, 19, 12) << 11) | (BITS(i, 20, 20) << 10) | BITS(i, 30, 21) << 1; }
static word_t immB(uint32_t i) { return (SEXT(BITS(i, 31, 31), 1) << 12) | (BITS(i, 7, 7) << 11) | (BITS(i, 30, 25) << 5) | BITS(i, 11, 8) << 1;}

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);
 // bool btyperes;
  switch (type) {
    case TYPE_I: src1R(rs1);     src2I(immI(i)); destI(rd);  break;
    case TYPE_U: src1I(immU(i)); destI(rd);      break;
    case TYPE_S: destI(immS(i)); src1R(rs1);     src2R(rs2); break;
    case TYPE_J: src1I(s->pc);   src2I(j_of(i)); destI(rd);  break;
    case TYPE_R: src1R(rs1);     src2R(rs2);     destI(rd);  break;
    case TYPE_B: src1R(rs1);     src2R(rs2);     destI(immB(i)); break;
  }
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = src1 + 4, s->dnpc = src1 + src2);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = src1);
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = src1 << src2);
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(dest) = s->pc + 4, s->dnpc = src1 + src2);
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, src1 = ((src1 + src2) & 0x00000000ffffffff); if((src1 & 0x000000080000000) == 0x000000008000000) R(dest) = src1 | 0xffffffff00000000; else R(dest) = src1;);
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, src1 = ((src1 + src2) & 0x00000000ffffffff); if((src1 & 0x000000080000000) == 0x000000008000000) R(dest) = src1 | 0xffffffff00000000; else R(dest) = src1;);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, if(src1 == src2) { if((dest & 0x1000) == 0x1000) s->dnpc =s->pc - (~dest + 1); else s->dnpc =s->pc + dest;} else s->pc = s->pc;);
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, if(src1 >= src2) { if((dest & 0x1000) == 0x1000) s->dnpc =s->pc - (~dest + 1); else s->dnpc =s->pc + dest;} else s->pc = s->pc;);
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", begu   , B, if(src1 >= src2) { if((dest & 0x1000) == 0x1000) s->dnpc =s->pc - (~dest + 1); else s->dnpc =s->pc + dest;} else s->pc = s->pc;);
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, if(src1 <= src2) { if((dest & 0x1000) == 0x1000) s->dnpc =s->pc - (~dest + 1); else s->dnpc =s->pc + dest;} else s->pc = s->pc;);
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, if(src1 <= src2) { if((dest & 0x1000) == 0x1000) s->dnpc =s->pc - (~dest + 1); else s->dnpc =s->pc + dest;} else s->pc = s->pc;);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if(src1 != src2) { if((dest & 0x1000) == 0x1000) s->dnpc =s->pc - (~dest + 1); else s->dnpc =s->pc + dest;} else s->pc = s->pc;);
  //INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , I, ) 
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, switch ((src1 + src2) & 0b111){
  case 0b000: src1 = (Mr(src1 + src2, 8) & 0x00000000000000ff); if((src1 & 0x0000000000000080) == 0x0000000000000080) R(dest) = (0xffffffffffffff00 | src1); else R(dest) = src1 ; break;
  case 0b001: src1 = (Mr(src1 + src2, 8) & 0x000000000000ff00); if((src1 & 0x0000000000008000) == 0x0000000000008000) R(dest) = (((0xffffffffffff0000 | src1) >> 8) | 0xff00000000000000) ; else R(dest) = src1 >> 8; break;
  case 0b010: src1 = (Mr(src1 + src2, 8) & 0x0000000000ff0000); if((src1 & 0x0000000000800000) == 0x0000000000800000) R(dest) = (((0xffffffffff000000 | src1) >> 16) | 0xffff000000000000) ; else R(dest) = src1 >> 16; break;
  case 0b011: src1 = (Mr(src1 + src2, 8) & 0x00000000ff000000); if((src1 & 0x0000000080000000) == 0x0000000080000000) R(dest) = (((0xffffffff00000000 | src1) >> 24) | 0xffffff0000000000) ; else R(dest) = src1 >> 24; break;
  case 0b100: src1 = (Mr(src1 + src2, 8) & 0x000000ff00000000); if((src1 & 0x0000008000000000) == 0x0000008000000000) R(dest) = (((0xffffff0000000000 | src1) >> 32) | 0xffffffff00000000) ; else R(dest) = src1 >> 32; break;
  case 0b101: src1 = (Mr(src1 + src2, 8) & 0x0000ff0000000000); if((src1 & 0x0000800000000000) == 0x0000800000000000) R(dest) = (((0xffff000000000000 | src1) >> 40) | 0xffffffffff000000) ; else R(dest) = src1 >> 40; break;
  case 0b110: src1 = (Mr(src1 + src2, 8) & 0x00ff000000000000); if((src1 & 0x0080000000000000) == 0x0080000000000000) R(dest) = (((0xff00000000000000 | src1) >> 48) | 0xffffffffffff0000) ; else R(dest) = src1 >> 48; break;
  default:    src1 = (Mr(src1 + src2, 8) & 0xff00000000000000); if((src1 & 0x8000000000000000) == 0x8000000000000000) R(dest) = ((src1 >> 56) | 0xffffffffffffff00) ; else R(dest) = src1 >> 56; break; });
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, switch ((src1 + src2) & 0b111){
  case 0b000: R(dest) = (Mr(src1 + src2, 8) & 0x00000000000000ff); break;
  case 0b001: R(dest) = ((Mr(src1 + src2, 8) & 0x000000000000ff00) >> 8); break;
  case 0b010: R(dest) = ((Mr(src1 + src2, 8) & 0x0000000000ff0000) >> 16); break;
  case 0b011: R(dest) = ((Mr(src1 + src2, 8) & 0x00000000ff000000) >> 24); break;
  case 0b100: R(dest) = ((Mr(src1 + src2, 8) & 0x000000ff00000000) >> 32); break;
  case 0b101: R(dest) = ((Mr(src1 + src2, 8) & 0x0000ff0000000000) >> 40); break;
  case 0b110: R(dest) = ((Mr(src1 + src2, 8) & 0x00ff000000000000) >> 48); break;
  default:    R(dest) = ((Mr(src1 + src2, 8) & 0xff00000000000000) >> 56); break; });
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, switch ((src1 + src2) & 0b10){
  case 0b00: src1 = (Mr(src1 + src2, 8) & 0x000000000000ffff); if((src1 & 0x0000000000008000) == 0x0000000000008000) R(dest) = 0xffffffffffff0000 | src1 ; else R(dest) = src1; break;
  case 0b01: src1 = (Mr(src1 + src2, 8) & 0x00000000ffff0000); if((src1 & 0x0000000080000000) == 0x0000000080000000) R(dest) = (((0xffffffff00000000 | src1) >> 16) | 0xffff000000000000) ; else R(dest) = src1 >> 16; break;
  case 0b10: src1 = (Mr(src1 + src2, 8) & 0x0000ffff00000000); if((src1 & 0x0000800000000000) == 0x0000800000000000) R(dest) = (((0xffff000000000000 | src1) >> 32) | 0xffffffff00000000) ; else R(dest) = src1 >> 32; break;
  default:    src1 = (Mr(src1 + src2, 8) & 0xffff000000000000); if((src1 & 0x8000000000000000) == 0x8000000000000000) R(dest) = ((src1 >> 48) | 0xffffffffffff0000) ; else R(dest) = src1 >> 48; break;  });
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, switch ((src1 + src2) & 0b10){
  case 0b00: R(dest) = (Mr(src1 + src2, 8) & 0x000000000000ffff); break;
  case 0b01: R(dest) = ((Mr(src1 + src2, 8) & 0x00000000ffff0000) >> 16); break;
  case 0b10: R(dest) = ((Mr(src1 + src2, 8) & 0x0000ffff00000000) >> 32); break;
  default:    R(dest) = ((Mr(src1 + src2, 8) & 0xffff000000000000) >> 48); break; });
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, switch ((src1 + src2) & 0b1){
  case 0b0: /*R(dest) = Mr(src1 + src2, 8); break;*/ src1 = (Mr(src1 + src2, 8) & 0x00000000ffffffff); if((src1 & 0x0000000080000000) == 0x0000000080000000) R(dest) = (0xffffffff00000000 | src1) ; else R(dest) = src1; break;
  default:  /*R(dest) = Mr(src1 + src2, 8); break;});*/ src1 = (Mr(src1 + src2, 8) & 0xffffffff00000000); if((src1 & 0x8000000000000000) == 0x8000000000000000) R(dest) = ((src1 >> 32) | 0xffffffff00000000) ; else R(dest) = (src1 >> 32); break;  });
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu    , I, switch ((src1 + src2) & 0b1){
  case 0b0: R(dest) = (Mr(src1 + src2, 8) & 0x00000000ffffffff); break;
  default:    R(dest) = ((Mr(src1 + src2, 8) & 0xffffffff00000000) >> 32); break; });
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2);
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, switch ((dest + src1) & 0b111){
  case 0b000: Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0xffffffffffffff00) | (src2 & 0x00000000000000ff)));  break;
  case 0b001: Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0xffffffffffff00ff) | ((src2 & 0x00000000000000ff) << 8)));  break;
  case 0b010: Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0xffffffffff00ffff) | ((src2 & 0x00000000000000ff) << 16)));  break;
  case 0b011: Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0xffffffff00ffffff) | ((src2 & 0x00000000000000ff) << 24)));  break;
  case 0b100: Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0xffffff00ffffffff) | ((src2 & 0x00000000000000ff) << 32)));  break;
  case 0b101: Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0xffff00ffffffffff) | ((src2 & 0x00000000000000ff) << 40)));  break;
  case 0b110: Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0xff00ffffffffffff) | ((src2 & 0x00000000000000ff) << 48)));  break;
  default:    Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0x00ffffffffffffff) | ((src2 & 0x00000000000000ff) << 56)));  break; });
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh      , S, switch ((dest + src1) & 0b11){
  case 0b00: Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0xffffffffffff0000) | (src2 & 0x000000000000ffff)));  break;
  case 0b01: Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0xffffffff0000ffff) | ((src2 & 0x000000000000ffff) << 16)));  break;
  case 0b10: Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0xffff0000ffffffff) | ((src2 & 0x000000000000ffff) << 32)));  break;
  default:    Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0x0000ffffffffffff) | ((src2 & 0x000000000000ffff) << 48)));  break; });
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw      , S, switch ((dest + src1) & 0b1){
  case 0b0: Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0xffffffff00000000) | (src2 & 0x00000000ffffffff)));  break;
  default:    Mw(src1 + dest, 8, ((Mr(src1 + dest, 8) & 0x00000000ffffffff) | ((src2 & 0x00000000ffffffff) << 32)));  break; });
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll     , R, R(dest) = (src1 << (src2 & 0x000000000000001f)));
  INSTPAT("0000000 ????? ????? 001 ????? 00110 11", slliw   , I, R(dest) = (src1 << src2) & 0x00000000ffffffff);
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw    , R, R(dest) = (src1 & 0x00000000ffffffff) << (src2 & 0x000000000000001f));
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt     , R, R(dest) = (src1 < src2) ? 1 : 0);
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti    , I, R(dest) = (src1 < src2) ? 1 : 0);
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu   , I, R(dest) = (src1 < src2) ? 1 : 0);
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu    , R, R(dest) = (src1 < src2) ? 1 : 0);
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra     , R, if((src1 & 0x8000000000000000) == 0x8000000000000000) R(dest) = (0xffffffffffffffff << (64 - (src2 & 0x000000000000001f)) | (src1 >> (src2 & 0x000000000000001f))); else R(dest) = (src1 >> (src2 & 0x000000000000001f)); );
  INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai    , I, if((src1 & 0x8000000000000000) == 0x8000000000000000) R(dest) = ((0xffffffffffffffff << (64 - src2)) | (src1 >> src2)); else R(dest) = src1 >> src2; );
  INSTPAT("0100000 ????? ????? 101 ????? 00110 11", sraiw   , I, if((src1 & 0x80000000) == 0x80000000) R(dest) = (((0xffffffff00000000 >> (src2 & 0x000000000000001f)) | 0xffffffff00000000) | ((src1 | 0x00000000ffffffff) >> (src2 & 0x000000000000001f))); else R(dest) = ((src1 | 0x00000000ffffffff) >> (src2 & 0x000000000000001f)); );
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw    , R, if((src1 & 0x80000000) == 0x80000000) R(dest) = (((0xffffffff00000000 >> (src2 & 0x000000000000001f)) | 0xffffffff00000000) | ((src1 | 0x00000000ffffffff) >> (src2 & 0x000000000000001f))); else R(dest) = ((src1 | 0x00000000ffffffff) >> (src2 & 0x000000000000001f)); );
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl     , R, R(dest) = (src1 >> (src2 & 0x000000000000001f)));
  INSTPAT("0000000 ????? ????? 101 ????? 00100 11", srli    , I, R(dest) = (src1 >> src2));
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11", srliw   , I, src1 = ((src1 & 0x00000000ffffffff) >> src2); if((src1 & 0x0000000080000000) == 0x0000000080000000) R(dest) = 0xffffffff00000000 | src1 ; else R(dest) = src1; );
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw    , R, src1 = ((src1 & 0x00000000ffffffff) >> (src2 & 0x000000000000001f)); if((src1 & 0x0000000080000000) == 0x0000000080000000) R(dest) = 0xffffffff00000000 | src1; else R(dest) = src1;);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub     , R, R(dest) = src1 - src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw    , R, src1 = (src1 & 0x00000000ffffffff) - (src2 & 0x00000000ffffffff); if((src1 & 0x0000000080000000) == 0x0000000080000000) R(dest) = 0xffffffff00000000 | src1; else R(dest) = src1; );
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor     , R, R(dest) = src1 ^ src2);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori    , I, R(dest) = src1 ^ src2);
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw    , R, R(dest) = (src1 & 0x00000000ffffffff)%(src2 & 0x00000000ffffffff));
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw    , R, src1 = src1 * src2; if((src1 & 0x80000000) == 0x80000000) R(dest) = 0xffffffff00000000 | src1; else R(dest) = src1 & 0x00000000ffffffff;);
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv     , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
