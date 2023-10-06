#include "main.h"
/**
 * cap_string - Capitalizes a string
 * @x: string to change
 * Return: new string
 */
char *cap_string(char *x)
{
	int i;

	if (*x == '\0')
	{
		return ('\0');
	}
	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] = x[i] - 32;
		}
	}
	return (x);
}
