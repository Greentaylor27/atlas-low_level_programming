#include <stdio.h>
/**
 * main - prints a specific line
 *
 * Return: 0
 */
int main(void);
{
	char digit = '0';
		while (digit <= '9')
		{
			putchar(digit);
			digit++;
		}
		putchar('\n');
		return (0);
}
