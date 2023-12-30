#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node
 * at the end of a dlistint_t list
 *
 * @head: a double pointer to the head of the list
 * @n: the data to be added to the new node
 *
 * Return: returns the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
	ptr = ptr->next;
	}
	new->prev = ptr;
	ptr->next = new;
	return (new);
}
