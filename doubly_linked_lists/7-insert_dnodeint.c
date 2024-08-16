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
	dlistint_t *current, *temp;
	unsigned int i;

	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (!*h)
	{
		*h = newNode;
		return (newNode);
	}

	if (idx == 0)
	{
		newNode->next = *h;
		(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	current = *h;
	while (i < idx -1)
	{
		if (!current)
			return (NULL);
		current = current->next;
		i++;
	}
	if (current->next)
	{
		temp = current->next;
		temp->prev = newNode;
		newNode->next = temp;
	}
	else
	{
		newNode->next = NULL;
	}
	newNode->prev = current;
	current->next = newNode;

	return (newNode);
}
