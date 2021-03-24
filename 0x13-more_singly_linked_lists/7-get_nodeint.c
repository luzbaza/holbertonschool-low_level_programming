#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node 
 * of a linked list listint_t.
 * @head: pointer to the first node in the list
 * @index: is the index of the node, starting at 0
 * Return: if the node does not exist, it returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
