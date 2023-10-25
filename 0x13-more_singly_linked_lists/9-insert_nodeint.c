#include "lists.h"
/**
* insert_nodeint_at_index -  a function that inserts
* a new node at a given position.
*
* @head: pointer to the head of the list
* @idx: is the index of the list where the new node should be added
* @n: the element of the node
*
* Return: the address of the new node, or NULL if it failed
*
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *iter;
	unsigned int i = 0;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	iter = *head;
	while (i < idx - 1)
	{
		if (iter == NULL && (i - idx - 1) != 0)
		{
			free(new_node);
			return (NULL);
		}
		if (iter == NULL && (i - idx - 1) == 0)
		{
			iter->next = new_node;
			new_node->next = NULL;
			return (new_node);
		}
		iter = iter->next;
		i++;
	}
	new_node->next = iter->next;
	iter->next = new_node;
	return (new_node);
}
