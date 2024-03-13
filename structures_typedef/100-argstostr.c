#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates arguments of a program.
 * @ac: Argument count.
 * @av: Argument vector.
 * Return: New string, each argument followed by a newline, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	char *rtn;
	char *ptr;
	int i;
	int length;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			j++;
		}
		length += j + 1;
	}
	rtn = malloc(length + 1);
	if (rtn == NULL)
		return (NULL);
	ptr = rtn;
	for (i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			*ptr++ = av[i][j];
			j++;
		}
		*ptr++ = '\n';
	}
	*ptr = '\0';
	return (rtn);
}
