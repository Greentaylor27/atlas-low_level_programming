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
	unsigned int i;
	char *new_str;

	if (!str)
	{
		return (NULL);
	}
	new_str = malloc(strlen(str) + 1);

	if (!new_str)
	{
		return (NULL);
	}
	for (i = 0; i <= strlen(str); i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
