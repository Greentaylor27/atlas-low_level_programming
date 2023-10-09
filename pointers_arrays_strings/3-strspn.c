#include "main.h"

/**
 * _strspn - matches string prefix
 * @s: string
 * @accept: number of bytes
 * Return: a number of initial bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	while (*s != '\0')
	{
		char *aP = accept;
		char *sPtr = s;
		int im = 0;

		while (*aP != '\0')
		{
			if (*aP == *sPtr)
			{
				im = 1;
				break;
			}
			aP++;
		}

		if (!im)
		{
			break;
		}

		l++;
		s++;
	}
	return (l);
}
