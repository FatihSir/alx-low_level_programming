#include "lists.h"
/**
* insert_dnodeint_at_index - a function that inserts
* a new node at a given position
*
* @h: double pointer to the head of the list
* @idx: the postion where the new node will be inserted
* @n: the data of the new node
*
* Return: returns the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *iter, *new;
	unsigned int i;

	if (h == NULL && (idx != 0 && *h == NULL))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, (const int) n));
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	iter = *h;
	new->n = n;
	for (i = 0; i < idx - 1 && iter != NULL; ++i)
	{
		iter = iter->next;
	}
	if (iter == NULL || i < idx - 1)
	{
		free(new);
		return (NULL);
	}
	if (iter->next == NULL)
	{
		return (adddnodeint_end(h, n));
	}
	iter->next->prev = new;
	new->next = iter->next;
	new->prev = iter;
	iter->next = new;
	return (new);
}
