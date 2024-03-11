#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints information about a struct dog.
 * @d: Pointer to the struct dog to print.
 *
 * Description: Prints the name, age, and owner of a dog struct.
 *              If a field is NULL or age is 0.0, prints "nil" instead.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s\n", "nil");
		else
			printf("Name: %s\n", d->name);
		if (d->age != 0.0)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: %s\n", "nil");
		if (d->owner == NULL)
			printf("Owner: %s\n", "nil");
		else
			printf("Owner: %s\n", d->owner);
	}
}
