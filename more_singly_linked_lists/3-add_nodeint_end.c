#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of our list
 * @head: a pointer to a pointer that points to the head element
 * @n: the integer to be stored in the new node
 * Return: a pointer to the newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *newNode, *current;

	newNode = malloc(sizeof(list_t));

	if (newNode)
	{
		if (newNode == 0)
		{
			return (NULL);
		}
		newNode->n = n;
		if (newNode->n == '\0')
		{
			free(newNode);
			return (NULL);
		}
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
	}
	return (newNode);
}
