#include <stdlib.h>

/**
 * _strdup - duplicates a given str
 * @str: the string to be duplicated
 *
 * Return: pointer to the new copy of the string
 */
char *_strdup(const char *str)
{
	unsigned int i, len;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; ++i)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);
}

/**
 * _strlen - computes the length of a given string
 * @str: the given str
 *
 * Return: the length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (len);

	while (str[len])
		len++;

	return (len);
}

/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 *
 * Return: -ve if s1 < s2, +ve if s1 > s2, 0 otherwise
 */
int _strcmp(const char *s1, const char *s2)
{
	unsigned int i;
	unsigned int l1 = _strlen(s1);
	unsigned int l2 = _strlen(s2);
	unsigned int l = l1 < l2 ? l1 : l2;

	if (s1 == NULL || s2 == NULL)
		return (128);

	for (i = 0; i < l; ++i)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	if (l1 == l2)
		return (0);

	else
		return (s1[i] - s2[i]);
}
