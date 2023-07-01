#include "main.h"

/**
 * leet - does conversion on some special letter
 *
 * @a: the string to carry out the operation
 *
 * Return: this return a pointer string
 */
char *leet(char *a)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		if (a[i] == 'a' || a[i] == 'A')
		{
			a[i] = 4;
		}
		else if (a[i] == 'e' || a[i] == 'E')
		{
			a[i] = 3;
		}
		else if (a[i] == 'o' || a[i] == 'O')
		{
			a[i] = 0;
		}
		else if (a[i] == 't' || a[i] == 'T')
		{
			a[i] = 7;
		}
		else if (a[i] == 'l' || a[i] == 'L')
		{
			a[i] = 1;
		}
		else
		{
			a[i] = a[i];
		}
		i++;
	}
	return (a);
}
