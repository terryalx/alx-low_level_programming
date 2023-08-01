#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list.
 * @h: singly linked list
 *
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
