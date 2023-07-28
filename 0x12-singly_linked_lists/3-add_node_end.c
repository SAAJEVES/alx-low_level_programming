#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add node at the end
 *
 * @head: pointer to a pointer
 * @str: string literal
 *
 * Return: a list_t data type
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *oldList;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = (unsigned int)strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		oldList = *head;
		while (oldList->next != NULL)
		{
			oldList = oldList->next;
		}
		oldList->next = new;
	}
	return (oldList);
}
