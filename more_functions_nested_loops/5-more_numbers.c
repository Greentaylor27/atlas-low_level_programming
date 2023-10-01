#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, x, y, a;

	for (a = 1; a <= 10; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			x = i / 10;
			y = i % 10;
			if (i > 9)
				_putchar(x + '0');

			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
