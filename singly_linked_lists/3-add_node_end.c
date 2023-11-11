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
	list_t *newNode, *current;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);
}
