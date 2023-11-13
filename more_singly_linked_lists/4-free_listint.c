#include "lists.h"

/**
 * free_listint - frees dynamic memory of a singly linked list
 * @head: pointer to the head element of a singly linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->int n);
		free(current);
		current = next;
	}
}
