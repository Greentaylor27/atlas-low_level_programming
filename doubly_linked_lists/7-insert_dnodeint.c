#include "lists.h"

/**
	* insert_dnodeint_at_index - Inserts a new node given the index
	* @h: Double pointer to the head of a list
	* @idx: The given index
	* @n: Data to be inserted
	*
	* Return: Address of the new node or NULL on failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int i;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (h == NULL)
	{
		newNode->next = *h;
	}
	if (h != NULL)
	{
		(*h)->prev = newNode;
		*h = newNode;
	}

	for (i = 1; i <idx && current != NULL; ++i)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(newNode);
		return (*h);
	}

	newNode->prev = current;
	newNode->next = current->next;
	current->next = newNode;

	if (newNode->next != NULL)
		newNode->next->prev = newNode;
	return (*h);
}
