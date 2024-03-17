#include "main.h"
#include <stdlib.h>

/**
 * free_g - frees a 2 dimensional array.
 * @_g: multidimensional array of char.
 * @i: height of the array.
 *
 * Return: no return
 */
void free_g(char **_g, unsigned int i)
{
	if (_g != NULL && i != 0)
	{
		for (; i > 0; i--)
			free(_g[i]);
		free(_g[i]);
		free(_g);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */

char **strtow(char *str)
{
	char **array;
	unsigned int c, h, i, j, a;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = h = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			h++;
	array = malloc((h + 1) * sizeof(char *));
	if (array == NULL || h == 0)
	{
		free(array);
		return (NULL);
	}
	for (i = a = 0; i < h; i++)
	{
		for (c = a; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				array[i] = malloc((c - a + 2) * sizeof(char));
				if (array[i] == NULL)
				{
					free_g(array, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a <= c; a++, j++)
			array[i][j] = str[a];
		array[i][j] = '\0';
	}
	array[i] = NULL;
	return (array);
}
