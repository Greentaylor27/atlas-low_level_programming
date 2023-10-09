#include "main.h"

/**
 * _strchr - Finds a character in a string
 * @s: string
 * @c: character to find
 * Return: string
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (*p);
		}
		*p++;
	}
	return ('\0');
}
