#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a value at an index
 * @head: double pointer
 * @idx: index
 * @n: value
 *
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num, i;
	listint_t *temp, *newNode, *prev;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	newNode = (listint_t *)malloc(sizeof(listint_t));
	newNode->n = n;
	num = 0;
	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	if (idx > num)
	{
		free(newNode);
		return (NULL);
	}

	temp = *head;
	i = 0;
	while (temp != NULL)
	{
		if (i == idx)
		{
			if (prev == NULL)
			{
				newNode->next = *head;
				*head = newNode;
			}
			else
			{
				prev->next = newNode;
				newNode->next = temp;
			}
			break;
		}
		prev = temp;
		temp = temp->next;
		i++;
	}
	return (newNode);

}
