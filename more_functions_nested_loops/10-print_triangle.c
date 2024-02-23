#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle of a specified size using #
 * @size: the size of the triangle
 *
 * If size is less than or equal to 0, prints a newline character.
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = 1; j < size + 1; j++)
			{
				if (j < i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
