#include "holberton.h"
/**
 * puts2 -  function that prints every other character of a string
 * @str: contains the string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (b % 2 == 0)
			_putchar (str[b]);
	}
	_putchar('\n');
}
