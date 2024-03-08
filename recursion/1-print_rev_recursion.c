#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse,
 * then a new line, using recursion.
 * @s: Pointer to the string.
 *
 * Description: Moves to the string's end,
 * then prints characters in reverse on unwinding.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
