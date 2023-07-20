#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search and returns first match
 * @array: array to search
 * @size: size of array
 * @cmp: pointer function
 *
 * Return: an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 1 || cmp == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			break;
	}

	return (i);
}
