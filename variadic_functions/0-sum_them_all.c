#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all arguements together
 * @n: number of integers to be summed
 * @...: the variable number of integers to be summed.
 * Return: Sum of all integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int num;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
