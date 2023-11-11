#include "lists.h"

/**
 * listint_len - prints the length of a singly linked list
 * @h: pointer to head element
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
