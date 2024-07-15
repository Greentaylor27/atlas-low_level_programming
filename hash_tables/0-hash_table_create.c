#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: size of the array
* Return: a pointer to newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned long int i = 0;

	newTable = malloc(sizeof(hash_table_t));

	if (newTable == NULL)
		return (NULL);

	newTable->size = size;
	newTable->array = malloc(sizeof(hash_node_t *) * newTable->size);

	if (newTable->array == NULL)
		return (NULL);

	while (i < newTable->size)
	{
		i++;
		newTable->array[i] = NULL;
	}
	return (newTable);
}
