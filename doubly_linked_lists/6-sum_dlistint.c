#include "lists.h"

/**
	* sum_dlistint - Adds together nodes in a doubly linked list
	* @head: points to the head element in a list
	*
	*Return: The sum of the list or NULL if empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	unsigned int sum = 0;

	if (!head)
		return (0);

	for (current = head; current != NULL; current = current->next)
		sum += current->n;
	return (sum);
}
