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

	char alpha[] = "oOlLeEaAtT";
	char value[] = "0011334477";

	i = 0;

	while (a[i] != '\0')
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			if (a[i] == alpha[j])
			{
				a[i] = value[j];
			}
		}
		i++;
	}
	return (a);
}
