#include "holberton.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: copy to
 * @src: copy to from
 * @n: it will use at most n bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, p;

	for (d = 0; dest[d] != '\0'; d++)
	{
	}

		for (p = 0; p < n; p++)
		{
			dest[d + p] = src[p];
			if (src[p] == '\0')
				p = n;
		}
	return (dest);
}
