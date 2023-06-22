#include "main.h"

/**
 * _abs - entry point
 *
 * @a: value to check
 *
 * Return: the absolute value of the integer
 */
int _abs(int a)
{
	if ( a < 0)
	{
		return (a * -1);
	}
	return (a);
}
