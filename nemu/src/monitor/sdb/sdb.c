#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
word_t vaddr_read(vaddr_t addr, int len) ;
word_t set_watchpoint(char *e);

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_si (char *args) {
  int step ;
  if(args == NULL) step = 1 ;
  else sscanf(args, "%d", &step);
  cpu_exec(step) ;
  return 0;
}

static int cmd_info (char *args) {
  if(args[0] == 'r') isa_reg_display() ;
  else if(args[0]== 'w') print_wp();
  return 0;
}

static int cmd_x(char *args){
  if(args == NULL) return 0;
  int num , exprs ;
  sscanf(args, "%d%x", &num , &exprs);
  int i ;
  for(i = 0 ; i < num ;i++){
    int temp = vaddr_read(exprs+ i*4,4);
    printf("0x%x 0x%x\n",exprs + i*4,temp);
  }
  return 0;
}

static int cmd_w(char *args){
  comandw(args);
  return 0;
}

static int cmd_d(char *args){
  if(args == NULL) return 0;
  int num = 0;
  sscanf(args,"%d",&num);
  bool ans = delete_wp(num);
  if(ans) printf("delete watchpoint %d successfully!\n",num);
  else if(!ans) printf("there is ont number id %d.\n",num);
  return 0;
}

static int cmd_p(char *args){
  if(args != NULL) 
  
  printf("0x%lx", set_watchpoint(args));
  return 0;
}

static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","step by step execution", cmd_si},
  { "info", "print status information", cmd_info},
  { "x", "scan memory", cmd_x},
  { "p", "EXPR",cmd_p},
  { "w", "set watch point", cmd_w},
  { "d", "delete watch point", cmd_d},
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
