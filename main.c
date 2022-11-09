#include "shell.h"

/**
 * main - A function that runs our shell.
 * @ac: The number of imputed arguments.
 * @av: the pointer to array of imputed arguments.
 * @env: the pointer to array of enviromental variables.
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	char **paths;
	char *line = NULL;
	char *delim = "\t \n";
	char *builtins[] = {"exit", NULL};

	(void)ac;
	paths = get_paths(env);
	signal(SIGINT, SIG_IGN);
	while (1)
	{
		prompt();
		line = readline();
		av = split(line, delim);
		if (is_builtin(av[0], builtins))
		{
			execute_builtin(av);
		}
		else
		{
			create_path(av, paths);
			execute(av);
		}

		free(line);
		free(av);
	}

	return (EXIT_SUCCESS);
}
