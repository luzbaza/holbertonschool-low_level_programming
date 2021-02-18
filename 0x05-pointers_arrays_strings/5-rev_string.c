#include "holberton.h"
/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a = 0;
	int c;
	char b = s[0];

	while (s[a] != '\0')
		a++;
	for (c = 0; c < a; c++)
	{
		a--;
		b = s[c];
		s[c] = s[a];
		s[a] = b;
	}
}
