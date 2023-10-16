#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: pointer
 * @accept: number of bytes
 * Return: string, if nothing NULL
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
