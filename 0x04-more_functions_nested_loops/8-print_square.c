#include "holberton.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size: prints a square
 * Return: print the square
 */
void print_square(int size)
{
	int o;
	int p;

	for (o = 0; o < size; o++)
	{
	for (p = 0; p < size; p++)
	{
		_putchar ('#');
	}
	_putchar('\n');
	}
	if (size <= 0)
	{
	_putchar ('\n');
	}
}
