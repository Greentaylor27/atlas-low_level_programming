#include "lists.h"

/**
 * sum_dlistint - adds a list together mathmatically
 * @head: points to the head element
 * Return: the sum on success, anything else is a failure.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int n = 0;

	current = head;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		n += current->n;
		current = current->next;
	}
	return (n);
}
