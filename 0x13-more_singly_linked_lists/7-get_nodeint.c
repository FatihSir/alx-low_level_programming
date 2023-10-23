#include "lists.h"
/**
* get_nodeint_at_index - a function that returns the nth
* node of a listint_t linked list.
*
* @head: pointer to the head of the list
* @index: is the index of the node, starting at 0
*
* Return: returns the nth node
*
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *iter = head;

	if (index == 0)
		return (head);
	while (i < index)
	{
		if (iter == NULL)
			return (NULL);
		iter = iter->next;
		i++;
	}
	return (iter);
}
