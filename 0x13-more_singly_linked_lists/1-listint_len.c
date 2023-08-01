#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list
 * @h: singly linked list
 *
 * Return: (i) -> number of elements in listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
