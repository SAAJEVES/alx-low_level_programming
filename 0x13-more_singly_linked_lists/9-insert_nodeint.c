#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a value at an index
 * @head: double pointer
 * @idx: index
 * @n: value
 *
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (i == idx)
	{
		prev->next = new_node;
		new_node->next = current;
		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
