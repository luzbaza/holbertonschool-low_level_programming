#include "lists.h"
#include "string.h"
/**
 * add_node - function that adds a new node to the beginning of a list_t list
 * @head: pointer
 * @str: string
 * Return: Always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
