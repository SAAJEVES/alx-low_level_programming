#include "lists.h"

/**
 * add_nodeint - add node to the end of a linked list
 * @head: a double pointer to a single pointer
 * @n: integer value to be added
 *
 * Return: the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pristineNode;

	pristineNode = malloc(sizeof(listint_t));
	if (pristineNode == NULL)
	{
		return (NULL);
	}

	pristineNode->n = n;
	pristineNode->next = *head;
	*head = pristineNode;

	return (pristineNode);
}
