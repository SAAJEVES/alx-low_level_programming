#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 *
 * @head: the linked list
 *
 * @n: the integer to add
 *
 * Return: the node added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	*head = new_node;
	new_node->next = temp;
	temp->prev = new_node;

	return (new_node);
}
