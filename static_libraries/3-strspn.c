#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - matches string prefix
 * @s: string
 * @accept: number of bytes
 * Return: a number of intial bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
