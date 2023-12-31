#include "lists.h"
/**
* sum_dlistint - a function that returns the sum of all the
* data (n) of a dlistint_t linked list.
*
* @head: the head of the list
*
* Return: returns the sum of the elements if the list is empty, return 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t  *iter;

	if (head == NULL)
		return (sum);
	iter = head;
	while (iter != NULL)
	{
		sum = sum + iter->n;
		iter = iter->next;
	}
	return (sum);
}
