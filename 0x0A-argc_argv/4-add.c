#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: number of arguments
 * @argv: array pointing to arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int e, s = 0;

	if (argc < 1)
		return (0);

	for (e = 1; e < argc; e++)
	{
		if (!atoi(argv[e]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		s += atoi(argv[e]);
	}
	printf("%d\n", s);

	return (0);
}
