#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
