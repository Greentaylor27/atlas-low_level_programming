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
	char *str;
	unsigned int l;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == '\0')
		return ('\0');
	for (l = 0; l < size; l++)
		str[l] = c;
	return (str);
}
