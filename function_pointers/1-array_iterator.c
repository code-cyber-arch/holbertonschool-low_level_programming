#include "function_pointers.h"

/**
 * array_iterator - Iterates over an array,
 * applying a function to each element.
 * @array: Array to iterate over.
 * @size: Size of the array.
 * @action: Pointer to the function to apply to each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
