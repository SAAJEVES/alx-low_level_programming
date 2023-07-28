#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a linked list
 *
 * @h: the linked list pointer
 *
 * Return: return the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);

	n = 0;

	while (h != NULL)
	{
		if(h->str == NULL)
		{
			printf("[0] (nil)");
			h = h->next;
			n++;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
