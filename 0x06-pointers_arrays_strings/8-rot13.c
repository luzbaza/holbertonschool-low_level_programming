#include "holberton.h"
/**
 * rot13 - encryption
 * @fe: string
 * Return: Always 0
 */
char *rot13(char *fe)
{
	int g = 0, r = 0, de = -1;
	char alpha[] = "ANBOCPDQERFSGTHUIVJWKXLYMZanbocpdqerfsgthuivjwkxlymz";

	for (g = 0; fe[g]; g++)
	{
		de = 1;
		for (r = 0; fe[g] != alpha[r] && r < 52; r++)
			de = (de * -1);
		if (fe[g] == alpha[r])
			fe[g] = (fe[g] + (13 * de));
	}
	return (fe);
}
