#ifndef _BUILTINS_H_
#define _BUILTINS_H_

#define BUILTIN_ERROR 2

#include "siparse.h"

typedef struct {
	char* name;
	int (*fun)(char**); 
} builtin_pair;

extern builtin_pair builtins_table[];

typedef int(* builtin_cmd_t)(char**);

builtin_cmd_t find_builtin_fun(char* name);

void exec_builtin(command* cmd, builtin_cmd_t fun);

#endif /* !_BUILTINS_H_ */
