#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the  number of elements to swap
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int bm, fo;

	for (bm = 0; bm < n; bm++)
	{
		n--;
		fo = a[bm];
		a[bm] = a[n];
		a[n] = fo;
	}
}
