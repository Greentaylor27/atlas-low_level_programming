#include "hash_tables.h"

/**
 * hash_table_set - adds a new element to a hash table
 * @ht: a pointer that points to the hash table
 * @key: the hash key
 * @value: the data that is to be stored.
 * Return: 1 on sucess, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *valCopy;
	hash_node_t *current, *newNode;
	int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	current = ht->array[i];

	valCopy = strdup(value);

	if (current && strcmp(key, current->key) == 0)
	{
		free(current->value);
		current->value = valCopy;
		return (1);
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(valCopy);
		return (0);
	}

	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		free(valCopy);
		return (0);
	}
	newNode->value = valCopy;
	newNode->next = ht->array[i];
	ht->array[i] = newNode;
	return (1);
}
