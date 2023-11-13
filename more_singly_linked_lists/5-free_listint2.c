#include "main.h"

/**
 * free_listint2 - frees memory of a singly linked list.
 * @head: pointer to a pointer to the head element.
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
