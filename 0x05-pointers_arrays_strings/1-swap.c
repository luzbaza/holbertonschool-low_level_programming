#include "holberton.h"
/**
 * swap_int - exchanges the values
 * @a: contains the value of the variable
 * @b: contains the value of the variable
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
