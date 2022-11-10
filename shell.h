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

void prompt(void);
char *_getenv(const char *name);
char **get_paths(void);
char **split_str(char *str, const char *delim);
char **realloc_grid(char **ptr, size_t size);
void free_grid(char **ptr);

#endif /* _SHELL_H */
