#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: is the number of elements in the array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	if (cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]) != 0)
			return (b);
	}
	return (-1);
}
