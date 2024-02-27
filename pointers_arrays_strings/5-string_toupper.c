#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase
 * @s: The string to convert
 *
 * Return: A pointer to the converted string
 */

char *string_toupper(char *s)
{
	int i;
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
