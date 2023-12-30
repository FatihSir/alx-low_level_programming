#include "lists.h"
/**
* free_dlistint - a function that frees a dlistint_t list.
*
* @head: the head of the list
*
* Return: returns nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *ptr = head;

	if (head == NULL)
		return;
	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
	free(ptr);
	free(head);
}

