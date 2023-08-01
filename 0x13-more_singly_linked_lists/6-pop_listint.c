#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes the first node
 * @head: double pointer
 *
 * Return: the data of the popped node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *use;

	if (head == NULL)
		return (0);

	use = *head;
	*head = use->next;
	n = use->n;
	free(use);
	return (n);
}
