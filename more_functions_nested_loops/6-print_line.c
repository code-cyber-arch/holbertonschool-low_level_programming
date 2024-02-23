#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line of n underscores
 * @n: the number of underscores to print
 *
 * If n is less than or equal to 0, prints a newline character.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
