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
	int n = 50;
	long int a = 1;
	long int b = 2;
	long int next;

	printf("%ld, %ld", a, b);

	for (i = 3; i <= n; i++)
	{
		next = a + b;
		printf(", %ld", next);
		a = b;
		b = next;
	}
	printf("\n");

	return (0);
}
