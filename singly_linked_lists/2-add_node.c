#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a node to a singly linked list
 * @head: a pointer to the head pointer of the linked list.
 * @str: the string to be stored in the new node.
 *
 * Return: a pointer to the newly created node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
