#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - function that allocates memory
 * @b: input amout
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void  *d;

	d = malloc(b);

	if (d == NULL)
	{
		exit(98);
	}
	return (d);
}
