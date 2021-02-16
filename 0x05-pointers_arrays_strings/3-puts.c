#include "holberton.h"
/**
 * _puts -  function that prints a string
 * @str: string
 * Return: Always 0.
 */
void _puts(char *str)
{
	int e;

	for (e = 0; str[e] != '\0'; e++)
	{
		_putchar(str[e]);
	}
	_putchar('\n');
}
