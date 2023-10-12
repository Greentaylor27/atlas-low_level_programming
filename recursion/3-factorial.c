#include "main.h"

/**
 * factorial - Does Factorials
 * @n: Number
 * Return: -1 for error, or gives answer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
