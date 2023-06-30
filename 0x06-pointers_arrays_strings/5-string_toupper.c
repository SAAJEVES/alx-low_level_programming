#include "main.h"
#include <stdlib.h>

/**
 * string_toupper - changes lowercase to upper
 *
 * @a: the string to captalize
 *
 * Return: a string
 */
char *string_toupper(char *a)
{
	int i;
	int stringLen;

	size_t lent = sizeof(a);

	stringLen = (int)lent;
	for (i = 0; i < stringLen; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
		else
		{
			a[i] = a[i];
		}
	}
	a[stringLen] = '\0';
	return (a);
}
