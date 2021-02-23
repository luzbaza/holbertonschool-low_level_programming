#include "holberton.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @s: the memory to print
 * @b: address of memory to print
 * @n: bytes of the memory
 * Return: he memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  w;

	for (w = 0; w < n; w++)
		s[w] = b;
	return (s);
}
