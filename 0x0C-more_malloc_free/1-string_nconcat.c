#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two string
 * @s1: string one
 * @s2: string two
 * @n: bytes
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *e;
	unsigned int l, a, j1, d2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l = 0; s1[l] != '\0'; l++)
		;
	for (a = 0; s2[a] != '\0' && a < n; a++)
		;
	j1 = l;
	d2 = a;
	e = malloc(sizeof(char) * (j1 + d2 + 1));
	if (e == NULL)
		return (NULL);
	for (l = 0; l < j1; l++)
	{
		e[l] = s1[l];
	}
	for (a = 0; a < d2; a++)
		e[l + a] = s2[a];
	e[l + a] = '\0';
	return (e);
}
