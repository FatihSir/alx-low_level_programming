#include "lists.h"
/**
* print_listint_safe -  a function that prints a listint_t linked list.
*
* @head: pointer to the head pointer
*
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *iter = head;
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)iter, iter->n);
		nodes++;
		iter = iter->next;
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)iter, iter->n);
			nodes++;
			printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
			nodes++;
			return (nodes);
		}
	}
	return (nodes);
}
