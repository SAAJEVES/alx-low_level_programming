#include "lists.h"

/**
 * free_listint_safe - free list
 * @h: double pointer
 * Return: number of freed nodes
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	int freed;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		freed = *h - (*h)->next;
		if (freed > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			n++;
		}
		else
		{
			free(*h);
			*h = NULL;
			n++;
			break;
		}
	}
	*h = NULL;
	return (n);
}
