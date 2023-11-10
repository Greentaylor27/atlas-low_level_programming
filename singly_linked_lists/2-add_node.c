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
	newNode = (struct list_t)malloc(sizeof(list_t));

	if (newNode == NULL)
		exit(exit_failure);
	newNode->str = str;
	newNode->next = NULL;
	return (newNode);
}
