#include "holberton.h"
/**
 * *cap_string - that capitalizes all words of a string
 * @t: string
 * Return: Always 0
 */
char *cap_string(char *t)
{
	int o, q;
	int s = 32;
	int spaces[] = {',', ';', '.', '?', '"',
			'(', ')', '{', '}', ' ', '\n', '\t'};

	for (o = 0; t[o] != '\0'; o++)
	{
		if (t[o] >= 'a' && t[o] <= 'z')
		{
			t[o] = t[o] - s;
		}
		s = 0;

		for (q = 0; q <= 12; q++)
		{
			if (t[o] == spaces[q])
			{
				q = 12;
				s = 32;
			}
		}
	}
	return (t);
}
