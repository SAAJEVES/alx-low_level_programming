#include "main.h"

/**
 * rot13 - encrypt a string
 *
 * @a: string to encrypt
 *
 * Return: return a pointer
 */
char *rot13(char *a)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char value[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i = 0;

	while (a[i] != '\0')
	{
		int j;
		for (j = 0; j < 52; j++)
		{
			if (a[i] == alpha[j])
			{
				a[i] = value[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
