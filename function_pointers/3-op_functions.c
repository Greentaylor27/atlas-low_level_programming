#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two ints.
 * @a: first integer
 * @b: second integer
 * Return: the sum of two ints
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subs two ints.
 * @a: first integer
 * @b: second integer
 * Return: the difference of two ints
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two ints.
 * @a: first integer
 * @b: second integer
 * Return: product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two ints.
 * @a: first integer
 * @b: second integer
 * Return: the result of the division of the two ints.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - gives the remainder of the division of two ints.
 * @a: first integer
 * @b: second integer
 * Return: The remainder of division of two ints
 */
int op_mod(int a, int b)
{
	return (a % b);
}
