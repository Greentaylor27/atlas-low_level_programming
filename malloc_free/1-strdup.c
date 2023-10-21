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
	if (str == NULL)
	{
		return (NULL);
	}
	char *dup = (char *)malloc(strlen(str) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
