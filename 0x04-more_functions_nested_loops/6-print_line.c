#include "holberton.h"
/**
* print_line - a function that draws a straight line in the terminal
*@n: print line
* Return: If n is 0 or less, the function should only print \n
*/
void print_line(int n)
{
	int e;

	e = 0;
	for (e = 0; e < n; e++)
	{
		_putchar ('_');
	}
	_putchar('\n');
}
