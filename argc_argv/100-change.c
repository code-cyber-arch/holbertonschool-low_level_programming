#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Calculates the minimum number of
 * coins to make change for a given amount.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int sum = 0, num = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num <= 0)
		printf("%d\n", 0);
	while (num > 0)
	{
		if (num < 2)
		{
			sum += 1;
			num = 0;
		}
		else if (num < 5)
		{
			sum += (num / 2);
			num = num % 2;
		}
		else if (num < 10)
		{
			sum += (num / 5);
			num = num % 5;
		}
		else if (num < 25)
		{
			sum += (num / 10);
			num = num % 10;
		}
		else
		{
			sum += (num / 25);
			num = num % 25;
		}
	}
	printf("%d\n", sum);
	return (0);
}
