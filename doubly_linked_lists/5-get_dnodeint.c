#include "lists.h"

/**
 * get_dnodeint_at_index - grabs a node at a specific spot in the list
 * @head: points to the head element
 * @index: where the node is located
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
