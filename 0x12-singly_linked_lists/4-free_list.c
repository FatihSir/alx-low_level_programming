#include "lists.h"
/**
* free_list - a function that frees a list_t list
*
* @head: a pointer to head
*
* Return: returns nothing
*/
void free_list(list_t *head)
{
	list_t *iter;

	iter = head;
	while (iter != NULL)
	{
		iter = head->next;
		free(head->str);
		free(head);
		head = iter;
	}
}
