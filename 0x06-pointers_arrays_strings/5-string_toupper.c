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

	i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
