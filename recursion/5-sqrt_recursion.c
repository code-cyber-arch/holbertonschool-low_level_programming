#include "main.h"
#include <stdio.h>

int check_square(int, int);
int _sqrt_recursion(int);

/**
 * _sqrt_recursion - Calculates the square root of a number recursively.
 * @n: The number to calculate the square root of.
 *
 * Return: Square root of n, -1 if n < 0.
 *
 * Description: Returns 0 if n is 0, or calls check_square to
 * find the square root.
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (check_square(n, i));
}

/**
 * check_square - Checks if a number is a perfect square recursively.
 * @n: The number to check.
 * @i: The current value to test as a square root candidate.
 *
 * Return: Square root of n if n is a perfect square, -1 otherwise.
 *
 * Description: Recursively checks if i^2 equals n. Returns -1 if i > n.
 */

int check_square(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if (i > n)
		return (-1);
	return (check_square(n, i + 1));
}
