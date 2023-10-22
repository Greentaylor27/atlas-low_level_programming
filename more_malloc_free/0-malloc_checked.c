#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * malloc_checked - allocates a block of memory.
 * @b: number of bytes
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		_putchar("Memory alloction failed\n");
		exit(1);
	}
	return (ptr);
}
