#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: input one
 * @s2: input two
 * Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
	int f, g, size;
	char *v;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (f = 0; s1[f] != '\0'; f++)
		;
	for (g = 0; s2[g] != '\0'; g++)
		;
	size = f + g + 1;
	v = malloc(sizeof(char) * size);

	if (v == 0)
		return (NULL);
	for (f = 0; s1[f] != '\0'; f++)
	{
		*(v + f) = *(s1 + f);
	}
	for (g = 0; s2[g] != '\0'; g++)
	{
		*(v + f + g) = *(s2 + g);
	}
	return (v);
}
