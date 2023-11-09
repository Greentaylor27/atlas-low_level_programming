#include "lists.h"

/**
 * print_list - prints a list of nodes
 * @h: pointer to the head element
 * Return: number of nodes
 */

size_t print_list(const size_t *h)
{
	struct list_t *current = head;

	while (current != NULL)
	{
		_putchar("%d", current->len);
		current = current->next;
	}
	return (current);
}
