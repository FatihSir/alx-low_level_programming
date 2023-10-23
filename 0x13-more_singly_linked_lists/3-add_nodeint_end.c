#include "lists.h"
/**
* add_nodeint_end - a function that adds a new node
* at the end of a listint_t list.
*
* @head: a pointer to the head pointer.
* @n: the element of the node
*
* Return: returns the address of the new element, or NULL if it failed
*
*
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node; /*definning a pointer to the new node*/
	listint_t *iter; /*definning a pointer to iterate over the list*/

	iter = *head;

	/*allocatting a place in the memory for the new node*/
	new_node = (listint_t *)malloc(sizeof(listint_t));
	/*checking if the memory allocation failed*/
	if (new_node == NULL)
		return (NULL);
	/*Letting the new node pointing to NULL as it became the last node*/
	new_node->next = NULL;
	/*Asginning the value n to the node*/
	new_node->n = n;
	/*Iterating over the list to fint the last node which points to NULL*/
	while (iter != NULL)
		iter = iter->next;
	/*Letting the last node pointing to the new_node*/
	iter->next = new_node;
	/*Rturning the address of the new node*/
	return (new_node);
}
