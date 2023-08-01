#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum all data(n) in a linked list
 * @head: the pointer
 *
 * Return: 0 or sum of the data
 */
int sum_listint(listint_t *head)
{
	listint_t *sumNode;
	int sum;

	if (head == NULL)
		return (0);
	sumNode = head;
	sum = 0;

	while (sumNode != NULL)
	{
		sum += sumNode->n;
		sumNode = sumNode->next;
	}
	return (sum);
}
