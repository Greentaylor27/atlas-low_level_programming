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
	dlistint_t *temp = *h;
	unsigned int list_length = 0;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	while (temp != NULL)
	{
		temp = temp->next;
		list_length++;
	}

	if (idx > list_length)
	{
		free(newNode);
		return (NULL);
	}

	if (*h == NULL && idx > 0)
	{
		temp = temp->next;
		idx--;
	}

	if (temp == NULL || temp->next == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next->prev = newNode;
	temp->next = newNode;

	if (newNode->next == NULL)
		*h = newNode;

	return (newNode);
}
