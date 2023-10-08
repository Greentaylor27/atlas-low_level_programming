#include "main.h"

/**
 * _memcpy - Copies bytes from src to dest
 * @src: where to begin
 * @dest: where to put
 * @n: number of bytes
 * Return: dest with copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
