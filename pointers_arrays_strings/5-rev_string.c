#include "main.h"

/**
 * rev_string - this function prints a string in reverse
 *
 * @s: ponter that points to a string
 */
void rev_string(char *s)
{
	int i, z;
	char *a, *b = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		b++;
	}
	z = i + 1;
	a = s;
	for (i = 0; i < z / 2; i++)
	{
		char x;

		x = *b;
		*b = *a;
		*a = x;
		a++;
		b--;

	}
	b[z + 1] = '\0';
}
