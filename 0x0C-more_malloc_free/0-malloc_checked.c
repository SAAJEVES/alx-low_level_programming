#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	if (b >= INT_MAX)
	{
		return ((void *)98);
	}

	ptr = malloc(b);

	if (ptr == NULL)
	{
		return ((void *)98);
	}
	return (ptr);
}
