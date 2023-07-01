#include "main.h"

/**
 * cap_string - capitalize the first letter of each word
 *
 * @a: this string passed in
 *
 * Return: returns a string
 */
char *cap_string(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (
				a[i] == ' ' ||
				a[i] == '\t' ||
				a[i] == '\n' ||
				a[i] == ',' ||
				a[i] == ';' ||
				a[i] == '.' ||
				a[i] == '!' ||
				a[i] == '?' ||
				a[i] == '"' ||
				a[i] == '(' ||
				a[i] == ')' ||
				a[i] == '{' ||
				a[i] == '}'
		   )
		{
			if (a[i + 1] >= 97 || a[i + 1] <= 122)
			{
				a[i + 1] = a[i + 1] - 32;
			}
		}
		i++;
	}
	return (a);
}
