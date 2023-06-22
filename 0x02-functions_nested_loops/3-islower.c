#include "main.h"

/**
 * _islower - entry point
 *
 * @c: the character to be checked
 *
 * Description: takes in a parameter c which is an integer
 *
 * Return: return 1 if sucessful while 0 if unsuccessful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
