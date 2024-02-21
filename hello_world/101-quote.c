#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the console
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	const char part1[] = "and that piece of art is useful\" - ";
	const char part2[] = "Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, part1, sizeof(part1) - 1);
	write(STDERR_FILENO, part2, sizeof(part2) - 1);
	return (1);
}
