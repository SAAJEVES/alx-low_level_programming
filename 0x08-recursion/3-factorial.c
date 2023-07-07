#include <stdio.h>
#include "main.h"

/**
 * factorial - get the factorial of an integer
 * @n: the integer of whihc the factorial is to be gotten
 *
 * Return: return an integer
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
