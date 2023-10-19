#include "lists.h"
/**
* print_list - a function that prints all the elements of a list_t list
*
* @h: pointer to the list to be printed
*
* Return: returns the number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *head;
	size_t i = 0;
	int j = 0;
	char *str_;

	head = h;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		head = head->next;
		i++;
	}
	return (i);
}
