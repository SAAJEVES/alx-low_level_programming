#ifndef VARIADIC
#define VARIADIC

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct typePrint
{
	char *s;
	void (*func)(va_list form);
} type_print;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC */
