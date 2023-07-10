#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 *
 * @str: string to duplicate
 *
 * Return: returns a pointer
 */
char *_strdup(char *str)
{

	char *ptr;
	int i;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 1 + (strlen(str) * sizeof(char));

	ptr = (char *)malloc(len);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (int)(len - 1); i++)
	{
		ptr[i] = str[i];
	}
	ptr[len] = '\0';
	return (ptr);
}
