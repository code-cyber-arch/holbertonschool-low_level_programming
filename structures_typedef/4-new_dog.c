#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog with the given name, age, and owner.
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 * Return: Pointer to the new dog struct, NULL on failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
