#include "lists.h"

/**
	* add_dnodeint - Adds a new node to a linked list
	*
	* @head: Head element of a list
	* @n: Integer to be added to the list
	*
	* Return: List with new element or NULL on fail
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewNode = malloc(sizeof(dlistint_t));

	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;
	NewNode->next = *head;
	NewNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = NewNode;

	*head = NewNode;
	return (NewNode);
}
