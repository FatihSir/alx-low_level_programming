#include "lists.h"
/**
* free_listint2 -  a function that frees a listint_t list.
*
* @head: a pointer to the head pointer
*
* Return: returns nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
