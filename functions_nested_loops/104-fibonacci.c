#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int n = 98;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int next;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= n; i++)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}
	printf("\n");

	return (0);
}
