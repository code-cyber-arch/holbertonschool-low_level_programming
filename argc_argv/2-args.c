#include <stdio.h>

/**
 * main - Prints each argument passed to the program, one per line.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
