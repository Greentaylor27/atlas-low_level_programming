#include "main.h"

/**
 * _strlen - function return the length of a string
 * @s: Input
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
		;
	return (i);
}
