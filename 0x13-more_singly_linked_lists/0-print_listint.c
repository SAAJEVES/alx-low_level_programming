#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: the header pointer
 * Return: a size_t data type ie the number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
	{
		return (-1);
	}
	else
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
