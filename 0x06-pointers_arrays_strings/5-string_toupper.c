#include "holberton.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @f: string
 * Return: f
 */
char *string_toupper(char *f)
{
	int y;

	for (y = 0; f[y] != '\0'; y++)
	{
		if (f[y] >= 'a' && f[y] <= 'z')
			f[y] = f[y] - 32;
	}
	return (f);
}
