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
	long int sum = 2;

	for (i = 3; i <= n; i++)
	{
		next = a + b;
		if (next % 2 == 0)
			sum += next;
		else if (next > 4000000)
			break;
		a = b;
		b = next;
	}
	printf("%ld", sum);
	printf("\n");

	return (0);
}
