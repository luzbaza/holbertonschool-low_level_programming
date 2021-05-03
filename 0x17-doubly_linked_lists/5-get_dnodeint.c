#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list
 * @head: pointer to the beginning of the linked list
 * @index: is the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

		if (head == NULL)
			return (NULL);
		if (index == 0)
			return (head);
		for (i = 0; i < index; i++)
		{
			if (head->next == NULL)
				return (NULL);
			head = head->next;
		}
	return (head);
}
