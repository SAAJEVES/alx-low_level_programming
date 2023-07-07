#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - find power using recursion
 * @x: base
 * @y: power
 *
 * Return: return an integer
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
