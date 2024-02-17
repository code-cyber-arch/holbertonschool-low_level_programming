#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
