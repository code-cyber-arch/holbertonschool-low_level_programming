#include <stdio.h>

/**
 * main - Prints the program name if an argument is provided.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
