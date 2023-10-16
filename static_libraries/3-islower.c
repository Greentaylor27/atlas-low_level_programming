#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - Checks if a number is lower
 * @c: number to be checked
 * Return: 1 if lower, 0 if not
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
