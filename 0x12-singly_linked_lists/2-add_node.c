#include "lists.h"
/**
* add_node - a function that adds a new node at
* the beginning of a list_t list.
*
* @head: pointer to the head pointer
* @str: string to be added to the new node
*
* Return: returns the address of the new element, or NULL if it failed
*
*
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
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
	current->next = *head;
	*head = current;
	return (current);
}
