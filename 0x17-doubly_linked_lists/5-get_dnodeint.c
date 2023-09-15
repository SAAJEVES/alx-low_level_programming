#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - to get the value at a node
 *
 * @head: the doubly linked list
 *
 * @index: index
 *
 * Return: the value at a particular index or NULL if doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n;

	n = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL)
	{
		if (n == index)
			return (temp);
		temp = temp->next;
		n++;
	}
	return (NULL);
}
