#include "lists.h"

/**
 * add_nodeint - adds a node to the start of a singly linked list
 * @head: a pointer to the head pointer of the linked list
 * @n: the integer to be stored in the new node
 * Return: a pointer to the newly created node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == 0)
	{
		return (-1);
	}

	newNode->n = strdup(int);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
