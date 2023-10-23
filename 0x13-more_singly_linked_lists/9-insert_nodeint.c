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
