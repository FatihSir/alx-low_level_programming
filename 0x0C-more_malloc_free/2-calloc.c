#include "main.h"
/**
* _calloc - a function that allocates memory for an array, using malloc
*
* @nmemb: the number of the elements should be in the array
* @size:  the size of each element
*
* Return: returns a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	for (i = 0; i < (nmemb * size); ++i)
	{
		ptr[i] = 0;
	}
	ptr[i + 1] = '\0';
	return (ptr);
}
