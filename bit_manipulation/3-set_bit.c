#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: bit to be manipulated
 * @index: where the bit should be manipulated
 * Return: 1 on success, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	n &= ~(1 << index);
	return (1);
}
