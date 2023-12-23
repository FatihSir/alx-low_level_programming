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
	hash_node_t *current_item, *item;

	if (strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, 1024);
	current_item = ht->array[index];
	if (current_item == NULL)
	{
		item = create_item((const unsigned char *)key, value);
		ht->array[index] = item;
		return (1);
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			strcpy(ht->array[index] -> value, value);
			return (1);
		}
		else
		{
			add_at_beg(&ht->array[index], item);
			return (1);
		}
	}
	return (0);
}
