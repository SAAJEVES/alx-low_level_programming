#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that delete node at an index
 *
 * @head: the doubly linked list
 *
 * @index: the index to delete
 *
 * Return: SUCCESS (1), FAILURE (-1)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int num;
	dlistint_t *temp;

	num = 0;
	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (num == index)
		{
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		num++;
		temp = temp->next;
	}
	return (-1);
}
