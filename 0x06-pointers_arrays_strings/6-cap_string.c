#include "main.h"

/**
 * cap_string - capitalize the first letter of each word
 *
 * @a: this string passed in
 *
 * Return: returns a string
 */
char *cap_string(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] < 48 || (a[i] > 57 && a[i] < 64) || (a[i] > 90 && a[i] < 94) || a[i] > 122)
		{
			if (a[i + 1] > 96 && a[i + 1] < 123)
			{
				a[i + 1] = a[i + 1] - 32;
				i++;
				continue;
			}
		}
		i++;
	}
	return (a);
}
