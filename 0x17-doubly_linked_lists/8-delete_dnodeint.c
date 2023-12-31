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
	if (index == 0)
	{
		*head = iter->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(iter);
		return (1);
	}
	for (i = 0; i != index && iter != NULL; ++i)
	{
		iter = iter->next;
	}
	if (i <= index && iter != NULL)
	{
		iter->prev->next = iter->next;
		iter->next->prev = iter->prev;
		free(iter);
		return (1);
	}
	if (i <= index && iter->next == NULL)
	{
		iter->prev->next = NULL;
		free(iter);
		return (1);
	}
	return (-1);
}
