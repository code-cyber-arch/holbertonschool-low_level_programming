#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string up to the newline character.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string,
 * or NULL on failure or if str is NULL.
 *
 * Description: Allocates memory to duplicate `str`
 * until a newline character, excluding it.
 */

char *_strdup(char *str)
{
	char *dup_str;
	int i = 0;
	int j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	dup_str = malloc(sizeof(char) * (i + 1));
	if (dup_str == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		dup_str[j] = str[j];
	dup_str[i] = '\0';
	return (dup_str);
}
