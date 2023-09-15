#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free the nodes in a linked list
 *
 * @head: linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	
	temp = head;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	return;
}
