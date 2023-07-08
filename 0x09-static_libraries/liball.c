!<arch>
0-isupper.c/    0           0     0     644     187       `
#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

0-memset.c/     0           0     0     644     369       `
#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: bytes of memory
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char value;
	unsigned int i;

	value = b;

	for (i = 0; i < n; i++)
	{
		*(s + i) = value;
	}
	return (s);
}

0-strcat.c/     0           0     0     644     357       `
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - join the second parameter to the first and also
 * changes the value in the memory
 *
 * @dest: parameter to be increased
 *
 * @src: what to add to the first parameter
 *
 * Return: returns a pointer
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

100-atoi.c/     0           0     0     644     593       `
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}

1-isdigit.c/    0           0     0     644     200       `
#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
1-memcpy.c/     0           0     0     644     337       `
#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - copies n bytes
 * @dest: bytes destination
 * @src: bytes source
 * @n: number of memory
 *
 * Return: resturn a pointer array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

1-strncat.c/    0           0     0     644     539       `
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates to another string but has to give max xhar
 *
 * @dest: string to be added to
 *
 * @src: where to add char from
 *
 * @n: value to be added
 *
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t max;
	size_t destLen;
	int size;

	max = sizeof(dest) - strlen(dest) - 1;
	destLen = sizeof(dest);
	size = (int)destLen;

	if (n < size)
	{
		strncat(dest, src, n);
	}
	else
	{
		strncat(dest, src, max);
	}

	return (dest);
}

2-strchr.c/     0           0     0     644     297       `
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

2-strlen.c/     0           0     0     644     206       `
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
2-strncpy.c/    0           0     0     644     432       `
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - copy a required number of character
 *
 * @dest: the destination string
 *
 * @src: the source in which characters are gotten
 *
 * @n: the number of characters to copy
 *
 * Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
	}
	dest[n] = '\0';
	return (dest);
}
3-islower.c/    0           0     0     644     297       `
#include "main.h"

/**
 * _islower - entry point
 *
 * @c: the character to be checked
 *
 * Description: takes in a parameter c which is an integer
 *
 * Return: return 1 if sucessful while 0 if unsuccessful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

3-puts.c/       0           0     0     644     205       `
#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

3-strcmp.c/     0           0     0     644     555       `
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

3-strspn.c/     0           0     0     644     497       `
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

4-isalpha.c/    0           0     0     644     260       `
#include "main.h"

/**
 * _isalpha - entry program
 *
 * @c: character to check
 *
 * Return: return 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
4-strpbrk.c/    0           0     0     644     371       `
/**
 * _strpbrk - matches a char and return the remaining
 * @s: string
 * @accept: another string
 *
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}

5-strstr.c/     0           0     0     644     702       `
/**
 * _strstr - searchs for a substr in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the first occurence of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	i = 0;

	while (*(needle + i) != '\0')
	{
		j = 0;
		while (*(haystack + j) != '\0')
		{
			if (*(needle + i) == *(haystack + j))
			{
				k = 1;
				while (*(needle + i + k) != '\0')
				{
					if (*(needle + i + k) == *(haystack + j + k))
					{
						k++;
						continue;
					}
					else
					{
						break;
					}
				}
				if (*(needle + i + k) == *(haystack + j + k))
				{
					return ((haystack + j));
				}
				break;
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
6-abs.c/        0           0     0     644     236       `
#include "main.h"

/**
  *_abs - Entry point
  *@c: the character to be checked
  *Return: Absloute value of a number or 0
  */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
9-strcpy.c/     0           0     0     644     341       `
#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

main.c/         0           0     0     644     142       `
#include "main.h"

int main(void)
{
	_puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
	return (0);
}
_putchar.c/     0           0     0     644     264       `
#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
