#include "holberton.h"
/**
 * leet - string
 * @be: string
 * Return: Always 0
 */
char *leet(char *be)
{
	int d = 0, num[5] = {4, 3, 0, 1, 7}, ho = 0;
	char alpha[10] = "AaEeOoLlTt";

	for (; be[d]; d++)
	{
		for (ho = 0; (be[d] != alpha[ho] && ho < 10); ho++)
			;
		if (be[d] == alpha[ho])
		{
			ho /= 2;
			be[d] = (num[ho] + '0');
		}

	}
	return (be);
}
