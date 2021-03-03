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
	for (r = 0; str[r] != '\0'; r++)
		;
	lo = malloc(sizeof(char) * r + 1);
	if (lo == NULL)
		return (NULL);
	for (i = 0; i < r; i++)
		lo[i] = str[i];
	return (lo);
}
