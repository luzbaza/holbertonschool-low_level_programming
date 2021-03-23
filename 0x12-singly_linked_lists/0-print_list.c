#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: struct
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{

	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
