#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	void *ptr = malloc(total_size);
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
