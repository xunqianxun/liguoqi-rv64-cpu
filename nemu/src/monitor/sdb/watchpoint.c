#include "sdb.h"
#ifdef _ICS_EXPORT
#include<stdio.h>
#endif

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
#ifndef _ICS_EXPORT
  char *expr;
  word_t old_val ;
#endif

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
  word_t val = expr(e, &success);
  return val ;
}
/* TODO: Implement the functionality of watchpoint */

