#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a particular index
 *
 * @h: doubly linked list
 *
 * @idx: index to which the value will be added
 *
 * @n: the value to add
 *
 * Return: NULL or address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int num;
	dlistint_t *temp, *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL || *h == NULL)
		return (NULL);
	new_node->n = n;
	num = 0;
	temp = *h;

	while (temp != NULL)
	{
		if (num == (idx - 1))
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next = new_node;
			return (new_node);
		}
		num++;
		temp = temp->next;
	}
	return (NULL);
}
