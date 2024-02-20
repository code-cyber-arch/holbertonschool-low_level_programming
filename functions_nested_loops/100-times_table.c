#include "main.h"

/**
 * print_times_table - Prints a multiplication table up to n
 * @n: The number up to which the table should be printed
 *
 * Description: This function prints a multiplication table up to the
 *              given number 'n'.
 */

void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			result = i * j;
			if (result <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (result <= 99)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
			}
			else
			{
				_putchar((result / 100) + '0');
				_putchar(((result % 100) / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
