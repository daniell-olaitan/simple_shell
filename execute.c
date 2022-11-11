#include "shell.h"

/**
 * execute - function to execute a command
 *
 * @av: input command to be executed
 * Return: Always 0
 */
int execute(char *av)
{
	pid_t pid;


	pid = fork();
	if (pid == -1)
	{
		prinf("Error: ");
		return (1);
	}
	if (pid == 0)
	{
		val = execve(av[0], av, env);
		if (val == -1)
			perror("Error");
	}
	else
	{
		wait(NULL);
	}
	return (0);
}
