#include "shell.h"

/**
 * main - Afunction that runs our shell.
 * @ac: The number of imputed arguments.
 * @av: the pointer to array of imputed arguments.
 * @env: the pointer to array of enviromental variables.
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	char *buffer = NULL;
	char **command = NULL;
	size_t buf_size = 0;
	ssize_t chars_read = 0;
	int circles = 0;
	(void)ac;


	while (1)
	{
		circles++;
		prompt();
		signal(SIGINT, handle);
		chars_read = getline(&buffer, &buff_size, stdin);
		if (chars_read == EOF)
			_EOF(buffer);
		else if (*buffer == '\n')
			free(buffer);
		else
		{
			buffer[_strlen(buffer) - 1] = '\0';
			command = token(buffer, " \0");
			free(buffer);
			if (_strcmp(command[0], "exit") != 0)
				shell_exit(command);
			else if (_strcmp(command[0], "cd") != 0)
				change_dir(command[1]);
			else
				create_child(commnad, av[0], env, circles);
		}
	if (chars_read == -1)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

