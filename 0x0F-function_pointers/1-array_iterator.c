#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - iterates over an array
 * @array: array to iterate over
 * @size: size of array
 * @action: pointer function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size < 1 || action == NULL)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
