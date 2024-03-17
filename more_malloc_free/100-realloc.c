#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates memory block.
 * @ptr: Old memory pointer.
 * @old_size: Size of old memory block.
 * @new_size: Size of new memory block.
 * Return: New memory pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
