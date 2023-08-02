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
	int n = 0;
	listint_t *use;

	if (head == NULL || *head == NULL)
		return (0);

	use = *head;
	n = use->n;
	*head = (*head)->next;
	free(use);

	return (n);
}
