#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words in a string
 * @s: The string to capitalize
 *
 * Return: A pointer to the capitalized string
 */

char *cap_string(char *s)
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
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		else if ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '.') &&
				(s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
