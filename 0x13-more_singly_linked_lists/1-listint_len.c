#include "lists.h"

/**
 * listint_len - check the number of elements in a node
 * @h: header pointer to the linked list
 *
 * Return: returns the number of elements present
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
	{
		return (i);
	}
	else
	{
		while (h != NULL)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}
