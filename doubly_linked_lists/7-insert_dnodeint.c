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
	unsigned int list_length = 0;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (h == NULL || *h == NULL)
	{
		newNode->next = *h;
		return (newNode);
	}

	for (current = *h; current != NULL; current = current->next)
	{
		list_length++;
		if (list_length == idx)
		{
			newNode->next = current->next;
			newNode->prev = current;
			if (current->next != NULL)
				current->next->prev = newNode;
			current->next = newNode;
			break;
		}
		if (current->next == NULL)
		{
			(*h) = newNode;
			newNode->prev = (*h);
			(*h)->prev = newNode;
			newNode->next = NULL;
		}
	}
	return (newNode);
}
