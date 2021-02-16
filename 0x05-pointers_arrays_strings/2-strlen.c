#include "holberton.h"
/**
 * _strlen - return the value of a string
 * @s : containsthe valor of the variable
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int avi = 0;

	while (s[avi] != '\0')
		avi++;
	return (avi);
}
