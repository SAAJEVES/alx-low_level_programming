#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - get node of an index given
 * @head: pointer to a datatype
 * @index: index
 *
 * Return: return node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n, num;
	listint_t *getNode, *theNode;

	if (head == NULL)
		return (NULL);
	num = 0;
	getNode = head;
	while (getNode != NULL)
	{
		num++;
		getNode = getNode->next;
	}
	if (index > num)
		return (NULL);
	getNode = head;
	n = 0;
	while (getNode != NULL)
	{
		if (n == index)
		{
			theNode = getNode;
			break;
		}
		n++;
		getNode = getNode->next;
	}
	return (theNode);
}
