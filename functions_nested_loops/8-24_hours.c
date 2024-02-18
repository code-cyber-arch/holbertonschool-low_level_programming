#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 *
 * Description: This function prints every minute of a day in the format
 *              "HH:MM" from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
}
