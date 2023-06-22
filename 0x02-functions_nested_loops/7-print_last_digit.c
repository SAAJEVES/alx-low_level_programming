#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - entry point
 *
 * @a: integer to check
 *
 * Return: returns the last digit of the integer
 */
int print_last_digit(int a)
{
	int lDigit;

	if (a < 0)
	{
		lDigit = -1 * (a % 10);
	}
	else
	{
		lDigit = a % 10;
	}
	_putchar(lDigit + '0');
	return (lDigit);
}
