#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - this checks the number of nodes
 *
 * @h: the doubly linked list
 *
 * Return: this returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);
	n = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
