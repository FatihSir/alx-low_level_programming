#include "lists.h"
/**
* listint_len -  a function that returns the number of
* elements in a linked listint_t list.
*
* @h: pointer to the head node
*
* Return: returns the number of the elements within a list
*
*
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0; /*define a varibale to count the elements within a node*/
	const listint_t *iter = h; /*pointer to the head note*/

	/*checking if the head is valide*/
	if (iter == NULL)
		return (count);
	while (iter != NULL)
	{
		count++;
		iter = iter->next;
	}
	return (count);
}
