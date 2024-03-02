#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to copy
 *
 * Description: Copies n bytes from memory area src to memory area dest.
 * Return: A pointer to the destination memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
