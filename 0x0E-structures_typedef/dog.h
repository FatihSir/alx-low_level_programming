#ifndef DOG_FILE
#define DOG_FILE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
* struct dog - new struct
*
* @name: name
* @age: age
* @owner: owner
*
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
