#include "lists.h"

/**
 * pop_listint - deletes the head element and returns the value
 * @head: pointer to a pointer to the head element
 * Return: n on success. 0 on fail.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (temp == NULL)
	{
		return (0);
	}
	
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
