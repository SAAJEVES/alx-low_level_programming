#include "main.h"

/**
 * print_binary - printt binary
 * @n: usigned long int n
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int check, val, one, i;
	int notTo;

	i = 0;
	notTo = 0;
	one = 1;
	val = sizeof(unsigned long int) * (8);
	check = one << (val - 1);

	for (; i < val; i++)
	{
		if ((n & check) >= 1)
		{
			_putchar('1');
			notTo = 1;
		}
		else if (notTo)
		{
			_putchar('0');
		}
		check >>= 1;
	}

	if (!notTo)
	{
		_putchar('0');
	}
}
