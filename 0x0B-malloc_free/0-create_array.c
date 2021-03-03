#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - that creates an array of chars
 * @size: size of te array
 * @c: characters in the array
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	char *l;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	l = malloc(size * sizeof(char));
	if (l == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		l[i] = c;
	return (l);
}
