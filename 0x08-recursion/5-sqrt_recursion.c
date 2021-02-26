#include "holberton.h"
int squareroot (int n , int c)
/**
 * _sqrt_recursion - checks for perfect square
 * @n: string
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - check if perfect square
 * @n: number being squared
 * @c: counter
 * Return: square root of the number
 */
int squareroot(int n, int c)
{
	if (c < 1)
		return (-1);
	else if (c * c == n)
		return (c);
	else
		return (squareroot(n, c - 1));
}
