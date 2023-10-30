#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a string separated by string
 * @separator: the string to be printed between the string
 * @n: the string
 * @...: the variable number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (seperator == NULL)
		{
			break;
		}
		if (n == NULL)
		{
			printf("(nil)");
			return;
		}
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
