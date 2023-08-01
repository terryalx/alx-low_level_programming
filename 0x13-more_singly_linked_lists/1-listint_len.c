#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list.
 * @h: singly linked list
 *
 * Return: (i) size of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
