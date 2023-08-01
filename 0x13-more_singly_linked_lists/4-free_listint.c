#include "lists.h"

/**
 * free_listint - function that frees listint_t list.
 * @head: singly linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
