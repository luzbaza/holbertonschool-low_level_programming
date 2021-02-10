#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int k, h;

	h = 0;

	while (h < 10)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar (k);
		}
		h++;
		_putchar('\n');
	}
}
