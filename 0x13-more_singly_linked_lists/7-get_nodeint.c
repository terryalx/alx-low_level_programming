#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a
 * listint_t linked list.
 *
 * @index:  index node -> 0
 * @head: singly linked list
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}

		i++;
		head = head->next;
	}

	return (NULL);
}
