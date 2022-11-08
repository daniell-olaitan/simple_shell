#ifndef _SHELL_H_
#define _SHELL_H_
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int ac, char **av, char **env);
void prompt(void);
void shell_exit(char **command);

#endif /* _SHELL_H */
