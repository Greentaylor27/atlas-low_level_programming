#include "main.h"

/**
 * main - prints lowercase alphabet using _putchar
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
