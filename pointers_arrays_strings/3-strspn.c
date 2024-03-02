#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of characters in the initial segment
 * of s which consist
 * only of characters from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		b++;
	}
	return (b);
}
