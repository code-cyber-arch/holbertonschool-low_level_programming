#include "main.h"

/**
 * print_sign - Entry point of the function
 *
 * @n: The character to be checked
 *
 * Description: Prints the sign of a number
 *
 * Return: 1 for posetive, 0 for zero and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
