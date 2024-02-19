#include <stdio.h>
#include "main.h"

/**
 * times_table - Print multiplication table
 *
 * Description: This function prints multiplication
 *
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
				printf("%d,", i * j);
			else if (j == 9)
				printf("%3d", i * j);
			else
				printf("%3d,", i * j);
		}
		printf("\n");
	}
}
