#include "main.h"

/**
 * print_binary - prints a binary number
 * @n: number to be converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int num, i;
	unsigned long int b;
	bool first;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	num = sizeof(n) * 8;

	first = false;

	for (i = num - 1; i >= 0; --i)
	{
		if (b == 1)
			first = true;
		if (first)
			_putchar(b + '0');
	}
}

