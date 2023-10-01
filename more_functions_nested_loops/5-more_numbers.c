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
	int i;
	int x;

	for (i = '0'; i <= 14; i++)
	{
		while (x <= 10)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
