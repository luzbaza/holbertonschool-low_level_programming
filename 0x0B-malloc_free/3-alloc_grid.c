#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  pointer to a 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return:  returns a pointer to a 2 dimensional
 */
int **alloc_grid(int width, int height)
{
	int **dimen, a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	dimen = malloc(sizeof(int *) * height);
	if (dimen == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		dimen[a] = malloc(sizeof(int) * width);
		if (dimen[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(dimen[a]);
			}
			free(dimen);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			dimen[a][b] = 0;
	}
	return (dimen);

}
