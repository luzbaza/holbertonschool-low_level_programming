#include "lists.h"

/**
 * listint_len - function that returns the number
 * of items in a linked listint_t list.
 * @h: pointer
 * Return: number the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
