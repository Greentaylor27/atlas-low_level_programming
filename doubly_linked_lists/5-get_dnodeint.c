#include "lists.h"

/**
	* get_dnodeint_at_index - Gets a node from a list given the index
	* @head: points to the head element of a linked list
	* @index: The place you are trying to grab the data from
	*
	* Return: The node if it exsists or NULL if it doesn't
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	for (current = head; current != NULL; current = current->next)
		if (count++ == index)
			return (current);
	return (NULL);
}
