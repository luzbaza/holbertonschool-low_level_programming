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
	int count = 0;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
