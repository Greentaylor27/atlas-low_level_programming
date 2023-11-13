#include "lists.h"

/**
 * sum_listint - adds two nodes together
 * @head: pointer to the head element
 * Return: Sum on success. 0 on fail.
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int n = 0;

	current = head;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (n);
}
