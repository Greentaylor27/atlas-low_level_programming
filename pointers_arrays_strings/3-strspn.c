#include "main.h"

/**
 * _strspn - displays the length of a prefix substring
 * @s: string
 * @accept: Bytes
 * Return: number of initial bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	while (s != '\0')
	{
		char *acceptP = accept;
		char *sPtr = s;

		while (*acceptP != '\0' && *acceptP != *sPtr)
		{
			acceptP++;
		}

		if (*acceptP == *sPtr || *acceptP == '\0')
		{
			l++;
		}

		else
		{
			break;
		}

		s++;
	}
	return (l);
}
