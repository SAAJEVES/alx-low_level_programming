#include "search_algos.h"

/**
 * linear_search - searches for a value
 *
 * @array: the array to search
 *
 * @size: size of array
 *
 * @value: value to look for
 *
 * Return: index if value is present or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int n;


	if (array == NULL)
		return (-1);

	for (n = 0; n < (int)size; n++)
	{
		if (array[n] == value)
		{
			printf("Value checked array[%i] = [%i]\n", n, array[n]);
			return (n);
		}
		else
		{
			printf("Value checked array[%i] = [%i]\n", n, array[n]);
		}
	}
	return (-1);
}
