#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: char to be
 * Return: pointer to array, '\0' if fail
 */
char *create_array(unsigned int size, char c)
{
	char *a = (char *) malloc(size * sizeof(char));

	if (a == NULL)
	{
		_putchar("Memory allocation failed.\n");
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
