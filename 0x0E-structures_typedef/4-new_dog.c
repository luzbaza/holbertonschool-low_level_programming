#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);
/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = NULL;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		return (NULL);
	}

	p->name = _strdup(name);

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = _strdup(owner);

	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return (p);
}

/**
 * _strdup - functio that returns a pointer
 * allocated space in memory
 * str
 * @str: the string
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len]  != '\0')
	{
		len++;
	}

	ptr = malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		ptr[len] = str[len];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}
