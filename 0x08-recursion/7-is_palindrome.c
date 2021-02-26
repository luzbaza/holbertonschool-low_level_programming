#include "holberton.h"
#include "2-strlen_recursion.c"
/**
 * checker - string is palindrome
 * @s: string being evaluated
 * @j: highest index of string
 * @l: lowest index of string
 * Return: Always 0
 */
int checker(char *s, int j, int l)
{
	if (j <= l)
		return (1);
	if (s[j] != s[l])
		return (0);
	return (checker(s, j - 1, l + 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string being evaluated
 * Return:  1 if true, otherwise 0
 */
int is_palindrome(char *s)
{
	int j, l;

	if (s[0] == '\0')
		return (1);
	j = _strlen_recursion(s);
	l = checker(s, j - 1, 0);
	return (l);
}
