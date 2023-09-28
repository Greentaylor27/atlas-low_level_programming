#include "main.h"

/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (c = 'a'; c <= 'z'; c++)
	{
		while (i <= 10)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
