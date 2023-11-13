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

	num = sizeof(n) * 8;

	for (i = num - 1; i >= 0; --i)
	{
		if (n & (1UL << i))
			break;
	}
	for (i = num - 1; i >= 0; --i)
	{
		b = n >> i;
		if (b & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
