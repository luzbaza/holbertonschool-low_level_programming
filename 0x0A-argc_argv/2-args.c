#include "holberton.h"
#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array pointing to arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
