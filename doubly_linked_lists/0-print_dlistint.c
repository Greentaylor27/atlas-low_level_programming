#include "lists.h"

/**
	* print_dlistint - prints a list of the intended list
	* @h: head of list
	*
	* Return: the number of nodes
	*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (count != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return count;
}
