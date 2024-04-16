#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node to the beginning of a linked list
 * @head: is a pointer that points to address stored in head
 * @n: number to be inserted
 * Return: a pointer to newly created node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode)
	{
		if (newNode == 0)
		{
			return (NULL);
		}

		newNode->n = n;
		newNode->next = (*head);
		newNode->prev = NULL;
		if (*head != NULL)
			(*head)->prev = newNode;
		*head = newNode;
	}
	return (newNode);
}
