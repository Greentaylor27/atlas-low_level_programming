#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: points to the head element
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *last;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
