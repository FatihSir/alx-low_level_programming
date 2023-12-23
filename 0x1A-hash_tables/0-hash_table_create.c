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

	table = (hash_table_t *)malloc(size * sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	return (table);
}
