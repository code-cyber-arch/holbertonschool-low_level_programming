#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory.
 *         If nmemb or size is 0, or if malloc fails, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc((nmemb * size) + size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		array[i] = 0;
	array[i] = '\0';
	return (array);
}
