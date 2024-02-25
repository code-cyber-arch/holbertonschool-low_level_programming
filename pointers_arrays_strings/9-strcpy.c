#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * This function copies the string from @src to @dest, including the
 * terminating null byte '\0'. The destination buffer @dest must have
 * enough space to accommodate the entire source string.
 *
 * Return: Pointer to the destination buffer @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int l;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
