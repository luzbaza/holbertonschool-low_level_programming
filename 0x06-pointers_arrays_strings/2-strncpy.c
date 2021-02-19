#include "holberton.h"
/**
 * *_strncpy -  function that copies a string
 * @dest: copy to
 * @src: copy to from
 * @n: it will use at most n bytes
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
		if (j < n)
			dest[j] = src[j];
	while (j < n)
		dest[j++] = '\0';
	return (dest);
}
