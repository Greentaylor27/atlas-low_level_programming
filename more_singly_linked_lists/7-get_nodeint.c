#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node in a linked list
 * @head: points to the head element in a list
 * @index: index to return node location
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current->n);
		}
		count++;
		current = current->next;
	}
}
