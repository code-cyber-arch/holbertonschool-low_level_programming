#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * This function prints the string @str to the standard output,
 * character by character, until it reaches the null terminator '\0'.
 * It then prints a new line character '\n'.
 */

void _puts(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
