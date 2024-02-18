#include "holberton.h"

/**
 * print_alphabet - Entry point of the function
 *
 * Description: Prints _putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_puchar('\n');
}
