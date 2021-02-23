#include "holberton.h"
/**
 * *_strchr - locates a character in a string
 * @s: pointer
 * @c: caracter
 * Return: Returns a pointer
 */
char *_strchr(char *s, char c)
{
	int e;

	for (e = 0; s[e] >= '\0'; e++)
	{
		if (s[e] == c)
			return (s + e);
	}
	return ('\0');
}
