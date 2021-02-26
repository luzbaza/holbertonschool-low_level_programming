#include "holberton.h"
int sqr_root(int n, int c);
/**
 * sqr_root - the natural square root of a number
 * @n: number being square
 * @c: square root
 * Return: square root of the number
 */
int sqr_root(int n, int c)
{
	if (n == c * c)
		return (c);
	else if (n < c * c)
		return (-1);
	return (sqr_root(n, c + 1));
}

/**
 *  _sqrt_recursion - returns the natural square root of a number
 * @n: number being square
 * Return: square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr_root(n, 0));
}
