#include "lists.h"
/**
* print_listint - a function that prints all the elements of a listint_t list.
*
* @h: pointer to the head of the list
*
* Return: returns the number of nodes and prints its elements
*
*
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0; /*define varibale to hold the count of the nodes*/
	const listint_t *iter = h; /*define a pointer to iterate over the notes*/

	/*Checking if the iterater points to null which means there is no nodes*/
	if (iter == NULL)
	{
		return (count);
	}
	/*Iterating over notes till reach to the last node which points to NULL*/
	while (iter != NULL)
	{
		/*Everytime that we do not find NULL (not the last node) we add 1 to count*/
		count++;
		/*Printing the element of that node*/
		printf("%d\n", iter->n);
		/*Pointing to the next node after we done with the current one*/
		iter = iter->next;
	}
	/*Returning the number of nodes that we have been calculating so far*/
	return (count);
}
