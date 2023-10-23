#include "lists.h"
/**
* sum_listint - a function that returns the sum of all the
* data (n) of a listint_t linked list.
*
* @head: a pointer to the head node
*
* Return: returns the sum of all the data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *iter = head;

	if (head == NULL)
		return (0);
	while (iter != NULL)
	{
		sum = sum + iter->n;
		iter = iter->next;
	}
	return (sum);
}
