#ifndef _SHELL_H_
#define _SHELL_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include "_string.h"

extern char **environ;

void prompt(void);
void execute(char **command);
void shell_exit(char **command);

#endif /* _SHELL_H */
