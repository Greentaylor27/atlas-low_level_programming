#include "main.h"

/**
 * leet - Turns a string into 1337
 * @i: string
 * Return: string
 */
char *leet(char *i)
{
	int x, z;
	char j[] = "aAeEoOtTlL";
	char k[] = "4433007711";

	for (x = 0; *(j + x); x++)
	{
		for (z = 0; z <= 9; z++)
		{
			if (j[z] == i[x])
				i[x] = k[z];
		}
	}
	return (i);
}
