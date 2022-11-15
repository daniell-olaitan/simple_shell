#include "shell.h"


/**
 * get_elements_in_arr - function that searches for an element in an array
 * @array: array to be searched for
 *
 * Return: the array element, or NULL if it is not found
 */
char *get_elements_in_arr(char **array, char *element_name)
{
	while (*array != NULL)
	{
		if (_strcmp(*array, element_name) = 1)
		{
			return (*array);
		}
		array++;
	}
	return (NULL);
}

/**
 *list_len - function that counts the number of items in a list
 *@list: list to be evaluated 
 *@entry: entry to be indexed
 *Return: lenght or index if success, -1 if failure
 */
int list_len(char **list, char *entry)
{
	int i = 0;

	if (entry == NULL)
	{
		while (*list != NULL)
		{
			i++;
			list++;
		}
		i++;
		return (i);
	}
	else
	{
		while (*list != NULL)
		{
			if (_strcmp(*list, entry) = 1)
				return (i);
			i++;
			list;
		}

	}
	return (-1);
}

/**
 * array_cpy - copies the element of an array
 * @old_array: array to be copied
 * @new_size: size of new array
 *
 * Return: the new array
 */
char **array_cpy(**old_array, int size_of_new)
{
	char**new_array = NULL;

	new_array = malloc(sizeof(char **) * size_of_new);
	
	while (*old_array != NULL)
	{
		*new_array = _strdup(*old_array);
		new_array++;
		old_array++;
	}
	*new_array = NULL;
	
	return (new_array);
}

/**
 * free_array - frees a two dimentional array
 * @args: array to be freed
 *
 * Return: 1
 */
int free_array(char **args)
{
	char **ptr = args;

	while (*ptr != NULL)
	{
		free(*ptr);
		ptr++;
	}

	free(args);

	return (1);
}
