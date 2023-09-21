#include <stdio.h>
/**
 * main - prints a specific line
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		letter = 'A';
			while (letter <= 'Z')
			{
				putchar(letter);
				letter++;
			}
	putchar('\n');
	return (0);
}
