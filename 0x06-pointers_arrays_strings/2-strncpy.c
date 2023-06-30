#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - copy a required number of character
 *
 * @dest: the destination string
 *
 * @src: the source in which characters are gotten
 *
 * @n: the number of characters to copy
 *
 * Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	size_t destSize;
	int destSizeToInt;

	destSize = sizeof(dest);
	destSizeToInt = (int)destSize - 1;

	if (n < destSizeToInt)
	{
		strncpy(dest, src, n);
	}
	else
	{
		strncpy(dest, src, destSizeToInt);
	}
	dest[destSizeToInt] = '\0';

	return (dest);
}
