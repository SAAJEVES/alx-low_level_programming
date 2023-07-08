#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - copies n bytes
 * @dest: bytes destination
 * @src: bytes source
 * @n: number of memory
 *
 * Return: resturn a pointer array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
