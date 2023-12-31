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
	unsigned int i = 0;

	if (idx != 0 && *h == NULL)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0 && *h == NULL)
	{
		*h = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	iter = *h;
	for (i = 0; i < idx; ++i)
	{
		if (iter == NULL)
		{
			free(new);
			return (NULL);
		}
		iter = iter->next;
	}
	iter->next->prev = new;
	new->next = iter->next;
	new->prev = iter;
	iter->next = new;
	return (new);
}
