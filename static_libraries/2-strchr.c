#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - finds a charcter within a string
 * @s: string
 * @c: character to be found
 * Return: pounter to first occurance, or '\0'
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
