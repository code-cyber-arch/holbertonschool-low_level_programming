#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the hexadecimal representation of the
 * main function.
 * @arg_count: Number of arguments passed to the program.
 * @arg_values: Array of pointers to the arguments.
 * Return: Always 0.
 */

int main(int arg_count, char *arg_values[])
{
	char *main_ptr = (char *) main;
	int index, num_bytes;

	if (arg_count != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(arg_values[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (index = 0; index < num_bytes; index++)
	{
		printf("%02x", main_ptr[index] & 0xFF);
		if (index != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
