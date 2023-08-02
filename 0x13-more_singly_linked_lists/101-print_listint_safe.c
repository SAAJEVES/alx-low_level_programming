#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - unique node
 * @head: pointer
 * Return: loop
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *temp, *check;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp = head->next;
	check = (head->next)->next;

	while (check)
	{
		if (temp == check)
		{
			temp = head;
			while (temp != check)
			{
				n++;
				temp = temp->next;
				check = check->next;
			}
			temp = temp->next;
			while (temp != check)
			{
				n++;
				temp = temp->next;
			}
			return (n);
		}
		temp = temp->next;
		check = (check->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a looped list
 * @head: pointer
 * Return: nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n, i = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (n);
}
