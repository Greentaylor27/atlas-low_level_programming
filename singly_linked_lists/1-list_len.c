#include "lists.h"

/**
 * list_len - prints the length of a singly linked list
 * @h: pointer to head element
 * Return: length of list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d", h->len);
		count++;
	}
	return (count);
}
