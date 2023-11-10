#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a node to the end of our list
 * @head: a pointer to a pointer that points to the head element.
 * @str: the str to be stored in the new node.
 * Return: a pointer to the newly created node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t last = *head;
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);

	newNode->len = strlen(str);
	newNode->next = NULL;

	if (head == NULL)
	{
		head = newNode;
		return (NULL);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = newNode;
	return (newNode);
}
