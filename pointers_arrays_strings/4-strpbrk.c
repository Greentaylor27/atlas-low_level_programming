#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: pointer
 * @accept: number of bytes
 * Return: String, if nothing NULL
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == '\0' || accept == '\0')
	{
		return ('\0');
	}

	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
