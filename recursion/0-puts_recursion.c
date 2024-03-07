#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Recursively prints a string followed by a new line.
 * @s: Pointer to the string to print.
 *
 * Description: Prints each character of the string `s` using recursion.
 * It stops and prints a newline when it reaches the end of the string.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
