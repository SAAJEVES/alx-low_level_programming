#include <stdio.h>

/**
 * _strspn - checks for a substring in a string
 * @s: the string
 * @accept: the substring
 *
 * Return: returns an unsined int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int times;
	int i;
	int j;

	times = 0;
	i = 0;

	while (*(s + i) != '\0')
	{
		j = 0;

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				times++;
				break;
			}
			j++;
		}
		if (*(s + i) != *(accept + j))
		{
			break;
		}
		i++;
	}
	return (times);
}
