#include <stdio.h>

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
		i++;
	}
	return ((s + i));
}
