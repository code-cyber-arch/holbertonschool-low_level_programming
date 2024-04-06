#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: Pointer to a string representing the binary number.
 *
 * Return: The converted unsigned integer, or 0 if an invalid character is
 * encountered.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, bit_position_value = 1;
	int len = 0;

	if (*b == '\0')
		return (0);
	while (b[len] != '\0')
		len++;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num += (b[len] - '0') * bit_position_value;
		bit_position_value *= 2;
	}
	return (num);
}
