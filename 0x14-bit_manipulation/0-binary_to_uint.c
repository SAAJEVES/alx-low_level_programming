#include "main.h"
#include <string.h>

/**
 * custom_pow - work in place of pow
 * base: 2
 * exponent: any value greater 0
 * Return: a value
 */
unsigned int custom_pow(unsigned int base, unsigned int exponent) {
	unsigned int result = 1;

	while (exponent > 0) {
		result *= base;
		exponent--;
	}
	return result;
}



/**
 * binary_to_uint - converst binary to decimal
 * @b: string literal
 * Return: an unsigned intger
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, noVal, val, powered, base, power;
	int i;

	noVal = 0;
	dec = 0;
	i = 0;
	base = 2;

	if (b == NULL)
		return (noVal);

	power = (unsigned int)strlen(b);

	while (b[i] != '\0')
	{
		power--;
		if (b[i] > '1' || b[i] < '0')
		{
			return (noVal);
		}
		val = (unsigned int) (b[i] - '0');
		powered = custom_pow(base, power);
		dec += val * powered;
		i++;
	}
	return (dec);
}
