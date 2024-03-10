#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates s1 with n bytes of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes from s2 to add to s1.
 *
 * Return: Pointer to the concatenated space, NULL on failure.
 * Treats NULL inputs as empty strings.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, l;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (j > n)
		s3 = malloc(sizeof(char) * (i + n + 1));
	else
		s3 = malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
		return (NULL);
	if (j > n)
	{
		for (k = 0; k < i; k++)
			s3[k] = s1[k];
		for (l = 0; l < n; l++, k++)
			s3[k] = s2[l];
		s3[k] = '\0';
	}
	else
	{
		for (k = 0; k < i; k++)
			s3[k] = s1[k];
		for (l = 0; l < j; l++, k++)
			s3[k] = s2[l];
		s3[k] = '\0';
	}
	return (s3);
}
