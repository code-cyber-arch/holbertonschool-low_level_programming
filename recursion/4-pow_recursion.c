#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Computes x raised to the power of y recursively.
 * @x: Base number.
 * @y: Exponent.
 *
 * Return: x raised to the power of y. Returns -1 if y is negative.
 *
 * Description: Recursively calculates x^y. Returns 1 if y is 0,
 * -1 if y is negative, or x * x^(y-1) otherwise.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
