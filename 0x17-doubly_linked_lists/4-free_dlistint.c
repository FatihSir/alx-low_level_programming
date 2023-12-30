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
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
