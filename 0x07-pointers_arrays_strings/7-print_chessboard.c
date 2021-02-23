#include "holberton.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int j, l;

	for  (j = 0; j < 8; j++)
	{

		for (l = 0; l < 8; l++)
			_putchar(a[j][l]);
		_putchar('\n');
	}
}
