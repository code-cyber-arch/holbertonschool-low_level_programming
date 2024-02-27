#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the elements of an array of integers
 * @a: The array to reverse
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
