#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concantenates two stringd
 * @s1: array of char
 * @s2: array of char
 * @n: number of s2 to concantenate
 *
 * Return: returns a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int nstr, ns1, ns2, ncopy, i, j;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ns1 = (int)strlen(s1);
	ns2 = (int)strlen(s2);
	if ((int)n >= ns2)
	{
		ncopy = ns2;
	}
	else
	{
		ncopy = n;
	}
	nstr = (int)ns1 + ncopy + 1;
	str = malloc(sizeof(char) * nstr);

	if (str == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	while (j < ncopy)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[nstr] = '\0';
	return (str);

}
