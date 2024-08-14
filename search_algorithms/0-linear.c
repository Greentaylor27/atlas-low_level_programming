#include "search.h"

/**
 * linear_search - Searches an array using linear search alogrithm
 * @array: The array used for searching
 * @size: The size of the array
 * @value: The Integer we are searching for
 * 
 * Return - The first index where value is found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
