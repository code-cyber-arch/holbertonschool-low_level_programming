#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to the string.
 *
 * This function calculates the length of the string @str and then prints
 * the second half of the string (including the middle character if the
 * length is odd), followed by a new line character '\n'.
 */

void puts_half(char *str)
{
	int l;
	int i;
	int half;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		half = l / 2;
		for (i = half; i < l; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		half = (l - 1) / 2;
		for (i = half + 1; i < l; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
