#include <stdio.h>
#include "holberton.h"
/**
 * char *_strcpy - copies the string pointed to by
 * @dest: copy to string
 * @src: copy to from string
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0, h;

	while (src[k] != '\0')
		k++;

	for (h = 0; h < k; h++)
		dest[h] = src[h];
	dest[h] = '\0';

	return (dest);
}
