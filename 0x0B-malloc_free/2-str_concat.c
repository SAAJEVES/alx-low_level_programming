#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - joins two strings together
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: returns a string pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t len1;
	size_t len2;
	int i, j, totalLen;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	totalLen = (int)len1 + (int)len2 + 1;
	ptr = (char *)malloc(totalLen * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (int)len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < (int)len2; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[totalLen] = '\0';
	return (ptr);
}
