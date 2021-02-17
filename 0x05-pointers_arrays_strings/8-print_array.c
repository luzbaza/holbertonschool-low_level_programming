#include <stdio.h>
#include "holberton.h"
/**
 * print_array - of an array of integers
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < (n - 1); d++)
		printf("%d, ", a[d]);

	if (d == (n - 1))

		printf("%d", a[n - 1]);
printf("\n");
}
