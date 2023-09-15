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

	temp = *head;
	new_node->n = n;
	new_node->next = temp;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
