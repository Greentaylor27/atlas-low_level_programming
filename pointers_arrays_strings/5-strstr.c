#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: Substring
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*haystack == '\0' || *needle == '\0')
	{
		return ('\0');
	}

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return ('\0');
}
