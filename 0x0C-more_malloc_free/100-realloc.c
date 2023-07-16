#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocating memory but still having the values in fomer
 *
 * @ptr: a pointer
 * @old_size: bytes of old memory
 * @new_size: bytes of new memory
 * Return: returns a void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, num;
	void *arrPtr;
	char *ptr1;
	int *ptr2;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		arrPtr = malloc(new_size);
		return (arrPtr);
	}
	arrPtr = malloc(new_size);
	ptr1 = (char *)ptr;
	if (sizeof(ptr1[0]) == 1)
	{
		num = old_size / (unsigned int)sizeof(ptr1[0]);
		for (i = 0; i < num; i++)
		{
			((char *)arrPtr)[i] = ((char *)ptr)[i];
		}
	}
	ptr2 = (int *)ptr;
	if (sizeof(ptr2[0]) > 1)
	{
		num = old_size / (unsigned int)sizeof(ptr2[0]);
		for (i = 0; i < num; i++)
		{
			((int *)arrPtr)[i] = ((int *)ptr)[i];
		}
	}
	free(ptr);
	return (arrPtr);
}
