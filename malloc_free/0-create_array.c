#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates and initializes an array of chars.
 * @size: Size of the array.
 * @c: Char to fill the array with.
 *
 * Return: Pointer to the array, or NULL on failure or if size is 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
