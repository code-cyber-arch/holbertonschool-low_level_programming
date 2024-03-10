#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max.
 * @min: first value in the array.
 * @max: last value in the array.
 * Return: pointer to the new array, or NULL if fails.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int range;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;
	array = malloc(sizeof(int) * range);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
		array[i] = min++;
	array[i] = '\0';
	return (array);
}
