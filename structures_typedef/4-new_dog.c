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
	int name_length = 0, owner_length = 0, i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (name[name_length] != '\0')
	{
		name_length++;
	}
	dog->name = malloc(name_length + 1);
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	while (owner[owner_length] != '\0')
	{
		owner_length++;
	}
	dog->owner = malloc(owner_length + 1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		return (NULL);
	}
	for (i = 0; i < owner_length; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	return (dog);
}
