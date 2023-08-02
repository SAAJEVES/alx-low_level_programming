#include "lists.h"

/**
 * find_listint_loop - find loop
 * @head: pointer
 * Return: address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *back, *fore;

	if (!head)
		return (NULL);
	back = head;
	fore = head;

	while (fore && fore->next)
	{
		back = back->next;
		fore = fore->next->next;

		if (back == fore)
		{
			back = head;
			while (back != fore)
			{
				back = back->next;
				fore = fore->next;
			}
			return (back);
		}
	}
	return (NULL);
}
