#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create and array of given size and data type
 *
 * @size: required size
 *
 * @c: initializing the first elemnt to the vakue
 *
 * Return: returns a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (int)size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);

}
