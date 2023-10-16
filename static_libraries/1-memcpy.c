#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - copies bytes from src to dest
 * @src: where to begin
 * @dest: where to put
 * @n: number of bytes
 * Return: dest with copied bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
