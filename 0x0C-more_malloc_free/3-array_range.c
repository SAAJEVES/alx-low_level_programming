#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array and assign values provided
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: returns a pointer array
 */
int *array_range(int min, int max)
{
	int i, minVal, *arrPtr;

	if (min > max)
	{
		return (NULL);
	}
	minVal = min;
	arrPtr = malloc((max - min + 1) * sizeof(int));
	if (arrPtr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (minVal <= max)
	{
		arrPtr[i] = minVal;
		i++;
		minVal++;
	}
	return (arrPtr);
}
