#include "main.h"
#include <studio.h>

/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		puts(1, *s, 1);
		_puts_recursion(s + 1);
	}
}
