#include "hash_tables.h"
/**
* hash_table_get - a function that retrieves a value associated with a key.
*
* @ht: a pointer to the hash table
* @key: the key
*
* Return: returns the value associated with the element,
* or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *value;
	hash_node_t *current_item;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	if (current_item == NULL)
		return (NULL);
	if (strcmp(current_item->key, key) == 0)
	{
		value = strdup(current_item->value);
		if (value == NULL || *value == '\0')
			return (NULL);
		return (value);
	}
	while (current_item)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			value = strdup(current_item->value);
			if (value == NULL || *value == '\0')
				return (NULL);
			return (value);
		}
		current_item = current_item->next;
	}
	return (NULL);
}
