#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: matrix
 * @size: size of the matrix
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int u, v, to = 0, tal = 0;

	for (u = 0; u < (size * size); u += (size + 1))
		to += a[u];
	for (v = (size - 1); v < ((size * size) - 1); v += (size - 1))
		tal += a[v];
	printf("%d, %d\n", to, tal);
}
