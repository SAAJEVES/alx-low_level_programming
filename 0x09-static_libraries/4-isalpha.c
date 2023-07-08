#include "main.h"

/**
 * _isalpha - entry program
 *
 * @c: character to check
 *
 * Return: return 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
