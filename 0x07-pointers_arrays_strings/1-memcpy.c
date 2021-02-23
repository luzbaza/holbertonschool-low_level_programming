#include "holberton.h"
/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: input
 * @n: bytes to copy
 * Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
		dest[p] = src[p];
	return (dest);
}
