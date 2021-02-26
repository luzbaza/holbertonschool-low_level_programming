#include "holberton.h"
int prime(int b, int t);
/**
 * prime - whether a number is prime or not prime
 * @b: number being tested
 * @t: number being tested
 * Return: the funcion prime
 */
int prime(int b, int t)
{
	if (b < 2)
		return (0);
	if (b / 2 < t)
		return (1);
	if (b % t == 0)
	{
		return (0);
	}
	return (prime(b, t + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number being tested
 * Return: Always 0
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
