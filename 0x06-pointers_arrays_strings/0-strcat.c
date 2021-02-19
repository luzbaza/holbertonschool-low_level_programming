#include "holberton.h"
/**
 * *_strcat -  function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int lu, j;

	lu = 0;

	while (dest[lu] != '\0')
	{
		++lu;
	}

	for (j = 0; src[j] != '\0'; ++j, ++lu)
	{
		dest[lu] = src[j];
	}

	dest[lu] = '\0';
	return (dest);
}
