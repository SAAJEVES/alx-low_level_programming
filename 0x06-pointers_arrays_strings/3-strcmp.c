#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compare two strings
 *
 * @s1: string one
 *
 * @s2: strring two
 *
 * Return: 0 if successful otherwise another value
 */
int _strcmp(char *s1, char *s2)
{
	int value;

	if (strlen(s1) != strlen(s2))
	{
		value = s1[0] - s2[0];
	}
	else
	{
		int n;
		size_t length;
		int i;

		length = strlen(s1);
		n = (int)length;
		for (i = 0; i < n; i++)
		{
			if (s1[i] == s2[i])
			{
				value = s1[i] - s2[i];
			}
			else
			{
				value = s1[i] - s2[i];
			}
		}
	}
	return (value);
}
