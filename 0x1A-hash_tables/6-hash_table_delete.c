#include "hash_tables.h"
/**
* hash_table_delete -  a function that deletes a hash table.
*
* @ht: the hash table to be deleted
*
* Return: returns nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current, *tmp;

	if (ht == NULL)
		return;
	if (ht->array == NULL) 
	{
		free(ht);
		return;
	}
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			tmp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = tmp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
