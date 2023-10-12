#include "main.h"

/**
 * is_prime_number - tests if input is a prime
 * @n: input number
 * Return: 1 if prime
 */
int is_prime_number(int n)
{
	int d = 2;

	if (n % d == 0)
	{
		return (0);
	}
	else if (d <= n - 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (is_prime_number(n));
}
