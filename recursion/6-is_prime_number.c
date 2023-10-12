#include "main.h"

/**
 * is_prime_help - determines if a number is prime
 * @n: number to determine
 * @i: Any other number
 * Return: 1 if prime otherwise 0
 */
int is_prime_help(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime_help(n, i - 1));
		}
	}
}

/**
 * is_prime_number - determines if a number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime_help(n, n / 2));
}
