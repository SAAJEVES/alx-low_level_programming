#include "main.h"

/**
 * print_sign - entry point
 *
 * @n: integer to check
 *
 * Return: 1 for +ve, 0 for 0 and -1 for -ve
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	_putchar('0');
	return (0);
}
