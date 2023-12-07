#include "lists.h"

/**
* print_dlistint - Prints all the elements of a dlistint_t list.
* @h: The head pointer.
*
* Return: The number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		n_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n_nodes);
}
