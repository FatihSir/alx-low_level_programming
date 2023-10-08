#include "main.h"
/**
* malloc_checked - a function that allocates memory using malloc
*
* @b: the size to be allocated
*
* Return: returns a pointer to the allocated memory.
*
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int));
	if (ptr == NULL)
	{
		exit (3);
	}
	return (ptr);
}
