#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: Pointer to the string.
 *
 * This function prints every other character of the string @str,
 * starting from the first character, followed by a new line character '\n'.
 */

void puts2(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		if (l % 2 == 0)
			_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
