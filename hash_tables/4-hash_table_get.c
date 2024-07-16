#include "hash_tables.h"

/**
	* hash_table_get - Pulls the node given a key from a hash table
	* @ht: hash table passed into the function
	* @key: Key passed into the function to find the value
	*
	* Returns: Value associated with key or NULL if it can't be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	if (i >= ht->size)
		return (NULL);

	for (current = ht->array[i]; current != NULL; current = current->next)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
	}

	return (NULL);
}
