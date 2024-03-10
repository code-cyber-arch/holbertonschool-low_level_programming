#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * get_coins - Calculates the minimum number of coins needed for change.
 * @num: Amount to make change for.
 * @sum: Current sum of coins.
 *
 * Return: Minimum number of coins needed for change.
 *         If num is negative, prints "Error" and exits with status 1.
 */

int get_coins(int num, int sum)
{
	if (num < 0)
	{
		printf("Error\n");
		exit(1);
	}
	if (num == 0)
	{
		return (sum);
	}
	if (num < 2)
	{
		return (get_coins(0, sum + 1));
	}
	else if (num < 5)
	{
		return (get_coins(num % 2, sum + (num / 2)));
	}
	else if (num < 10)
	{
		return (get_coins(num % 5, sum + (num / 5)));
	}
	else if (num < 25)
	{
		return (get_coins(num % 10, sum + (num / 10)));
	}
	else
	{
		return (get_coins(num % 25, sum + (num / 25)));
	}
}

/**
 * main - Calculates the minimum number of coins needed for change.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("%d\n", 0);
		return (1);
	}
	sum = get_coins(num, sum);
	printf("%d\n", sum);
	return (0);
}
