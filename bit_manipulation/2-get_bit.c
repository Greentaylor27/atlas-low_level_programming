#include "main.h"

/**
 * get_bit - gets a bit at a given index
 * @n: number to be converted
 * @index: where to get the bit from
 * Return: bit on success, -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = n >> index;
	bit = mask & 1;

	return (bit);
}
