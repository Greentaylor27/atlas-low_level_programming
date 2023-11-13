#include "main.h"

/**
 * binary_to_uint - converts binary to an unsigned integer
 * @b: pointer to string.
 * Return: the decimal number of a binary number or 0 on fail.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != NULL)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		val <<= 1;
		if (b[i] == '1')
			val |= 1;
		i++;
	}
	return (val);
}
