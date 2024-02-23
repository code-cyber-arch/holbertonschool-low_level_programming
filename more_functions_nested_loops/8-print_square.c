#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square of a specified size using #
 * @size: the size of the square
 *
 * If size is less than or equal to 0, prints a newline character.
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
