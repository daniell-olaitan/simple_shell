#include "shell.h"

/**
 *_unsetenv - deletes an enviroment variable
 *@name: name of variable
 *
 *Return: 0 if successful
 */
int _unsetenv(const char *name)
{
	char **env_ptr;
	int len = list_len(env, (char *)name);

	if (len == -1)
	{
		write(STDERR_FILENO, "unsetenv: variable not found\n", 29);
		status = 2;
		return (SKIP_FORK);
	}
	env_ptr = env + len;
	free(*env_ptr);

	while (*(env_ptr + 1) != NULL)
	{
		*env_ptr = *(env_ptr + 1);
		env_ptr++;
	}
	*env_ptr = NULL;
	status = 0;

	return (SKIP_FORK);
}
