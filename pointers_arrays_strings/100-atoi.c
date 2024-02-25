#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to convert.
 *
 * This function converts the string @s to an integer
 *
 * Return: the converted integer value. Overflow behavior is undefined.
 */

int _atoi(char *s)
{
	int i;
	int result = 0;
	int sign = 1;
	int sign_num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > INT_MAX / 10 ||
					(result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
			{
				return (-1);
			}
			result = result * 10 + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
			{
				break;
			}
		}
		if (s[i] == '-')
			sign_num += 1;
	}
	if (sign_num % 2 != 0)
		sign = -1;
	result = result * sign;
	if (result < INT_MIN / 10 ||
			(result == INT_MIN / 10 && (s[i] - '0') < INT_MIN % 10))
	{
		return (-1);
	}
	return (result);
}
