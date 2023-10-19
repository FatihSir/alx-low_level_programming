#include "lists.h"
/**
* list_len - a function that returns the number of elements
* in a linked list_t list
*
* @h: a pointer to the head of the list
*
* Return: returns the number of the nodes
*/
size_t list_len(const list_t *h)
{
	const list_t *iter = h;
	size_t count = 0;
	
	if (iter == NULL)
		return (0);
	while (iter != NULL)
	{
		iter = iter->next;
		++count;
	}
	return (count);
}
