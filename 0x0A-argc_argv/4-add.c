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
	int s = 0, j, d, l;

	for (j = 1; j < argc; j++)
	{
		for (d = 0; argv[j][d] != '\0'; d++)
		{
			if (argv[j][d] < '0' || argv[j][d] > '9')
			{
				printf("Error\n");
				return(1);
			}
		}
		l = atoi(argv[j]);
		s += l;
	}
	printf("%d\n", s);
	return (0);
}
