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
	int f, g, size = 0;
	char *v;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (f = 0; f <= *s1; f++)
	{
	}
	for (g = 0; g <= *s2; g++)
	{
	}
	v = malloc(sizeof(char) * (f + g + 1));
	if (v == NULL)
		return (NULL);
	while (*s1)
	{
		v[size] = *s1;
		size++;
		s1++;
	}
	while (*s2)
	{
		v[size] = *s2;
		size++;
		s2++;
	}
	return (v);
}
