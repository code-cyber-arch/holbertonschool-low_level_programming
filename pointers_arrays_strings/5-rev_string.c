#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 *
 * This function reverses the string @s in place, meaning it swaps
 * the characters from the beginning and the end of the string until
 * they meet in the middle. The null terminator '\0' is not swapped.
 */

void rev_string(char *s)
{
	int l = 0;
	int i;
	int j;
	char temp;

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
