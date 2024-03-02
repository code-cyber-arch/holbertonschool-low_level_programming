#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: A pointer to the first occurrence in s of any character in accept,
 *         or NULL if no such character is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *copy_accept = accept;

	while (*s != '\0')
	{
		accept = copy_accept;
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}
