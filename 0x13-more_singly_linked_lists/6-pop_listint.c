#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - unction that removes the head node
 * from a linked list listint_t
 * @head: double pointer
 * Return: if the linked list is empty it returns 0
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
