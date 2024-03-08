#include "main.h"
#include <stdio.h>

/**
 * factorial - Computes factorial of a number recursively.
 * @n: Integer to compute factorial for.
 *
 * Return: Factorial of `n`, or -1 if `n` is negative.
 *
 * Description: Uses recursion, base cases are `n` equals 0 (returns 1) or
 * `n` is negative (returns -1).
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
