#include "main.h"
#include <string.h>

/**
 * is_palindrome - check palindrome
 *
 * @s: string
 *
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	size_t num;
	int value;

	num = strlen(s);

	if (s[0] == '\0')
	{
		return (0);
	}
	if (s[0] == s[num - 1])
	{
		value = 1 + palindrome(s + 1, (s + (num - 1)) - 1);
	}
	else
	{
		value = 0;
	}
	if (value == (int)num)
	{
		return (1);
	}
	return (0);
}

/**
 * palindrome - actual working
 *
 * @sBeg: Begining
 *
 * @sEnd: Ending
 *
 * Return: an integer
 */
int palindrome(char *sBeg, char *sEnd)
{
	int n;

	if (sBeg[0] == '\0')
	{
		return (0);
	}
	if (sBeg[0] == sEnd[0])
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n + palindrome((sBeg + 1), (sEnd - 1)));
}
