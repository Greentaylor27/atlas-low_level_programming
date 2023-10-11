#include "main.h"

/**
 * _puts_recursion - Writes out a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(1, s, 1);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar(1, '\n', 1);
	}
}
