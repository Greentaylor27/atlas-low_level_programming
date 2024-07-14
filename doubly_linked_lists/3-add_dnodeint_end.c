#include "lists.h"

/**
	* add_dnodeint_end - adds a new node to the end of a linked list
	* @head: reference to the head element of a linked list
	* @n: an integer to be added to the linked list

	* Return: appended list or NULL on fail
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NewNode = malloc(sizeof(dlistint_t));
	dlistint_t *Last = *head;

	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return NewNode;
	}
	while (Last->next != NULL)
	{
		Last = Last->next;
	}
	Last->next = NewNode;
	return (NewNode);
}
