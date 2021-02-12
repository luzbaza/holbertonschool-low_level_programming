#include "holberton.h"
/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9
 *
 * Return: Do not print 2 and 4
 */
void print_most_numbers(void)
{
	char l, a, b;

	a = 50;
	b = 52;

	for (l = 48; l <= 57; l++)
	{
		if (l != a && l != b)
			_putchar(l);
	}
	_putchar('\n');
}
