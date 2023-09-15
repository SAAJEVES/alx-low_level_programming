#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - sum all the integers in the linked list
 *
 * @head: the doubly linked list
 *
 * Return: returns the sum value
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	sum = 0;
	if (head == NULL)
		return (sum);
	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
