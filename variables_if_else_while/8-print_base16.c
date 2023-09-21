#include <stdio.h>
/**
 * main - prints a specific line
 *
 * Return: 0
 */
int main(void)
{
	int digit;
		for (digit = 0; digit <= 15; digit++)
		{
			if (digit < 10)
			{
				putchar('0' + digit);
			}
			else
			{
				putchar('A' + (digit - 10));
			}
		}
		putchar('\n');
		return (0);
}
