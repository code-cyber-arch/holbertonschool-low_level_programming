#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	char pass[84];
	int i = 0;
	int sum = 0;
	int dif_h1;
	int dif_h2;

	srand(time(0));
	while (sum < 2772)
	{
		pass[i] = 33 + rand() % 94;
		sum += pass[i++];
	}
	pass[i] = '\0';
	if (sum != 2772)
	{
		dif_h1 = (sum - 2772) / 2;
		dif_h2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			dif_h1++;

		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + dif_h1))
			{
				pass[i] -= dif_h1;
				break;
			}
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + dif_h2))
			{
				pass[i] -= dif_h2;
				break;
			}
		}
	}
	printf("%s", pass);
	return (0);
}
