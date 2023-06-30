#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_array - reverses an array
 *
 * @a: the array
 *
 * @n: the length of an array;
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int *arrCpy;

	arrCpy = malloc(n * sizeof(int));
	if (arrCpy == NULL)
	{
		free(arrCpy);
	}

	i = n - 1;

	for (j = 0; j < n; j++)
	{
		arrCpy[j] = a[j];
	}

	for (j = 0; j < n; j++)
	{
		a[j] = arrCpy[i];
		i--;
	}
	free(arrCpy);
}
