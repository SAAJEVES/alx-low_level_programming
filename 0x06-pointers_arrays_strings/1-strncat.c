#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates to another string but has to give max xhar
 *
 * @dest: string to be added to
 *
 * @src: where to add char from
 *
 * @n: value to be added
 *
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t max;
	size_t destLen;
	int size;

	max = sizeof(dest) - strlen(dest) - 1;
	destLen = sizeof(dest);
	size = (int)destLen;

	if (n < size)
	{
		strncat(dest, src, n);
	}
	else
	{
		strncat(dest, src, max);
	}

	return (dest);
}
