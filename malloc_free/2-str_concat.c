#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 *
 * Description: Allocates memory to concatenate s1 and s2,
 * returning a new string.
 */

char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	int i = 0;
	int j = 0;
	int k, l;

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
	conc_str = (char *)malloc(sizeof(char) * (i + j + 1));
	if (conc_str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		conc_str[k] = s1[k];
	for (l = 0; l < j; k++, l++)
		conc_str[k] = s2[l];
	conc_str[k] = '\0';
	return (conc_str);
}
