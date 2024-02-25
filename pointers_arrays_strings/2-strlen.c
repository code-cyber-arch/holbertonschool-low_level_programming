#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to the string.
 *
 * This function calculates the length of the string @s
 * (excluding the terminating null byte '\0').
 * It returns the number of characters in the string.
 *
 * Return: The length of the string @s.
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
