#include "main.h"
#include <stdio.h>

int check_prime(int, int);
int is_prime_number(int);

/**
 * is_prime_number - Determines if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 *
 * Description: Returns 0 if n is less than or equal to 1,
 * otherwise calls check_prime.
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	return (check_prime(n, i));
}

/**
 * check_prime - Checks if a number is prime recursively.
 * @n: The number to check for primality.
 * @i: The current divisor being checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 *
 * Description: Recursively checks if n is divisible by
 * any number from 2 to n/2.
 * Returns 0 if n is divisible by any of these numbers,
 * otherwise returns 1.
 */

int check_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (i == n / 2)
		return (1);
	return (check_prime(n, i + 1));
}
