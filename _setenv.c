#include "shell.h"

/**
 *
 *
 *
 */
int _setenv(const char *name, const char *value)
{
	char *buffer;
	char *buff_tmp;
	int len;
	char *element_ptr = get_elements_in_arr(env, (char *)name);

	if (value == NULL)
	{
		write(STDERR_FILENO, "setenv: no value has been given\n", 23);
		status = 2;
		return (SKIP_FORK);
	}

	buffer = _strcmp((char *)name, "=");
	buf_temp = _strcmp(buffer, (char *)value);
	free(buffer);
	buffer = buf_tmp;

	if (element_ptr == NULL)
	{
		len = list_len(env, NULL);
		new_env = array_cpy(env, len + 1);
		new_env[len - 1] = buffer;
		new_env[len] = NULL;
		free_arr(env);
		env = new_env;
		return (SKIP_FORK);
	}

	len = list_len(env, (char *)name);
	free(env[len]);
	env[len] = buffer;
	status = 0;

	return (SKIP_FORK);
}
