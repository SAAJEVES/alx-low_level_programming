#include "main.h"

/**
 * print_binary - printt binary
 * @n: usigned long int n
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int check, val;
	int i;

	val = 1;
	i = sizeof(unsigned long int) * 8;
	i--;

	for (; i >= 0; i--)
	{
		check = val << i;

		if ((n & check) >= 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
