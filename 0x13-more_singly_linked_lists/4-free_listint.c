#include "lists.h"
/**
* free_listint - a function that frees a listint_t list.
* @head: pointer to the head of the list
* Return: returns nothing
*/
void free_listint(listint_t *head)
{
	listint_t *iter = head;
	listint_t *tmp;

	while (iter->next != NULL)
	{
		tmp = iter;
		free(iter);
		iter = tmp->next;
	}
}
