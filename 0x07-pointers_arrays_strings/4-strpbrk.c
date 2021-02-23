#include "holberton.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: searched
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int o, y;

	for (o = 0; s[o] != '\0'; o++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[o] == accept[y])
				return (s + o);
		}
	}
	return ('\0');
}
