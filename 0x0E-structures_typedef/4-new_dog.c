#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* new_dog - Creates a new dog and stores a copy of name and owner.
*
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
*
* Return: A pointer to the newly created dog_t struct or NULL on failure.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (0);
	}
	name_copy = strdup(name);
	owner_copy = strdup(owner);
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(new_dog);
		return (0);
	}
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}
