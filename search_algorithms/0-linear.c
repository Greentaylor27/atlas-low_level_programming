#include "search_algos.h"

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
	size_t i, j;

	if (!array || size == 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", array[j]);
		}
		printf("\n");

		if (array[i] == value)
		{
			return (i);
		}
	}
	printf("Value not found in the array.\n");
	return (-1);
}
