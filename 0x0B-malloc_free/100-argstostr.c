#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - conncatenates all the arguments of program
 *
 * @ac: number of arguments
 * @av: addresss of arguments
 *
 * Return: returns a pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	j = 0;
	len = 0;
	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	len += ac - 1 + 1;
	str = (char *)malloc(len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		k = 0;
		while (av[i][k] != '\0')
		{
			str[j + k] = av[i][k];
			k++;
		}
		str[j + k] = '\n';
		j = j + k + 1;
	}
	str[j] = '\0';
	return (str);
}
