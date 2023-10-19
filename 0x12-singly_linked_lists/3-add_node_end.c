#include "lists.h"
/**
* *add_node_end - a function that adds a new node at the end of a list_t list
*
* @head: pointer to head
* @str: string
*
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *end;
	char *cpy;

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);

	cpy = strdup(str);
	if (cpy == NULL)
	{
		free(current);
		return (NULL);
	}
	current->str = cpy;
	current->len = strlen(cpy);
	current->next = NULL;
	if (*head == NULL)
		*head = current;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = current;
	}
	return (current);
}
