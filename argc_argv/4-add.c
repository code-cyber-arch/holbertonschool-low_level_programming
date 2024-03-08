#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Sums positive integers passed as command-line arguments.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (isdigit(argv[i][j]))
				j++;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
