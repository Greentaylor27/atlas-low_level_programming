#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - sets memory
 * @s: pointer
 * @b: location
 * @n: byte size
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
