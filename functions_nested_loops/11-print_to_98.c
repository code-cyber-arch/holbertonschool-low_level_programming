#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints numbers to 98 from the given number
 * @n: The starting number
 *
 * Description: This function prints numbers from @n to 98, inclusive.
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		printf("%d", n);

		for (i = n - 1; i >= 98; i--)
		{
			printf(", %d", i);
		}
	}
	else if (n < 98)
	{
		printf("%d", n);

		for (i = n + 1; i <= 98; i++)
		{
			printf(", %d", i);
		}
	}
	else
		printf("%d", n);
	printf("\n");
}
