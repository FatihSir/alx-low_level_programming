#include "hash_tables.h"
/**
* create_item - a function to create a new item
*
* @key: the key
* @value: the value associated to the key
*
* Return: returns pointer to the item on success and NULL when it failed
*
*/
hash_node_t *create_item(const unsigned char *key, const char *value)
{
	hash_node_t *item = NULL;

	item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);
	item->key = strdup((const char *) key);
	if (item->key == NULL)
	{
		free(item);
		return (NULL);
	}
	item->value = strdup(value);
	item->next = NULL;
	return (item);
}
/**
* add_at_beg - a function to add a new node at the beginning of linked list
*
* @head: double pointer to the head of the list
* @item: hash node to be added to the beginning of the list
*
* Return: returns nothing
*
*/
void add_at_beg(hash_node_t **head, hash_node_t *item)
{
	item->next = *head;
	*head = item;
}
