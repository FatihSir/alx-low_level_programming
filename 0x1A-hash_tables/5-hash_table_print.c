#include "hash_tables.h"
/**
* hash_table_print -  a function that prints a hash table.
*
* @ht: the hash table
*
* Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_item;
	unsigned long int i = 0;
	char *sep = "";

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		current_item = ht->array[i];
		while (current_item != NULL)
		{
			printf("%s'%s': '%s'", sep, current_item->key, current_item->value);
			sep = ", ";
			current_item = current_item->next;
		}
		++i;
	}
	printf("}\n");
}
