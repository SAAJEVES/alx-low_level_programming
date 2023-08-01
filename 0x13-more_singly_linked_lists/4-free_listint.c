#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the nodes in the linked list
 * @head: the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *sullied;
	listint_t *nextSullied;

	sullied = head;

	while (sullied != NULL)
	{
		nextSullied = sullied->next;
		free(sullied);
		sullied = nextSullied;
	}
}
