#include "main.h"

/**
 * get_bit - get bit at a particular index
 * @n: unsigned long int
 * @index: index
 * Return: an integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check, one, length;
	int num;

	length = (sizeof(unsigned long int) * 8) - 1;

	if (index > length)
	{
		num = -1;
		return (num);
	}

	one = 1;
	check = one << index;

	if ((n & check) >= 1)
	{
		num = 1;
	}
	else
	{
		num = 0;
	}
	return (num);
}
