#include "main.h"

/**
 * _sqrt_recursion_help - finds the natural square root.
 * @x: the number you are trying to find the square root of
 * @y: the root to be tested
 * Return: -1 on floats, int on return
 */
int _sqrt_recursion_help(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	if (y == x / 2)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to be squared
 * Return: int if n has a natural square, otherwise -1
 */
int _sqrt_recursion(int n)
{
	int l = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1)
	}
	return (_sqrt_recursion_helper(n, l));
}
