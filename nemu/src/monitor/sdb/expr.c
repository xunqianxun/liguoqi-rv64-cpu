#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

bool check_parentheses(int p, int q);
int dominant_operator(int p , int q);


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
  {"0x[0-9,a-f]+", HEXTYPE},
  {"[0-9]+", DTYPE},
  {"\\$[a-z]{2-3}", REGNAME},
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

int eval(int p, int q){
  if(p > q) assert(0) ;
  else if(p == q) {
    if(rules[p].token_type == 254) return strtoul(rules[p].regex, NULL, 0);
    else if(rules[p].token_type == 253) return strtoul(rules[p].regex, NULL, 0); 
    else if(rules[p].token_type == 252) return isa_reg_str2val(rules[p].regex+1, NULL);
  }
  else if(check_parentheses(p, q) == true){
    return eval(p+1, q-1) ;
  }
  else {
    int op = dominant_operator(p, q);
    int val1 = eval(p, op-1);
    int val2 = eval(op+1, q);

    switch(op){
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

  if(rules[p].token_type != TK_RIGHT || rules[q].token_type != TK_LIFT ) return false ;
  for(i = p; i < q; i++){
    if(rules[i].token_type == TK_RIGHT) khdt += 1;
    else if(rules[i].token_type == TK_LIFT) khdt -= 1;
    if(khdt == 0 && i < q) return false ;
  }
  if(khdt != 0) return false ;
  return true ;
}

int dominant_operator(int p , int q){
  int i, dominant = p, lift_n = 0, jcq = 256 ;
  for(i=p; i<=q; i++){
    if(rules[i].token_type == TK_RIGHT){
      lift_n +=1;
      i++;
      while(1){
        if(rules[i].token_type == TK_RIGHT) lift_n +=1 ;
        else if(rules[i].token_type == TK_LIFT) lift_n = lift_n - 1;
        i++;
        if(lift_n == 0) break ;
      }
      if(i>q) break ;
    }
    else if(rules[i].token_type == DTYPE) continue;
    else if(rules[i].token_type == HEXTYPE) continue;
    else if(rules[i].token_type < jcq){
      jcq = rules[i].token_type ;
      dominant = i ;
    }
  }
  return dominant;
}

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
          default: TODO();
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


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  TODO();

  return 0;
}
