#include "hash_tables.h"

/**
	* hash_table_print - prints out key value pairs from a hash table
	* @ht: The hash table you wish to print from
	*
	* Return: Associated key value pair or Nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (current->next != NULL)
				printf(", ");
			current = current->next;
		}
	}
}
