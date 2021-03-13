#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char -  function that prints a character
 * @v: list of arguements
 * Return: Always 0
 */

void print_char(va_list v)
{
	printf("%c", va_arg(v, int));
}

/**
 * print_integer - function that prints an integer
 * @v: list of arguements
 * Return: Always 0
 */

void print_integer(va_list v)
{
	printf("%d", va_arg(v, int));
}


/**
 * print_float - function that prints a float
 * @v: list of arguements
 * Return: Always 0
 */

void print_float(va_list v)
{
	printf("%f", va_arg(v, double));
}

/**
 * print_s - function that prints a string
 * @v: list of arguements
 * Return: Always 0
 */

void print_s(va_list v)
{
	char *s;

	s = va_arg(v, char *);

	if (s == NULL)
		s = ("(nil)");
	printf("%s", s);
}

/**
 * print_all - function that prints anything
 * @format:  list of types of arguments passed to the function
 * Return: Always 0
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int b, t;
	va_list v;

	print_t list[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_s},
		{NULL, NULL},
	};

	va_start(v, format);
	b = 0;

	while ((format != NULL) && (format[b] != '\0'))
	{
		t = 0;
		while (list[t].name != NULL)
		{
			if (*(list[t].name) == format[b])
			{
				printf("%s", separator);
				list[t].type(v);
				separator = ", ";
			}
			t++;
		}
		b++;
		t = 0;
	}
	printf("\n");
	va_end(v);

