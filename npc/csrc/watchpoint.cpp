#include "exper.cpp"

using namespace std;

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char exp[32];
  uint64_t value ;

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

int set_watchpoint(char *e) {
  bool success;
  uint64_t val = expr(e, &success);
  return val ;
}

WP* new_wp(char *exp){
assert(free_ != NULL);
WP *temp = free_;
free_ = free_->next ;
temp->next = NULL ;

bool success ;
strcpy(temp->exp, exp);
temp->value = expr(temp->exp,&success);
//assert(success);
if(head == NULL) head = temp ;
else{
  WP *p = head ;
  while(p->next) p = p->next;
  p->next = temp ;
}
return temp;
}

bool free_wp(WP *wp){
if(wp == NULL) printf("input something\n");
if(wp == head) head = head->next;
else{
  WP *p = head ;
  while(p->next != wp) p = p->next;
  if(p == NULL) return 0;
  p->next = wp->next;
}
wp->next = free_;
free_ = wp;
return 1;
}

/*
static void free_WP(WP *p) {
  assert(p >= wp_pool && p < wp_pool + NR_WP);
  free(p->exp);
  p->next = free_;
  free_ = p;
}
*/
bool test_change(){
WP *p;
for(p = head; p!= NULL; p=p->next){
  bool success;
  uint64_t new_vale = expr(p->exp, &success);
  if(p->value != new_vale) return 1;
}
return 0;
}

bool delete_wp(int NO){
WP *p;
for(p=head; p != NULL; p = p->next){
if(p->NO == NO) {break;}
}

free_wp(p);
return true;
}

void print_wp(){
  if(head == NULL) printf("no watchpoint\n");

  WP *p; 
  for(p = head; p != NULL; p = p->next){
    printf("%8d\t%s\t" FMT_WORD "\n", p->NO, p->exp, p->value);
  }
}
void comandw(char *p){
  WP*n_wp = new_wp(p);
  printf("wachpoint %d:%s is set successfully.\n",n_wp->NO, n_wp->exp);
}