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


	int counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		counter++;
		h = h->next;
	}
	return (counter);
}
