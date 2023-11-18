#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: points to the head element
 * Return: the data within a list on success.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n != 0)
		{
			printf("%d\n", h->n);
		}
		else
		{
			printf("0\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
