#include "main.h"
/**
 * swap_int - switches the value of first input with the second value
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
