#include "main.h"

/**
 * set_bit - set a bit  to 1 at a particular integer
 * @n: pointer to an integer
 * @index: the index
 * Return: 1 if it worked and -1 for the opposite
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check, one;
	unsigned int length;

	length = sizeof(unsigned long int) * 8;
	one = 1;
	if (index > length)
		return (-1);

	check = one << index;

	*n |= check;
	return (1);
}
