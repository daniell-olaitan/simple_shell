#include "shell.h"
#define MAXLINE 100

/**
 * readline - function that accepts an input stream from the keyboard
 *
 * Return: lenght of input.
 */
int readline(void)
{
	int i;
	int c;
	char line[MAXLINE];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF
			&& c != '\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return (i);
}
