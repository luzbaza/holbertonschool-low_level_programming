#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function allocates memory
 * @nmemb: size of the array
 * @size: the size of the memory to print
 * Return: Always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	unsigned int h;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = malloc(size * nmemb);
	if (k == NULL)
		return (NULL);
	for (h = 0; h < (size * nmemb); h++)
		k[h] = 0;
	return (k);
}
