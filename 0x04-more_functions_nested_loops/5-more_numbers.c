#include "holberton.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int l;
	int n;

	for (l = 0; l < 10; l++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
				_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
		}
		_putchar('\n');
	}
}
