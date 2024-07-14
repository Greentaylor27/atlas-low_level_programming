#include "lists.h"

/**
	* dlistint_len.c - returns the number of elements in a given list
	* @h: points to the head of the list
	*
	* Return: The number of elements in a list
	*/
size_t dlistit_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return(count);
}
