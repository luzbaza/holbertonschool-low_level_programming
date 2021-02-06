#include <stdio.h>
/**
 * main - numbers
 *
 * Return: letters
 */
int main(void)
{
	int ad;
	char ba;

	for (ad = '0'; ad <= '9'; ad++)
		putchar(ad);
	for (ba = 'a'; ba <= 'f'; ba++)
		putchar(ba);
	putchar('\n');
	return (0);
}
