#include "holberton.h"
/**
 * print_rev -  function that prints a string, in reverse
 * @s:  prints a string, in reverse
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int p = 0;
	int c;

	for (p = 0; s[p] != '\0';)
	{
		p++;
	}

	for (c = p - 1; c >= 0; c--)
	{
		_putchar (s[c]);
	}
	_putchar('\n');
}
