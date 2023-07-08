#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: bytes of memory
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char value;
	unsigned int i;

	value = b;

	for (i = 0; i < n; i++)
	{
		*(s + i) = value;
	}
	return (s);
}
