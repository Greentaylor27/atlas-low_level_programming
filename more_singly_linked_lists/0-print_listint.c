#include "lists.h"

/**
 * print_listint - prints a singly linked list
 * @h: pointer to the head element
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
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
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
