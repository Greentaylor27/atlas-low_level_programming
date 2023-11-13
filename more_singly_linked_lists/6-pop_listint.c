#include "lists.h"

/**
 * pop_listint - deletes the head element and returns the value
 * @head: pointer to a pointer to the head element
 * Return: n on success. NULL on fail.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	if (temp)
	{
		*head = temp->next;
		temp->next = NULL;
	}
	return (temp);
}
