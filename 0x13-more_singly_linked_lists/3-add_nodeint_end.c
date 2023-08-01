#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to a pointer
 * @n: integer to add
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pristineNode;
	listint_t *temp;

	pristineNode = malloc(sizeof(listint_t));
	if (pristineNode == NULL)
		return (NULL);

	pristineNode->n = n;
	pristineNode->next = NULL;
	if (*head == NULL)
	{
		*head = pristineNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = pristineNode;
	}
	return (pristineNode);
}
