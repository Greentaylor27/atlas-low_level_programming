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

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		newNode->prev = NULL;
		return;
	}
	while (current->next != NULL)
		current = current->next;
	current->next = newNode;
	newNode->prev = current;
	return (newNode);
}
