#include "hash_tables.h"

/**
 * hash_table_get - grabs the value associated with a key
 * @ht: a pointer that points to the hash table
 * @key: a pointer that points to the element to be found
 *
 * Return: the value associated with the key or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return NULL;
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (index >= ht->size)
		return NULL;
	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return node->value;
	}
	return NULL;
}
