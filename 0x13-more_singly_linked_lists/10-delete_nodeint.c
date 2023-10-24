#include "lists.h"
/**
* delete_nodeint_at_index -  a function that deletes the node at
* index index of a listint_t linked list.
*
* @head: pointer to the head of then list
* @index: is the index of the node that should be deleted
*
* Return: returns 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *iter, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	iter = *head;
	while (i < index - 1)
	{
		if (iter == NULL && (i - index - 1) != 0)
		{
			return (-1);
		}
		iter = iter->next;
		i++;
	}
	if (iter == NULL || iter->next == NULL)
		return (-1);
	tmp = iter->next;
	iter->next = iter->next->next;
	free(tmp);
	return (1);
}
