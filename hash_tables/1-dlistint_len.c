#include "lists.h"

/**
 * dlistint_len - prints the length of an element
 * @h: pointer to head element of a doubly linked list
 * Return: number of elements on success
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
