#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a certain position
 * @head: double pointer
 * @idx: of the list where the new node should be added. Index starts at 0
 * @n: value for new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
