#include "hash_tables.h"
/**
* hash_table_create -  a function that creates a hash table.
*
* @size: the size of the array
*
* Return: returns a pointer to created the hash table
*
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i = 0;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **)malloc(table->size * sizeof(table->array));

	for (i = 0; i < size; ++i)
	{
		table->array[i] = NULL;
	}
	return (table);
}
