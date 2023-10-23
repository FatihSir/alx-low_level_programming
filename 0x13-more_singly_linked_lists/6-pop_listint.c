#include "lists.h"
/**
* pop_listint - a function that deletes the
* head node of a listint_t linked list
*
* @head: pointer to the head pointer
*
* Return: returns the head node’s data (n).
*
*/
int pop_listint(listint_t **head)
{
	int restore;
	listint_t *res;

	if (head == NULL || *head == NULL)
		return (0);
	res = (*head)->next;
	restore = (*head)->n;
	free(*head);
	*head = res;

	return (restore);
}
