#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * This function calculates the length of the string @s and then prints
 * its characters in reverse order, followed by a new line character '\n'.
 */

void print_rev(char *s)
{
	int l;
	int i;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
