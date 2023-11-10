#include "lists.h"

/**
 * add_node - adds a node to a singly linked list
 * @head: a pointer to the head pointer of the linked list.
 * @str: the string to be stored in the new node.
 *
 * Return: a pointer to the newly created node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return;
	}
	newNode->str = str;
	newNode->next = *head;
	*head = newNode;
}
