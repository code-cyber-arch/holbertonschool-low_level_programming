#include "main.h"

/**
 * _strncpy - Copies up to n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy
 *
 * Return: A pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
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
	if (n < l_s)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < l_s; i++)
		{
			dest[i] = src[i];
		}
		for (i = l_s; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
