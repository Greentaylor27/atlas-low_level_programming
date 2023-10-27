#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - iterates through an array
 * @array: points to an array
 * @size: size of array
 * @action: function to be call back
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
