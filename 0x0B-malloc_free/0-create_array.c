#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array -  a function that creates an array of chars, and
* initializes it with a specific char.
*
* @size: the size of the array
* @c: specific char to be entered
*
*
* Return: Returns a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	ptr = malloc(size);
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	while (size --)
	{
		ptr[i] = c;
	}
	return (ptr);
}
