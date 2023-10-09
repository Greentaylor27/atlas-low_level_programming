#include "main.h"

/**
 * _strchr - Finds a character within a string
 * @s: string
 * @c: charcter to be found
 *
 * Return: Pointer to first occurance, or '\0'
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
