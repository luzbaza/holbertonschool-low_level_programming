#include "holberton.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @cd: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int cd)
{
	int he;

	he = (cd % 10);

	if (he < 0)
	{
		he = (-1 * he);

	}
	_putchar (he + '0');
	return (he);
}
