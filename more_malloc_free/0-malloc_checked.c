#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes to allocate.
 *
 * Return: Pointer to allocated memory, exits with status 98 on failure.
 *
 * Description: Allocates memory using malloc with error checking.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
