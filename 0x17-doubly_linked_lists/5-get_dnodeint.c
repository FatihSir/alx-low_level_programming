#include "lists.h"
/**
* get_dnodeint_at_index - a function that returns
* the nth node of a dlistint_t linked list.
*
* @head: the head of the list
* @index: the index of invoked node
*
* Return: returns a pointer to the node in that index
* or returns NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *iter;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	iter = head;
	for (count = 0; count < index; count++)
	{
		if (iter == NULL)
			return (NULL);
		iter = iter->next;
	}
	return (iter);
}
