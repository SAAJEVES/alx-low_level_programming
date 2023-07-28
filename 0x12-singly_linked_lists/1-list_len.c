#include "lists.h"
#include <stdio.h>

/**
 * list_len - print the number of list
 *
 * @h: the linked list
 *
 * Return: the number of elemnts
 */
size_t list_len(const list_t *h)
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
