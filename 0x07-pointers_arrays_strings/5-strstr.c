#include "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning
 */
char *_strstr(char *haystack, char *needle)
{
	int g, h, w = 0;

	for (g = 0; haystack[g]; g++)
	{

		if (haystack[g] == needle[0])
		{
			for (h = 0; needle[h]; h++)
			{
				if (haystack[g + h] == needle[h])
					w = 1;
				else
					w = 0;
			}
		}
		if (w == 1)
			return (haystack + g);
	}
	if (*needle == '\0')
		return (haystack);
	else
		return (0);
}
