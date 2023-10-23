#include "lists.h"
/**
* add_nodeint - a function that adds a new node at
* the beginning of a listint_t list.
*
* @head: a pointer to pointer that points to the head node
* @n: the element of the node
*
* Return: returns the address of the new element, or NULL if it failed.
*
*
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;/*define the new_node pointer*/

	/*allocate a place in the memory for our new node*/
	new_node  = (listint_t *)malloc(sizeof(listint_t));
	/*checking if our new node has a place in the memory*/
	if (new_node == NULL)
		return (NULL);
	/*Asginnning the element to the new node*/
	new_node->n = n;
	/*Connecting our new_node with the first node*/
	/*the new_node became the first node*/
	new_node->next = *head;
	/*Letting the head pointing to the new_node*/
	/*as it became the first node in the list*/
	*head = new_node;
	/*Returning a pointer to the head pointer*/
	return (*head);
}
