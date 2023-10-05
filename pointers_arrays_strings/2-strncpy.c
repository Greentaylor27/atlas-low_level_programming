#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	for (int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	for (int i = strlen(src); i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
