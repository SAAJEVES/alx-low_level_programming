#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - check if an integer is prime number
 * @n: value to check
 *
 * Return: returns 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	int num;

	num = 0;

	if (n <= 1)
	{
		return (0);
	}

	num = num + is_prime(n, 2);

	if (num <= 2)
	{
		return (1);
	}

	return (0);
}

/**
 * is_prime - actual checking if prime
 * @n: integer to check
 * @val: divisor
 *
 * Return: returns 0 or 1
 */
int is_prime(int n, int val)
{
	if (val == n)
	{
		return (1);
	}

	if (n % val == 0)
	{
		return (0 + is_prime(n, val + 1));
	}
	return (1 + is_prime(n, val + 1));
}
