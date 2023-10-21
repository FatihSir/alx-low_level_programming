#include "dog.h"
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

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == 0 || name == 0 || owner == 0)
	{
		return (0);
	}
	new_dog->name = strdup(name);
	if (new_dog->name == 0)
	{
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	new_dog->owner = strdup(owner);
	if (new_dog->owner == 0)
	{
		free(new_dog);
		free(new_dog->name);
		return (0);
	}
	return (new_dog);
}
