#include "lists.h"

/**
	* free_dlistint - Frees a list from memory allocation
	* @head: Pointer that points to the head element of a list
	*
	*Return: Freed list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *List;

	while (head != NULL)
	{
		List = head;
		head = head->next;
		free(List);
	}
}
