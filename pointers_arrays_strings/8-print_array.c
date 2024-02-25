#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 *
 * This function prints the elements of the array @a, separated by commas and
 * followed by a new line character '\n'. If @n is 0, no elements are printed.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			continue;
		}
		printf("%d, ", a[i]);
	}
	printf("\n");
}
