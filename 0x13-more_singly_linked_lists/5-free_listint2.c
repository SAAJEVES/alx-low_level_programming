#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: double pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	temp = *head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	temp = NULL;
	*head = NULL;
}
