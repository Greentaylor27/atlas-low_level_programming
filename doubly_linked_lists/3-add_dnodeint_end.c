#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 * @head: pointer that points to the head element
 * @n: number to be inserted
 * Return: new node on success.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = newNode;
	newNode->prev = current;
	return (newNode);
}
