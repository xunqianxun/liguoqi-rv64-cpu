#include <regex.h>
#include <iostream>

using namespace std;

bool check_parentheses(int p, int q);
int dominant_operator(int p , int q);
uint64_t expr(char *e, bool *success) ;
//static Token tokens[32] __attribute__((used));

enum {
  TK_NOTYPE = 256, TK_OR = 4, TK_AND = 5, TK_EQ = 9, TK_UNEQ = 9, REGNAME = 252, TK_JIA = 11, TK_JIAN = 12, TK_CHENG = 13, TK_CHU = 14, TK_RIGHT = 255, TK_LIFT = 255, HEXTYPE = 254, DTYPE = 253,

  /* TODO: Add more token types */

};
//static int pri[256]{};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  //{"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"0x[0-9a-fA-F]{1,16}", HEXTYPE},
  {"[0-9]{1,10}", DTYPE},
  {"\\$[a-z0-9]{1,31}", REGNAME},
  {"\\(", TK_RIGHT},
  {"\\)", TK_LIFT},
  {"\\*", TK_CHENG},
  {"\\/", TK_CHU},
  {"\\+", TK_JIA},
  {"\\-", TK_JIAN},
  {"!=", TK_UNEQ},
  {"&&", TK_AND},
  {"\\|\\|", TK_OR}
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};



/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
//          default: TODO();
          case TK_NOTYPE: break;
          case HEXTYPE:
          case DTYPE:
          case REGNAME: sprintf(tokens[nr_token].str, "%.*s", substr_len, substr_start);
          default: tokens[nr_token].type = rules[i].token_type;
                   nr_token ++;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

static int eval(int p, int q, bool *success){
  if(p > q) {
    *success = false ;
    return 0;
  }
  else if(p == q) {
    if(tokens[p].type == HEXTYPE) return strtoul(tokens[p].str, NULL, 0);
    else if(tokens[p].type == DTYPE) return strtoul(tokens[p].str, NULL, 0); 
    else if(tokens[p].type == REGNAME) return isa_reg_str2val(tokens[p].str, success);
  }
  else if(check_parentheses(p, q) == true){
    return eval(p+1, q-1, success) ;
  }
  else {
    int op = dominant_operator(p, q);
    int op_type = tokens[op].type;
    int val1 = eval(p, op-1, success);
    int val2 = eval(op+1, q, success);

    switch(op_type){
      case TK_JIA : return val1 + val2 ;
      case TK_JIAN : return val1 - val2 ;
      case TK_CHENG : return val1 * val2 ;
      case TK_CHU : return val1 / val2 ;
      default: assert(0) ;
    }
  }
  return 0 ;
}
  int khdt;
bool check_parentheses(int p, int q){
  int i;

  if(tokens[p].type != TK_RIGHT || tokens[q].type != TK_LIFT ) return false ;
  for(i = p; i < q; i++){
    if(tokens[i].type == TK_RIGHT) khdt += 1;
    else if(tokens[i].type == TK_LIFT) khdt -= 1;
    if(khdt == 0 && i < q) return false ;
  }
  if(khdt != 0) return false ;
  return true ;
}

int dominant_operator(int p , int q){
  int i, dominant = p, lift_n = 0, jcq = 256 ;
  for(i=p; i<=q; i++){
    if(tokens[p].type == TK_RIGHT){
      lift_n +=1;
      i++;
      while(1){
        if(tokens[i].type == TK_RIGHT) lift_n +=1 ;
        else if(tokens[i].type == TK_LIFT) lift_n = lift_n - 1;
        i++;
        if(lift_n == 0) break ;
      }
      if(i>q) break ;
    }
    else if(tokens[i].type == DTYPE) continue;
    else if(tokens[i].type == HEXTYPE) continue;
    else if(tokens[i].type < jcq){
      jcq = tokens[i].type ;
      dominant = i ;
    }
  }
  return dominant;
}

uint64_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
//  TODO();

  return eval(0, nr_token -1, success);
}