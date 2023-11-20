#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given spot
 * @h: a pointer that points to the head element
 * @idx: the space where the node is going (index)
 * @n: number to be inserted
 * Return: a pointer to new node on success.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *h;

		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
	}
	else
	{
		dlistint_t *temp = *h;

		for (i = 0; temp != NULL && i < idx - 1; i++)
			temp = temp->next;
		if (temp == NULL)
		{
			free(newNode);
			return (NULL);
		}

		newNode->next = temp->next;
		newNode->prev = temp;
		if (temp->next != NULL)
			temp->next->prev = newNode;
		temp->next = newNode;
	}
	return (newNode);
}
