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

	ptr = (char *) malloc(size * sizeof(unsigned int));
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < size; ++i)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}