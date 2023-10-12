#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	if (*s)
	{
		write (1, *s, 1);
		_puts_recursion(s + 1);
	}
}
