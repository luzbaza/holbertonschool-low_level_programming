#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n:  the number of integers passed to the function
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(v, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(v, const unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(v);
}
