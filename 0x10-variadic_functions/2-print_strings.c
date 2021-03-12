#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list v;
	unsigned int i;
	char *s;

	if  (separator == NULL)
		return;

	va_start(v, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(v, char *);
		if (s == NULL)
		{
			s = "(nil)";
		}
		printf("%s", s);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(v);
}
