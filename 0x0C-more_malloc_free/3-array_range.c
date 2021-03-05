#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - unction that creates an array of integers
 * @min: minimun of the range
 * @max: max number in the range
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *c;
	int o;
	int s;

	if (min > max)
		return (NULL);
	s = (max - min + 1);
	c = malloc(sizeof(int) * s);
	if (c == NULL)
		return (NULL);
	for (o = 0; o < s; o++)
	{
		c[o] = min;
		min++;
	}
	return (c);
}
