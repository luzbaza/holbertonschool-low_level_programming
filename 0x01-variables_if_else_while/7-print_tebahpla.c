#include <stdio.h>
/**
 * main - alphabet
 *
 * Return: the alphabet
 */
int main(void)
{
	char t;

	for (t = 'z'; t >= 'a'; t--)
		putchar(t);
	putchar('\n');
	return (0);
}
