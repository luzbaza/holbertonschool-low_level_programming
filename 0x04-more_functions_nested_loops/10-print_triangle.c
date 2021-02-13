#include "holberton.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: the size of the triangle
 * Return: to print the triangle
 */
void print_triangle(int size)
{
	int ho;
	int la;
	int to;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (la = 0; la <= (size - 1); la++)
		{
			for (ho = 0; ho < (size - 1) - la; ho++)
			{
				_putchar(' ');
			}
			for (to = 0; to <= la; to++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
