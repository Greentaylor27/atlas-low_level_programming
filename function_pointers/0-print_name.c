#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: function to be called
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
