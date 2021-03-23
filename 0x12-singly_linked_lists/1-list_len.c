#include "lists.h"

/**
 * list_len - that returns the number of items in a linked list_t list.
 * @h: struct
 * Return: Always 0
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
