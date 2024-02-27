#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337 (leet) speak
 * @s: The string to encode
 *
 * Return: A pointer to the encoded string
 */

char *leet(char *s)
{
	int letter[5] = {'a', 'e', 'o', 't', 'l'};
	int nums[5] = {4, 3, 0, 7, 1};
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letter[j] || s[i] == letter[j] - 32)
				s[i] = nums[j] + '0';
		}
		i++;
	}
	return (s);
}
