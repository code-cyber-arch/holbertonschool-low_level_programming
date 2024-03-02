#include <stdio.h>

/**
 * _strchr - Finds the first occurrence of a character in a string.
 *
 * @s: The string to search.
 * @c: The character to find.
 *
 * Return: If character is found, returns a pointer to the first occurrence;
 *         if character is '\0', returns a pointer to the null terminator;
 *         otherwise, returns NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
