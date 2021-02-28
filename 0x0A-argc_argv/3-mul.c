#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that multiplies two numbers
 * atoi - function that converts a string into a int
 * @argc: number of arguments
 * @argv: array pointing to arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b, r = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (b = 1; b < argc; b++)
		{
			r *= atoi(argv[b]);
		}
		printf("%d\n", r);
	}
	return (0);
}
