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

	lDigit = a % 10;
	printf("%d", lDigit);
	return (lDigit);
}
