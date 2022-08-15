#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);
bool test_change();
bool delete_wp(int NO);
void print_wp();
void comandw(char *p);
#endif
