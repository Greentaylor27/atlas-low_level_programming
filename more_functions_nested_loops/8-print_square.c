#include "main.h"

/**
 * print_square - entry point
 *
 * Description: Prints square
 *@size: size of square
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x = size)
		{
			for (y = 1; y = size)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
