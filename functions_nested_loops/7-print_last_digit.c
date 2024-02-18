#include "main.h"

/**
 * print_last_digit - Entry point of the function
 *
 * @n: The character to be checked
 *
 * Description: Calculate the last digit
 *
 * Return: @num which is the Last digit
 */

int print_last_digit(int n)
{
	int num;

	num = n % 10;
	if (num < 0)
		num *= -1;
	_putchar(num + '0');
	return (num);
}
