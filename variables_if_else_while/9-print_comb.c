#include <stdio.h>
/**
 * main - prints a specific line
 *
 * Return: 0
 */
int main(void)
{
	int i, j;
		for (i = 0; i <= 9; i++)
		{
			for (j = i; j <= 9; j++)
			{
				putchar('O' + i);
				if (i != j)
				{
					putchar(',');
					putchar('O' + j);
				}
				putchar('\n');
			}
		}
		return (0);
}
