#include "main.h"

/**
 * _abs - Entry point of the function
 *
 * @n: The character to be checked
 *
 * Description: Prints the sign of a number
 *
 * Return: 1 for posetive, 0 for zero and -1 for negative
 */

int _abs(int n)
{
	int num;

	if (n < 0)
	{
		num = n * -1;
		return (num);
	}
	else
	{
		return (n);
	}

}
