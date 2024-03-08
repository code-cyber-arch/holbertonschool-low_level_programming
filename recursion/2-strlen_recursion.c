#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Finds string length recursively.
 * @s: Pointer to string.
 *
 * Return: Length of string.
 *
 * Description: Increments through string until '\0', returning count.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
