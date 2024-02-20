#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int front_num_1 = 0;
	unsigned long int back_num_1 = 1;
	unsigned long int front_num_2 = 0;
	unsigned long int back_num_2 = 2;
	unsigned long int num_holder_1;
	unsigned long int num_holder_2;
	unsigned long int num_holder_3;
	int n;

	printf("%lu, %lu, ", back_num_1, back_num_2);
	for (n = 3; n <= 98; n++)
	{
		if (back_num_1 + back_num_2 > LARGEST || front_num_2 > 0 || front_num_1 > 0)
		{
			num_holder_1 = (back_num_1 + back_num_2) / LARGEST;
			num_holder_2 = (back_num_1 + back_num_2) % LARGEST;
			num_holder_3 = front_num_1 + front_num_2 + num_holder_1;
			front_num_1 = front_num_2;
			front_num_2 = num_holder_3;
			back_num_1 = back_num_2;
			back_num_2 = num_holder_2;
			printf("%lu%010lu", front_num_2, back_num_2);
		}
		else
		{
			num_holder_2 = back_num_1 + back_num_2;
			back_num_1 = back_num_2;
			back_num_2 = num_holder_2;
			printf("%lu", back_num_2);
		}
		if (n != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}

