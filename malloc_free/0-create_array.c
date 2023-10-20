#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: char to be
 * Return: pointer to array, '\0' if fail
 */
char *create_array(unsigned int size, char c)
{
	char *a = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (a == NULL || size == 0)
	{
		printf("Memory allocation failed.\n");
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
