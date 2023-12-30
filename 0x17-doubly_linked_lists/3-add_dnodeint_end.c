#include "lists.h"
/**
* add_dnodeint_end -  a function that adds a new node at the
* end of a dlistint_t list
*
* @head: a duble pointer to the head of the list
* @n: the data will be stored in the new node
*
* Return: returns the address of the new element, or NULL if it failed
*
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if ((*head)->next == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = new;
	new->prev = *head;
	return (new);
}
