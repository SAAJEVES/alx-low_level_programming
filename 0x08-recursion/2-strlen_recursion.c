#include "main.h"

/**
 * _strlen_recursion - functions as strlen
 * @s: the string
 *
 * Return: an integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
