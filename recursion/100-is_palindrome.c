#include "main.h"
#include <stdio.h>

int _strlen(char *s);
int _compare(char *s, int i, int j);
int is_palindrome(char *s);

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to calculate the length of.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * _compare - Recursively compares characters at
 * positions i and j in a string.
 * @s: The string to compare characters in.
 * @i: The index of the first character to compare.
 * @j: The index of the second character to compare.
 * Return: 1 if characters at positions i and j are equal, 0 otherwise.
 */

int _compare(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + _compare(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compare(s, 0, _strlen(s) - 1));
}
