#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add new node at the beginnig
 *
 * @head: a double pointer to a single pointer
 *
 * @str: string to use
 *
 * Return: return a pointer to a list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = (unsigned int)strlen(str);
	new->next = *head;
	*head = new;
	free(new);

	return (*head);
}
