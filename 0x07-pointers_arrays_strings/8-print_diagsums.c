#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals
 *
 * @a: the array
 * @size: the size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;

	int leftDiagSum = 0;
	int rightDiagSum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				leftDiagSum += *(a + i * size + j);
			}

			if ((i + j) == (size - 1))
			{
				rightDiagSum += *(a + i * size + j);
			}
		}
	}

	printf("%d, %d\n", leftDiagSum, rightDiagSum);
}
