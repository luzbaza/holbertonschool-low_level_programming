#include "holberton.h"
/**
 * print_alphabet - print alphabet
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int f;

	for (f = 'a'; f <= 'z'; f++)
	{
		_putchar (f);
	}
	_putchar('\n');
}
