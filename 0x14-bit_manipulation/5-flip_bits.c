#include "main.h"

/**
 * flip_bits - flip bits
 * @n: first integer
 * @m: second integer
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count;

	result = n ^ m;
	count = 0;

	while (result != 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
