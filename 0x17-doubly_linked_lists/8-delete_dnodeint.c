#include "lists.h"
/**
* delete_dnodeint_at_index - a function that deletes the node at
* index index of a dlistint_t linked list
*
* @head: a double pointer to the head of the list
* @index: the index of the node should be deleted
*
* Return: returns 1 if it succeeded, -1 if it failed
*
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iter = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	for (i = 0; i != index; ++i)
	{
		if (iter == NULL)
			return (-1);
		iter = iter->next;
	}
	if (iter == *head)
	{
		*head = iter->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		iter->prev->next = iter->next;
		if (iter->next != NULL)
			iter->next->prev = iter->prev;
	}
	free(iter);
	return (1);
}
