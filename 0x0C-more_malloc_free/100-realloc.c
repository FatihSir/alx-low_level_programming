#include "main.h"
/**
* _realloc_1 - a function that allocates a memory block using malloc and free
*
* @new_size: is the new size, in bytes of the new memory block
*
* Return: pointer to the new allocated memory with a copy of the old
* allocated memory
*/
void *_realloc_1(unsigned int new_size)
{
	void *new_ptr;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (0);
	return (new_ptr);
}
/**
* _realloc_2 - a function that allocates a memory block using malloc and free
*
* @ptr: is a pointer to the memory previously allocated with a call to malloc
*
* Return: pointer to the new allocated memory with a copy of the old
* allocated memory
*/
void *_realloc_2(void *ptr)
{
	free(ptr);
}
/**
* _realloc_3 - a function that allocates a memory block using malloc and free
*
* @ptr: is a pointer to the memory previously allocated with a call to malloc
* @old_size: is the size, in bytes, of the allocated space for ptr
* @new_size: is the new size, in bytes of the new memory block
*
* Return: pointer to the new allocated memory with a copy of the old
* allocated memory
*/
void *_realloc_3(void *ptr, unsigned int new_size, unsigned int old_size)
{
	char *new_ptr;
	unsigned int min_size = (old_size < new_size) ? old_size : new_size;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (0);
	memcpy(new_ptr, ptr, min_size);
	free(ptr);
	return (new_ptr);
}
/**
* _realloc - a function that reallocates a memory block using malloc and free
*
* @ptr: is a pointer to the memory previously allocated with a call to malloc
* @old_size: is the size, in bytes, of the allocated space for ptr
* @new_size: is the new size, in bytes of the new memory block
*
* Return: pointer to the new allocated memory with a copy of the old
* allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = _realloc_1(new_size);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		new_ptr = _realloc_2(ptr);
		return (0);
	}
	if (new_size > old_size)
	{
		new_ptr = _realloc_3(ptr, new_size, old_size);
		return (new_ptr);
	}
	return (ptr);
}
