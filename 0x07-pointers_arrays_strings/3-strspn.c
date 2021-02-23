#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the initial segment
 * @accept : bytes from
 * Return: the number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	int h = 0, r, k = 1;
	unsigned int z = 0;

	while (s[h] != '\0' && k == 1)
	{
		k = 0;
		for (r = 0; accept[r] != '\0'; r++)
		{
			if (s[h] == accept[r])
			{
				z++;
				k = 1;
				break;
			}
		}
		h++;
	}
	return (z);
}
