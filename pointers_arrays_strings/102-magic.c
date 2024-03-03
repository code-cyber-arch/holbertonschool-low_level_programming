#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Demonstrates array and pointer manipulation,
 * including accessing an out-of-bounds memory location.
 * Prints a specific array element.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
