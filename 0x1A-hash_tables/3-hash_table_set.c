#include "hash_tables.h"
/**
* hash_table_set - a function that adds an element to the hash table.
*
* @ht: a pointer to a hash table
* @key: the key
* @value: the value
*
* Return: returns 1 if it succeeded, 0 otherwise
* In case of collision, new node will be added at the beginning of the list
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *current_item, *item = NULL;

	if (*key == '\0' || ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	item = create_item((const unsigned char *)key, value);
	while (current_item)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(current_item->value);
			current_item->value = strdup(value);
			if (current_item->value == NULL)
				return (0);
			return (1);
		}
		current_item = current_item->next;
	}
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}
