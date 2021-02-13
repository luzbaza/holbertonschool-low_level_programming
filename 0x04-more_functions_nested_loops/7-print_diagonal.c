#include "holberton.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: if n is 0 or less, the function should only print a \n
 */
void print_diagonal(int n)
{
	int tr;
	int sg;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (tr = 1; tr <= n; tr++)
		{
			for (sg = 1; sg < tr; sg++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
