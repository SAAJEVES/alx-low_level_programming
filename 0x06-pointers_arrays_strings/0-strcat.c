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
