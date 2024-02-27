#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string
 */

char *_strcat(char *dest, char *src)
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
	for (i = l_d, j = 0; i < l_s + l_d && j < l_s; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
