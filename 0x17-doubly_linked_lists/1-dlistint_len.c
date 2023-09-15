#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - prints the number of elements
 *
 * @h: the head of nodes
 *
 * Return: this returns the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;

	if (h == NULL)
		return (n);

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
