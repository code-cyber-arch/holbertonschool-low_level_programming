#include "main.h"

/**
 * _strncat - Concatenates n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to concatenate
 *
 * Return: A pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int l_d;
	int l_s;

	l_d = 0;
	while (dest[l_d] != '\0')
	{
		l_d++;
	}
	l_s = 0;
	while (src[l_s] != '\0')
	{
		l_s++;
	}
	for (i = l_d, j = 0; i < l_d + l_s && j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
