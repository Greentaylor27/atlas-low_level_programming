#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int len1;
	unsigned int len2;
	unsigned int i, j;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	result = malloc((len1 + len2 + 1) * sizeof(char));

	if (!result)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}
