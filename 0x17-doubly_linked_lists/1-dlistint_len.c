#include "lists.h"

/**
* dlistint_len - Counts the number of elements in a linked dlistint_t list.
*
* @h: The head pointer.
*
* Return: The number of elements.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
