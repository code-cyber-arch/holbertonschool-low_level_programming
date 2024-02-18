#include "main.h"

/**
 * _islower - Entry point of the function
 *
 * @c: The character to be checked
 *
 * Description: Evaluates whether c is lower case letters
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
