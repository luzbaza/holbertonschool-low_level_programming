#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - that returns a pointer to a newly allocated space in memory
 * @str: string being allocated in memomry
 * Return: Always 0
 */
char *_strdup(char *str)
{
	int i, r;
	char *lo;

	if (str == NULL)
		return (NULL);
	for (r = 0; r <= *str; r++)
	{
	}

	r += 1;
	lo = malloc(sizeof(char) * r);

	for (i = 0; i < r; i++)
		lo[i] = str[i];
	if (lo == NULL)
		return (NULL);
	return (lo);
}
