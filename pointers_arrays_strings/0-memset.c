#include "main.h"

/**
 * _memset - Sets memory
 * @s: pointer
 * @b: location
 * @n: byte size
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
