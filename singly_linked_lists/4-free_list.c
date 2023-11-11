#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees dynamic memory of a singly linked list
 * @head: pointer to head element of a linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
