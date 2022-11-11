#include "shell.h"

/**
 * prompt - a function that prints the shell prompt
 * R|eturn: nothing
 */
void prompt(void)
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "Hell_shell>> ", 13);
}
