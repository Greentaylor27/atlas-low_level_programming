#include "lists.h"

/**
 * print_list - prints a list of nodes
 * @h: pointer to the head element
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%s", current->str);
		current = current->next;
		count++;
	}
	return (count);
}
