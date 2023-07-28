#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the node
 *
 * @head: the list of node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *oldList;
	list_t *nextNode;

	oldList = head;

	while (oldList != NULL)
	{
		nextNode = oldList->next;
		free(oldList->str);
		free(oldList);
		oldList = nextNode;
	}
}
