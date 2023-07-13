#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number
 * @size: size
 *
 * Return: returns a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	int *Arr;
	int i;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	Arr = (int *)arr;

	for (i = 0; i < (int)nmemb; i++)
	{
		Arr[i] = 0;
	}
	return (arr);
}
