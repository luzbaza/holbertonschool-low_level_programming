#include <stdio.h>
/**
 * main - alphABET
 *
 *Return: alphabet uppercase
 */
int main(void)
{
	char j;
	char b;

	for (j = 'a' ; j <= 'z'; j++)
	{
		putchar(j);
	}
	for (b = 'a' ; b <= 'Z' ; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
