#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - squareroot recursion
 * @n: integer to find the squarerot
 *
 * Return: return the squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, 0));
}

/**
 * _sqrt - squareroot
 * @n: integer
 * @val: possible squareroot
 *
 * Return: answer
 */
int _sqrt(int n, int val)
{
	if ((val * val) == n)
	{
		return (val);
	}
	return (_sqrt(n, val + 1));
}
