#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copies a string this time with Malloc in it
 * @str: string
 * Return: pointer to a new string
 */

char *_strdup(char *str)
{
	int length = strlen(str);
	char *new_str = (char *)malloc((length + 1) * sizeof(char));

	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
