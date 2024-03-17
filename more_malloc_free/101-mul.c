#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * checkForZero - Checks if any of the input numbers is zero.
 * @args: Command line arguments.
 */

void checkForZero(char *args[])
{
	int i, isFirstNumberZero = 1, isSecondNumberZero = 1;

	for (i = 0; args[1][i]; i++)
		if (args[1][i] != '0')
		{
			isFirstNumberZero = 0;
			break;
		}
	for (i = 0; args[2][i]; i++)
		if (args[2][i] != '0')
		{
			isSecondNumberZero = 0;
			break;
		}
	if (isFirstNumberZero == 1 || isSecondNumberZero == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * initializeArray - Initializes a character array with zeros.
 * @array: The array to initialize.
 * @length: The length of the array.
 *
 * Return: The initialized character array.
 */

char *initializeArray(char *array, int length)
{
	int i;

	for (i = 0; i < length; i++)
		array[i] = '0';
	array[length] = '\0';
	return (array);
}

/**
 * validateAndLength - Validates if the argument is a positive number and
 * returns its length.
 * @args: Command line arguments.
 * @index: The index of the argument to validate.
 *
 * Return: The length of the argument.
 */

int validateAndLength(char *args[], int index)
{
	int length;

	for (length = 0; args[index][length]; length++)
		if (!isdigit(args[index][length]))
		{
			printf("Error\n");
			exit(98);
		}
	return (length);
}

/**
 * main - Entry point, multiplies two positive numbers.
 * @argc: The count of arguments.
 * @argv: The argument vector.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int length1, length2, outputLength, tempSum, carry, i, j, k;
	char *output;

	if (argc != 3)
		printf("Error\n"), exit(98);
	length1 = validateAndLength(argv, 1), length2 = validateAndLength(argv, 2);
	checkForZero(argv), outputLength = length1 + length2;
	output = malloc(outputLength + 1);
	if (output == NULL)
		printf("Error\n"), exit(98);
	output = initializeArray(output, outputLength);
	for (i = length1 - 1, j = length2 - 1, k = outputLength - 1, carry = 0;
			j >= 0; j--,
			k = outputLength - 1 - (length2 - 1 - j))
	{
		for (i = length1 - 1; i >= 0; i--, k--)
		{
			tempSum = (argv[1][i] - '0') * (argv[2][j] - '0') + (output[k] - '0')
				+ carry;
			output[k] = (tempSum % 10) + '0';
			carry = tempSum / 10;
		}
		if (carry > 0)
		{
			output[k] = (carry + '0');
			carry = 0;
		}
	}
	for (i = 0; i < outputLength - 1 && output[i] == '0'; i++)
		;
	printf("%s\n", &output[i]);
	free(output);
	return (0);
}
