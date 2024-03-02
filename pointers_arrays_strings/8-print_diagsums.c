#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of
 * a square matrix.
 *
 * @a: Pointer to the 2D array representing the square matrix.
 * @size: The size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum1 = 0;
	unsigned int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(size - 1) + (i * (size - 1))];
	}
	printf("%u, %u\n", sum1, sum2);
}
